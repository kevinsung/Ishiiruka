#pragma once

#include "Common/ChunkFile.h"
#include "Common/CommonTypes.h"
#include <unordered_map>

class PointerWrap;

class SlippiSavestate
{
  public:
	struct PreserveBlock
	{
		u32 address;
		u32 length;

		bool operator==(const PreserveBlock &p) const { return address == p.address && length == p.length; }
	};

	SlippiSavestate();
	~SlippiSavestate();

	void Capture();
	void Load(std::vector<PreserveBlock> blocks);

  private:
	const u32 FIRST_ALARM_PTR_ADDR = 0x804D7358;
	const u32 READ_ALARM_ADDR = 0x804a74f0;
	const u32 ALARM_DATA_SIZE = 0x28;

	typedef struct
	{
		u32 startAddress;
		u32 endAddress;
		u8 *data;
	} ssBackupLoc;

	// These are the game locations to back up and restore
	std::vector<ssBackupLoc> backupLocs = {};

	void initBackupLocs();

	typedef struct
	{
		u32 address;
		u32 value;
	} ssBackupStaticToHeapPtr;

	struct preserve_hash_fn
	{
		std::size_t operator()(const PreserveBlock &node) const
		{
			return node.address ^ node.length; // TODO: This is probably a bad hash
		}
	};

	std::unordered_map<PreserveBlock, std::vector<u8>, preserve_hash_fn> preservationMap;

	std::vector<u8> dolphinSsBackup;

	std::vector<u8> alarmPtrs;

	u32 origAlarmPtr;

	void getDolphinState(PointerWrap &p);
};
