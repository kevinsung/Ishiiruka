// Copyright 2013 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#include "VideoBackends/OGL/GLExtensions/gl_common.h"

extern PFNGLACTIVETEXTUREARBPROC glActiveTexture;
extern PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTexture;
extern PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
extern PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
extern PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
extern PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
extern PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixd;
extern PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixf;
extern PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixd;
extern PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixf;
extern PFNGLMULTITEXCOORD1DARBPROC glMultiTexCoord1d;
extern PFNGLMULTITEXCOORD1DVARBPROC glMultiTexCoord1dv;
extern PFNGLMULTITEXCOORD1FARBPROC glMultiTexCoord1f;
extern PFNGLMULTITEXCOORD1FVARBPROC glMultiTexCoord1fv;
extern PFNGLMULTITEXCOORD1IARBPROC glMultiTexCoord1i;
extern PFNGLMULTITEXCOORD1IVARBPROC glMultiTexCoord1iv;
extern PFNGLMULTITEXCOORD1SARBPROC glMultiTexCoord1s;
extern PFNGLMULTITEXCOORD1SVARBPROC glMultiTexCoord1sv;
extern PFNGLMULTITEXCOORD2DARBPROC glMultiTexCoord2d;
extern PFNGLMULTITEXCOORD2DVARBPROC glMultiTexCoord2dv;
extern PFNGLMULTITEXCOORD2FARBPROC glMultiTexCoord2f;
extern PFNGLMULTITEXCOORD2FVARBPROC glMultiTexCoord2fv;
extern PFNGLMULTITEXCOORD2IARBPROC glMultiTexCoord2i;
extern PFNGLMULTITEXCOORD2IVARBPROC glMultiTexCoord2iv;
extern PFNGLMULTITEXCOORD2SARBPROC glMultiTexCoord2s;
extern PFNGLMULTITEXCOORD2SVARBPROC glMultiTexCoord2sv;
extern PFNGLMULTITEXCOORD3DARBPROC glMultiTexCoord3d;
extern PFNGLMULTITEXCOORD3DVARBPROC glMultiTexCoord3dv;
extern PFNGLMULTITEXCOORD3FARBPROC glMultiTexCoord3f;
extern PFNGLMULTITEXCOORD3FVARBPROC glMultiTexCoord3fv;
extern PFNGLMULTITEXCOORD3IARBPROC glMultiTexCoord3i;
extern PFNGLMULTITEXCOORD3IVARBPROC glMultiTexCoord3iv;
extern PFNGLMULTITEXCOORD3SARBPROC glMultiTexCoord3s;
extern PFNGLMULTITEXCOORD3SVARBPROC glMultiTexCoord3sv;
extern PFNGLMULTITEXCOORD4DARBPROC glMultiTexCoord4d;
extern PFNGLMULTITEXCOORD4DVARBPROC glMultiTexCoord4dv;
extern PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4f;
extern PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fv;
extern PFNGLMULTITEXCOORD4IARBPROC glMultiTexCoord4i;
extern PFNGLMULTITEXCOORD4IVARBPROC glMultiTexCoord4iv;
extern PFNGLMULTITEXCOORD4SARBPROC glMultiTexCoord4s;
extern PFNGLMULTITEXCOORD4SVARBPROC glMultiTexCoord4sv;
extern PFNGLSAMPLECOVERAGEARBPROC glSampleCoverage;

