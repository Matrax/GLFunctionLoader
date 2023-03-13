#ifndef GL_FUNCTION_LOADER_HPP
#define GL_FUNCTION_LOADER_HPP

#if defined(_WIN32) or defined(_WIN64)
#include <Windows.h>
#endif

#include "KHR/khrplatform.h"
#include "glcorearb.h"

class GLFunctionLoader {

public:

// Function pointers

inline static PFNGLCULLFACEPROC glCullFace = nullptr;
inline static PFNGLFRONTFACEPROC glFrontFace = nullptr;
inline static PFNGLHINTPROC glHint = nullptr;
inline static PFNGLLINEWIDTHPROC glLineWidth = nullptr;
inline static PFNGLPOINTSIZEPROC glPointSize = nullptr;
inline static PFNGLPOLYGONMODEPROC glPolygonMode = nullptr;
inline static PFNGLSCISSORPROC glScissor = nullptr;
inline static PFNGLTEXPARAMETERFPROC glTexParameterf = nullptr;
inline static PFNGLTEXPARAMETERFVPROC glTexParameterfv = nullptr;
inline static PFNGLTEXPARAMETERIPROC glTexParameteri = nullptr;
inline static PFNGLTEXPARAMETERIVPROC glTexParameteriv = nullptr;
inline static PFNGLTEXIMAGE1DPROC glTexImage1D = nullptr;
inline static PFNGLTEXIMAGE2DPROC glTexImage2D = nullptr;
inline static PFNGLDRAWBUFFERPROC glDrawBuffer = nullptr;
inline static PFNGLCLEARPROC glClear = nullptr;
inline static PFNGLCLEARCOLORPROC glClearColor = nullptr;
inline static PFNGLCLEARSTENCILPROC glClearStencil = nullptr;
inline static PFNGLCLEARDEPTHPROC glClearDepth = nullptr;
inline static PFNGLSTENCILMASKPROC glStencilMask = nullptr;
inline static PFNGLCOLORMASKPROC glColorMask = nullptr;
inline static PFNGLDEPTHMASKPROC glDepthMask = nullptr;
inline static PFNGLDISABLEPROC glDisable = nullptr;
inline static PFNGLENABLEPROC glEnable = nullptr;
inline static PFNGLFINISHPROC glFinish = nullptr;
inline static PFNGLFLUSHPROC glFlush = nullptr;
inline static PFNGLBLENDFUNCPROC glBlendFunc = nullptr;
inline static PFNGLLOGICOPPROC glLogicOp = nullptr;
inline static PFNGLSTENCILFUNCPROC glStencilFunc = nullptr;
inline static PFNGLSTENCILOPPROC glStencilOp = nullptr;
inline static PFNGLDEPTHFUNCPROC glDepthFunc = nullptr;
inline static PFNGLPIXELSTOREFPROC glPixelStoref = nullptr;
inline static PFNGLPIXELSTOREIPROC glPixelStorei = nullptr;
inline static PFNGLREADBUFFERPROC glReadBuffer = nullptr;
inline static PFNGLREADPIXELSPROC glReadPixels = nullptr;
inline static PFNGLGETBOOLEANVPROC glGetBooleanv = nullptr;
inline static PFNGLGETDOUBLEVPROC glGetDoublev = nullptr;
inline static PFNGLGETERRORPROC glGetError = nullptr;
inline static PFNGLGETFLOATVPROC glGetFloatv = nullptr;
inline static PFNGLGETINTEGERVPROC glGetIntegerv = nullptr;
inline static PFNGLGETSTRINGPROC glGetString = nullptr;
inline static PFNGLGETTEXIMAGEPROC glGetTexImage = nullptr;
inline static PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv = nullptr;
inline static PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv = nullptr;
inline static PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv = nullptr;
inline static PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv = nullptr;
inline static PFNGLISENABLEDPROC glIsEnabled = nullptr;
inline static PFNGLDEPTHRANGEPROC glDepthRange = nullptr;
inline static PFNGLVIEWPORTPROC glViewport = nullptr;
inline static PFNGLDRAWARRAYSPROC glDrawArrays = nullptr;
inline static PFNGLDRAWELEMENTSPROC glDrawElements = nullptr;
inline static PFNGLGETPOINTERVPROC glGetPointerv = nullptr;
inline static PFNGLPOLYGONOFFSETPROC glPolygonOffset = nullptr;
inline static PFNGLCOPYTEXIMAGE1DPROC glCopyTexImage1D = nullptr;
inline static PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D = nullptr;
inline static PFNGLCOPYTEXSUBIMAGE1DPROC glCopyTexSubImage1D = nullptr;
inline static PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D = nullptr;
inline static PFNGLTEXSUBIMAGE1DPROC glTexSubImage1D = nullptr;
inline static PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D = nullptr;
inline static PFNGLBINDTEXTUREPROC glBindTexture = nullptr;
inline static PFNGLDELETETEXTURESPROC glDeleteTextures = nullptr;
inline static PFNGLGENTEXTURESPROC glGenTextures = nullptr;
inline static PFNGLISTEXTUREPROC glIsTexture = nullptr;
inline static PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements = nullptr;
inline static PFNGLTEXIMAGE3DPROC glTexImage3D = nullptr;
inline static PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D = nullptr;
inline static PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D = nullptr;
inline static PFNGLACTIVETEXTUREPROC glActiveTexture = nullptr;
inline static PFNGLSAMPLECOVERAGEPROC glSampleCoverage = nullptr;
inline static PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D = nullptr;
inline static PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D = nullptr;
inline static PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D = nullptr;
inline static PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D = nullptr;
inline static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D = nullptr;
inline static PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D = nullptr;
inline static PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage = nullptr;
inline static PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = nullptr;
inline static PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays = nullptr;
inline static PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements = nullptr;
inline static PFNGLPOINTPARAMETERFPROC glPointParameterf = nullptr;
inline static PFNGLPOINTPARAMETERFVPROC glPointParameterfv = nullptr;
inline static PFNGLPOINTPARAMETERIPROC glPointParameteri = nullptr;
inline static PFNGLPOINTPARAMETERIVPROC glPointParameteriv = nullptr;
inline static PFNGLBLENDCOLORPROC glBlendColor = nullptr;
inline static PFNGLBLENDEQUATIONPROC glBlendEquation = nullptr;
inline static PFNGLGENQUERIESPROC glGenQueries = nullptr;
inline static PFNGLDELETEQUERIESPROC glDeleteQueries = nullptr;
inline static PFNGLISQUERYPROC glIsQuery = nullptr;
inline static PFNGLBEGINQUERYPROC glBeginQuery = nullptr;
inline static PFNGLENDQUERYPROC glEndQuery = nullptr;
inline static PFNGLGETQUERYIVPROC glGetQueryiv = nullptr;
inline static PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv = nullptr;
inline static PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv = nullptr;
inline static PFNGLBINDBUFFERPROC glBindBuffer = nullptr;
inline static PFNGLDELETEBUFFERSPROC glDeleteBuffers = nullptr;
inline static PFNGLGENBUFFERSPROC glGenBuffers = nullptr;
inline static PFNGLISBUFFERPROC glIsBuffer = nullptr;
inline static PFNGLBUFFERDATAPROC glBufferData = nullptr;
inline static PFNGLBUFFERSUBDATAPROC glBufferSubData = nullptr;
inline static PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = nullptr;
inline static PFNGLMAPBUFFERPROC glMapBuffer = nullptr;
inline static PFNGLUNMAPBUFFERPROC glUnmapBuffer = nullptr;
inline static PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = nullptr;
inline static PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = nullptr;
inline static PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = nullptr;
inline static PFNGLDRAWBUFFERSPROC glDrawBuffers = nullptr;
inline static PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate = nullptr;
inline static PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate = nullptr;
inline static PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate = nullptr;
inline static PFNGLATTACHSHADERPROC glAttachShader = nullptr;
inline static PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = nullptr;
inline static PFNGLCOMPILESHADERPROC glCompileShader = nullptr;
inline static PFNGLCREATEPROGRAMPROC glCreateProgram = nullptr;
inline static PFNGLCREATESHADERPROC glCreateShader = nullptr;
inline static PFNGLDELETEPROGRAMPROC glDeleteProgram = nullptr;
inline static PFNGLDELETESHADERPROC glDeleteShader = nullptr;
inline static PFNGLDETACHSHADERPROC glDetachShader = nullptr;
inline static PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = nullptr;
inline static PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = nullptr;
inline static PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib = nullptr;
inline static PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform = nullptr;
inline static PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = nullptr;
inline static PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = nullptr;
inline static PFNGLGETPROGRAMIVPROC glGetProgramiv = nullptr;
inline static PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = nullptr;
inline static PFNGLGETSHADERIVPROC glGetShaderiv = nullptr;
inline static PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = nullptr;
inline static PFNGLGETSHADERSOURCEPROC glGetShaderSource = nullptr;
inline static PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = nullptr;
inline static PFNGLGETUNIFORMFVPROC glGetUniformfv = nullptr;
inline static PFNGLGETUNIFORMIVPROC glGetUniformiv = nullptr;
inline static PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv = nullptr;
inline static PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv = nullptr;
inline static PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv = nullptr;
inline static PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv = nullptr;
inline static PFNGLISPROGRAMPROC glIsProgram = nullptr;
inline static PFNGLISSHADERPROC glIsShader = nullptr;
inline static PFNGLLINKPROGRAMPROC glLinkProgram = nullptr;
inline static PFNGLSHADERSOURCEPROC glShaderSource = nullptr;
inline static PFNGLUSEPROGRAMPROC glUseProgram = nullptr;
inline static PFNGLUNIFORM1FPROC glUniform1f = nullptr;
inline static PFNGLUNIFORM2FPROC glUniform2f = nullptr;
inline static PFNGLUNIFORM3FPROC glUniform3f = nullptr;
inline static PFNGLUNIFORM4FPROC glUniform4f = nullptr;
inline static PFNGLUNIFORM1IPROC glUniform1i = nullptr;
inline static PFNGLUNIFORM2IPROC glUniform2i = nullptr;
inline static PFNGLUNIFORM3IPROC glUniform3i = nullptr;
inline static PFNGLUNIFORM4IPROC glUniform4i = nullptr;
inline static PFNGLUNIFORM1FVPROC glUniform1fv = nullptr;
inline static PFNGLUNIFORM2FVPROC glUniform2fv = nullptr;
inline static PFNGLUNIFORM3FVPROC glUniform3fv = nullptr;
inline static PFNGLUNIFORM4FVPROC glUniform4fv = nullptr;
inline static PFNGLUNIFORM1IVPROC glUniform1iv = nullptr;
inline static PFNGLUNIFORM2IVPROC glUniform2iv = nullptr;
inline static PFNGLUNIFORM3IVPROC glUniform3iv = nullptr;
inline static PFNGLUNIFORM4IVPROC glUniform4iv = nullptr;
inline static PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = nullptr;
inline static PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = nullptr;
inline static PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = nullptr;
inline static PFNGLVALIDATEPROGRAMPROC glValidateProgram = nullptr;
inline static PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d = nullptr;
inline static PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv = nullptr;
inline static PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f = nullptr;
inline static PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv = nullptr;
inline static PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s = nullptr;
inline static PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv = nullptr;
inline static PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d = nullptr;
inline static PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv = nullptr;
inline static PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f = nullptr;
inline static PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv = nullptr;
inline static PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s = nullptr;
inline static PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv = nullptr;
inline static PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d = nullptr;
inline static PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv = nullptr;
inline static PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f = nullptr;
inline static PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv = nullptr;
inline static PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s = nullptr;
inline static PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv = nullptr;
inline static PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv = nullptr;
inline static PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv = nullptr;
inline static PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv = nullptr;
inline static PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub = nullptr;
inline static PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv = nullptr;
inline static PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv = nullptr;
inline static PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv = nullptr;
inline static PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv = nullptr;
inline static PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d = nullptr;
inline static PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv = nullptr;
inline static PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f = nullptr;
inline static PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv = nullptr;
inline static PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv = nullptr;
inline static PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s = nullptr;
inline static PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv = nullptr;
inline static PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv = nullptr;
inline static PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv = nullptr;
inline static PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv = nullptr;
inline static PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = nullptr;
inline static PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv = nullptr;
inline static PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv = nullptr;
inline static PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv = nullptr;
inline static PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv = nullptr;
inline static PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv = nullptr;
inline static PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv = nullptr;
inline static PFNGLCOLORMASKIPROC glColorMaski = nullptr;
inline static PFNGLGETBOOLEANI_VPROC glGetBooleani_v = nullptr;
inline static PFNGLGETINTEGERI_VPROC glGetIntegeri_v = nullptr;
inline static PFNGLENABLEIPROC glEnablei = nullptr;
inline static PFNGLDISABLEIPROC glDisablei = nullptr;
inline static PFNGLISENABLEDIPROC glIsEnabledi = nullptr;
inline static PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback = nullptr;
inline static PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback = nullptr;
inline static PFNGLBINDBUFFERRANGEPROC glBindBufferRange = nullptr;
inline static PFNGLBINDBUFFERBASEPROC glBindBufferBase = nullptr;
inline static PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings = nullptr;
inline static PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying = nullptr;
inline static PFNGLCLAMPCOLORPROC glClampColor = nullptr;
inline static PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender = nullptr;
inline static PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender = nullptr;
inline static PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer = nullptr;
inline static PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv = nullptr;
inline static PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv = nullptr;
inline static PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i = nullptr;
inline static PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i = nullptr;
inline static PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i = nullptr;
inline static PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i = nullptr;
inline static PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui = nullptr;
inline static PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui = nullptr;
inline static PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui = nullptr;
inline static PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui = nullptr;
inline static PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv = nullptr;
inline static PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv = nullptr;
inline static PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv = nullptr;
inline static PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv = nullptr;
inline static PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv = nullptr;
inline static PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv = nullptr;
inline static PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv = nullptr;
inline static PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv = nullptr;
inline static PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv = nullptr;
inline static PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv = nullptr;
inline static PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv = nullptr;
inline static PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv = nullptr;
inline static PFNGLGETUNIFORMUIVPROC glGetUniformuiv = nullptr;
inline static PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation = nullptr;
inline static PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation = nullptr;
inline static PFNGLUNIFORM1UIPROC glUniform1ui = nullptr;
inline static PFNGLUNIFORM2UIPROC glUniform2ui = nullptr;
inline static PFNGLUNIFORM3UIPROC glUniform3ui = nullptr;
inline static PFNGLUNIFORM4UIPROC glUniform4ui = nullptr;
inline static PFNGLUNIFORM1UIVPROC glUniform1uiv = nullptr;
inline static PFNGLUNIFORM2UIVPROC glUniform2uiv = nullptr;
inline static PFNGLUNIFORM3UIVPROC glUniform3uiv = nullptr;
inline static PFNGLUNIFORM4UIVPROC glUniform4uiv = nullptr;
inline static PFNGLTEXPARAMETERIIVPROC glTexParameterIiv = nullptr;
inline static PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv = nullptr;
inline static PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv = nullptr;
inline static PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv = nullptr;
inline static PFNGLCLEARBUFFERIVPROC glClearBufferiv = nullptr;
inline static PFNGLCLEARBUFFERUIVPROC glClearBufferuiv = nullptr;
inline static PFNGLCLEARBUFFERFVPROC glClearBufferfv = nullptr;
inline static PFNGLCLEARBUFFERFIPROC glClearBufferfi = nullptr;
inline static PFNGLGETSTRINGIPROC glGetStringi = nullptr;
inline static PFNGLISRENDERBUFFERPROC glIsRenderbuffer = nullptr;
inline static PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = nullptr;
inline static PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = nullptr;
inline static PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = nullptr;
inline static PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = nullptr;
inline static PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv = nullptr;
inline static PFNGLISFRAMEBUFFERPROC glIsFramebuffer = nullptr;
inline static PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = nullptr;
inline static PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = nullptr;
inline static PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = nullptr;
inline static PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = nullptr;
inline static PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D = nullptr;
inline static PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = nullptr;
inline static PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D = nullptr;
inline static PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = nullptr;
inline static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = nullptr;
inline static PFNGLGENERATEMIPMAPPROC glGenerateMipmap = nullptr;
inline static PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer = nullptr;
inline static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample = nullptr;
inline static PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer = nullptr;
inline static PFNGLMAPBUFFERRANGEPROC glMapBufferRange = nullptr;
inline static PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange = nullptr;
inline static PFNGLBINDVERTEXARRAYPROC glBindVertexArray = nullptr;
inline static PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = nullptr;
inline static PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = nullptr;
inline static PFNGLISVERTEXARRAYPROC glIsVertexArray = nullptr;
inline static PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced = nullptr;
inline static PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced = nullptr;
inline static PFNGLTEXBUFFERPROC glTexBuffer = nullptr;
inline static PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex = nullptr;
inline static PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData = nullptr;
inline static PFNGLGETUNIFORMINDICESPROC glGetUniformIndices = nullptr;
inline static PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv = nullptr;
inline static PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName = nullptr;
inline static PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex = nullptr;
inline static PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv = nullptr;
inline static PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName = nullptr;
inline static PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding = nullptr;
inline static PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex = nullptr;
inline static PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex = nullptr;
inline static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex = nullptr;
inline static PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex = nullptr;
inline static PFNGLPROVOKINGVERTEXPROC glProvokingVertex = nullptr;
inline static PFNGLFENCESYNCPROC glFenceSync = nullptr;
inline static PFNGLISSYNCPROC glIsSync = nullptr;
inline static PFNGLDELETESYNCPROC glDeleteSync = nullptr;
inline static PFNGLCLIENTWAITSYNCPROC glClientWaitSync = nullptr;
inline static PFNGLWAITSYNCPROC glWaitSync = nullptr;
inline static PFNGLGETINTEGER64VPROC glGetInteger64v = nullptr;
inline static PFNGLGETSYNCIVPROC glGetSynciv = nullptr;
inline static PFNGLGETINTEGER64I_VPROC glGetInteger64i_v = nullptr;
inline static PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v = nullptr;
inline static PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture = nullptr;
inline static PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample = nullptr;
inline static PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample = nullptr;
inline static PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv = nullptr;
inline static PFNGLSAMPLEMASKIPROC glSampleMaski = nullptr;
inline static PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed = nullptr;
inline static PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex = nullptr;
inline static PFNGLGENSAMPLERSPROC glGenSamplers = nullptr;
inline static PFNGLDELETESAMPLERSPROC glDeleteSamplers = nullptr;
inline static PFNGLISSAMPLERPROC glIsSampler = nullptr;
inline static PFNGLBINDSAMPLERPROC glBindSampler = nullptr;
inline static PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri = nullptr;
inline static PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv = nullptr;
inline static PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf = nullptr;
inline static PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv = nullptr;
inline static PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv = nullptr;
inline static PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv = nullptr;
inline static PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv = nullptr;
inline static PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv = nullptr;
inline static PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv = nullptr;
inline static PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv = nullptr;
inline static PFNGLQUERYCOUNTERPROC glQueryCounter = nullptr;
inline static PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v = nullptr;
inline static PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v = nullptr;
inline static PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor = nullptr;
inline static PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui = nullptr;
inline static PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv = nullptr;
inline static PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui = nullptr;
inline static PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv = nullptr;
inline static PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui = nullptr;
inline static PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv = nullptr;
inline static PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui = nullptr;
inline static PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv = nullptr;
inline static PFNGLMINSAMPLESHADINGPROC glMinSampleShading = nullptr;
inline static PFNGLBLENDEQUATIONIPROC glBlendEquationi = nullptr;
inline static PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei = nullptr;
inline static PFNGLBLENDFUNCIPROC glBlendFunci = nullptr;
inline static PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei = nullptr;
inline static PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect = nullptr;
inline static PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect = nullptr;
inline static PFNGLUNIFORM1DPROC glUniform1d = nullptr;
inline static PFNGLUNIFORM2DPROC glUniform2d = nullptr;
inline static PFNGLUNIFORM3DPROC glUniform3d = nullptr;
inline static PFNGLUNIFORM4DPROC glUniform4d = nullptr;
inline static PFNGLUNIFORM1DVPROC glUniform1dv = nullptr;
inline static PFNGLUNIFORM2DVPROC glUniform2dv = nullptr;
inline static PFNGLUNIFORM3DVPROC glUniform3dv = nullptr;
inline static PFNGLUNIFORM4DVPROC glUniform4dv = nullptr;
inline static PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv = nullptr;
inline static PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv = nullptr;
inline static PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv = nullptr;
inline static PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv = nullptr;
inline static PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv = nullptr;
inline static PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv = nullptr;
inline static PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv = nullptr;
inline static PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv = nullptr;
inline static PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv = nullptr;
inline static PFNGLGETUNIFORMDVPROC glGetUniformdv = nullptr;
inline static PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation = nullptr;
inline static PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex = nullptr;
inline static PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv = nullptr;
inline static PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName = nullptr;
inline static PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName = nullptr;
inline static PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv = nullptr;
inline static PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv = nullptr;
inline static PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv = nullptr;
inline static PFNGLPATCHPARAMETERIPROC glPatchParameteri = nullptr;
inline static PFNGLPATCHPARAMETERFVPROC glPatchParameterfv = nullptr;
inline static PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback = nullptr;
inline static PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks = nullptr;
inline static PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks = nullptr;
inline static PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback = nullptr;
inline static PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback = nullptr;
inline static PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback = nullptr;
inline static PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback = nullptr;
inline static PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream = nullptr;
inline static PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed = nullptr;
inline static PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed = nullptr;
inline static PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv = nullptr;
inline static PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler = nullptr;
inline static PFNGLSHADERBINARYPROC glShaderBinary = nullptr;
inline static PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat = nullptr;
inline static PFNGLDEPTHRANGEFPROC glDepthRangef = nullptr;
inline static PFNGLCLEARDEPTHFPROC glClearDepthf = nullptr;
inline static PFNGLGETPROGRAMBINARYPROC glGetProgramBinary = nullptr;
inline static PFNGLPROGRAMBINARYPROC glProgramBinary = nullptr;
inline static PFNGLPROGRAMPARAMETERIPROC glProgramParameteri = nullptr;
inline static PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages = nullptr;
inline static PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram = nullptr;
inline static PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv = nullptr;
inline static PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline = nullptr;
inline static PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines = nullptr;
inline static PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines = nullptr;
inline static PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline = nullptr;
inline static PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv = nullptr;
inline static PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i = nullptr;
inline static PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv = nullptr;
inline static PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f = nullptr;
inline static PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv = nullptr;
inline static PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d = nullptr;
inline static PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv = nullptr;
inline static PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui = nullptr;
inline static PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv = nullptr;
inline static PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i = nullptr;
inline static PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv = nullptr;
inline static PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f = nullptr;
inline static PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv = nullptr;
inline static PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d = nullptr;
inline static PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv = nullptr;
inline static PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui = nullptr;
inline static PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv = nullptr;
inline static PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i = nullptr;
inline static PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv = nullptr;
inline static PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f = nullptr;
inline static PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv = nullptr;
inline static PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d = nullptr;
inline static PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv = nullptr;
inline static PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui = nullptr;
inline static PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv = nullptr;
inline static PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i = nullptr;
inline static PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv = nullptr;
inline static PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f = nullptr;
inline static PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv = nullptr;
inline static PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d = nullptr;
inline static PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv = nullptr;
inline static PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui = nullptr;
inline static PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv = nullptr;
inline static PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline = nullptr;
inline static PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog = nullptr;
inline static PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d = nullptr;
inline static PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d = nullptr;
inline static PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d = nullptr;
inline static PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d = nullptr;
inline static PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv = nullptr;
inline static PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv = nullptr;
inline static PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv = nullptr;
inline static PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv = nullptr;
inline static PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer = nullptr;
inline static PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv = nullptr;
inline static PFNGLVIEWPORTARRAYVPROC glViewportArrayv = nullptr;
inline static PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf = nullptr;
inline static PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv = nullptr;
inline static PFNGLSCISSORARRAYVPROC glScissorArrayv = nullptr;
inline static PFNGLSCISSORINDEXEDPROC glScissorIndexed = nullptr;
inline static PFNGLSCISSORINDEXEDVPROC glScissorIndexedv = nullptr;
inline static PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv = nullptr;
inline static PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed = nullptr;
inline static PFNGLGETFLOATI_VPROC glGetFloati_v = nullptr;
inline static PFNGLGETDOUBLEI_VPROC glGetDoublei_v = nullptr;
inline static PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance = nullptr;
inline static PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance = nullptr;
inline static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance = nullptr;
inline static PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ = nullptr;
inline static PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv = nullptr;
inline static PFNGLBINDIMAGETEXTUREPROC glBindImageTexture = nullptr;
inline static PFNGLMEMORYBARRIERPROC glMemoryBarrier = nullptr;
inline static PFNGLTEXSTORAGE1DPROC glTexStorage1D = nullptr;
inline static PFNGLTEXSTORAGE2DPROC glTexStorage2D = nullptr;
inline static PFNGLTEXSTORAGE3DPROC glTexStorage3D = nullptr;
inline static PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced = nullptr;
inline static PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced = nullptr;
inline static PFNGLCLEARBUFFERDATAPROC glClearBufferData = nullptr;
inline static PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData = nullptr;
inline static PFNGLDISPATCHCOMPUTEPROC glDispatchCompute = nullptr;
inline static PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect = nullptr;
inline static PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData = nullptr;
inline static PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri = nullptr;
inline static PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv = nullptr;
inline static PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v = nullptr;
inline static PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage = nullptr;
inline static PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage = nullptr;
inline static PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData = nullptr;
inline static PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData = nullptr;
inline static PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer = nullptr;
inline static PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer = nullptr;
inline static PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect = nullptr;
inline static PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect = nullptr;
inline static PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv = nullptr;
inline static PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex = nullptr;
inline static PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName = nullptr;
inline static PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv = nullptr;
inline static PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation = nullptr;
inline static PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glGetProgramResourceLocationIndex = nullptr;
inline static PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding = nullptr;
inline static PFNGLTEXBUFFERRANGEPROC glTexBufferRange = nullptr;
inline static PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample = nullptr;
inline static PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample = nullptr;
inline static PFNGLTEXTUREVIEWPROC glTextureView = nullptr;
inline static PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer = nullptr;
inline static PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat = nullptr;
inline static PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat = nullptr;
inline static PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat = nullptr;
inline static PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding = nullptr;
inline static PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor = nullptr;
inline static PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl = nullptr;
inline static PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert = nullptr;
inline static PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback = nullptr;
inline static PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog = nullptr;
inline static PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup = nullptr;
inline static PFNGLPOPDEBUGGROUPPROC glPopDebugGroup = nullptr;
inline static PFNGLOBJECTLABELPROC glObjectLabel = nullptr;
inline static PFNGLGETOBJECTLABELPROC glGetObjectLabel = nullptr;
inline static PFNGLOBJECTPTRLABELPROC glObjectPtrLabel = nullptr;
inline static PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel = nullptr;
inline static PFNGLBUFFERSTORAGEPROC glBufferStorage = nullptr;
inline static PFNGLCLEARTEXIMAGEPROC glClearTexImage = nullptr;
inline static PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage = nullptr;
inline static PFNGLBINDBUFFERSBASEPROC glBindBuffersBase = nullptr;
inline static PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange = nullptr;
inline static PFNGLBINDTEXTURESPROC glBindTextures = nullptr;
inline static PFNGLBINDSAMPLERSPROC glBindSamplers = nullptr;
inline static PFNGLBINDIMAGETEXTURESPROC glBindImageTextures = nullptr;
inline static PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers = nullptr;
inline static PFNGLCLIPCONTROLPROC glClipControl = nullptr;
inline static PFNGLCREATETRANSFORMFEEDBACKSPROC glCreateTransformFeedbacks = nullptr;
inline static PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glTransformFeedbackBufferBase = nullptr;
inline static PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glTransformFeedbackBufferRange = nullptr;
inline static PFNGLGETTRANSFORMFEEDBACKIVPROC glGetTransformFeedbackiv = nullptr;
inline static PFNGLGETTRANSFORMFEEDBACKI_VPROC glGetTransformFeedbacki_v = nullptr;
inline static PFNGLGETTRANSFORMFEEDBACKI64_VPROC glGetTransformFeedbacki64_v = nullptr;
inline static PFNGLCREATEBUFFERSPROC glCreateBuffers = nullptr;
inline static PFNGLNAMEDBUFFERSTORAGEPROC glNamedBufferStorage = nullptr;
inline static PFNGLNAMEDBUFFERDATAPROC glNamedBufferData = nullptr;
inline static PFNGLNAMEDBUFFERSUBDATAPROC glNamedBufferSubData = nullptr;
inline static PFNGLCOPYNAMEDBUFFERSUBDATAPROC glCopyNamedBufferSubData = nullptr;
inline static PFNGLCLEARNAMEDBUFFERDATAPROC glClearNamedBufferData = nullptr;
inline static PFNGLCLEARNAMEDBUFFERSUBDATAPROC glClearNamedBufferSubData = nullptr;
inline static PFNGLMAPNAMEDBUFFERPROC glMapNamedBuffer = nullptr;
inline static PFNGLMAPNAMEDBUFFERRANGEPROC glMapNamedBufferRange = nullptr;
inline static PFNGLUNMAPNAMEDBUFFERPROC glUnmapNamedBuffer = nullptr;
inline static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glFlushMappedNamedBufferRange = nullptr;
inline static PFNGLGETNAMEDBUFFERPARAMETERIVPROC glGetNamedBufferParameteriv = nullptr;
inline static PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glGetNamedBufferParameteri64v = nullptr;
inline static PFNGLGETNAMEDBUFFERPOINTERVPROC glGetNamedBufferPointerv = nullptr;
inline static PFNGLGETNAMEDBUFFERSUBDATAPROC glGetNamedBufferSubData = nullptr;
inline static PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glNamedFramebufferRenderbuffer = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glNamedFramebufferParameteri = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glNamedFramebufferTexture = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glNamedFramebufferTextureLayer = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glNamedFramebufferDrawBuffer = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glNamedFramebufferDrawBuffers = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glNamedFramebufferReadBuffer = nullptr;
inline static PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glInvalidateNamedFramebufferData = nullptr;
inline static PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glInvalidateNamedFramebufferSubData = nullptr;
inline static PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glClearNamedFramebufferiv = nullptr;
inline static PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glClearNamedFramebufferuiv = nullptr;
inline static PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glClearNamedFramebufferfv = nullptr;
inline static PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glClearNamedFramebufferfi = nullptr;
inline static PFNGLBLITNAMEDFRAMEBUFFERPROC glBlitNamedFramebuffer = nullptr;
inline static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glCheckNamedFramebufferStatus = nullptr;
inline static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glGetNamedFramebufferParameteriv = nullptr;
inline static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetNamedFramebufferAttachmentParameteriv = nullptr;
inline static PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers = nullptr;
inline static PFNGLNAMEDRENDERBUFFERSTORAGEPROC glNamedRenderbufferStorage = nullptr;
inline static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glNamedRenderbufferStorageMultisample = nullptr;
inline static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glGetNamedRenderbufferParameteriv = nullptr;
inline static PFNGLCREATETEXTURESPROC glCreateTextures = nullptr;
inline static PFNGLTEXTUREBUFFERPROC glTextureBuffer = nullptr;
inline static PFNGLTEXTUREBUFFERRANGEPROC glTextureBufferRange = nullptr;
inline static PFNGLTEXTURESTORAGE1DPROC glTextureStorage1D = nullptr;
inline static PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D = nullptr;
inline static PFNGLTEXTURESTORAGE3DPROC glTextureStorage3D = nullptr;
inline static PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glTextureStorage2DMultisample = nullptr;
inline static PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glTextureStorage3DMultisample = nullptr;
inline static PFNGLTEXTURESUBIMAGE1DPROC glTextureSubImage1D = nullptr;
inline static PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D = nullptr;
inline static PFNGLTEXTURESUBIMAGE3DPROC glTextureSubImage3D = nullptr;
inline static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glCompressedTextureSubImage1D = nullptr;
inline static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glCompressedTextureSubImage2D = nullptr;
inline static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glCompressedTextureSubImage3D = nullptr;
inline static PFNGLCOPYTEXTURESUBIMAGE1DPROC glCopyTextureSubImage1D = nullptr;
inline static PFNGLCOPYTEXTURESUBIMAGE2DPROC glCopyTextureSubImage2D = nullptr;
inline static PFNGLCOPYTEXTURESUBIMAGE3DPROC glCopyTextureSubImage3D = nullptr;
inline static PFNGLTEXTUREPARAMETERFPROC glTextureParameterf = nullptr;
inline static PFNGLTEXTUREPARAMETERFVPROC glTextureParameterfv = nullptr;
inline static PFNGLTEXTUREPARAMETERIPROC glTextureParameteri = nullptr;
inline static PFNGLTEXTUREPARAMETERIIVPROC glTextureParameterIiv = nullptr;
inline static PFNGLTEXTUREPARAMETERIUIVPROC glTextureParameterIuiv = nullptr;
inline static PFNGLTEXTUREPARAMETERIVPROC glTextureParameteriv = nullptr;
inline static PFNGLGENERATETEXTUREMIPMAPPROC glGenerateTextureMipmap = nullptr;
inline static PFNGLBINDTEXTUREUNITPROC glBindTextureUnit = nullptr;
inline static PFNGLGETTEXTUREIMAGEPROC glGetTextureImage = nullptr;
inline static PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glGetCompressedTextureImage = nullptr;
inline static PFNGLGETTEXTURELEVELPARAMETERFVPROC glGetTextureLevelParameterfv = nullptr;
inline static PFNGLGETTEXTURELEVELPARAMETERIVPROC glGetTextureLevelParameteriv = nullptr;
inline static PFNGLGETTEXTUREPARAMETERFVPROC glGetTextureParameterfv = nullptr;
inline static PFNGLGETTEXTUREPARAMETERIIVPROC glGetTextureParameterIiv = nullptr;
inline static PFNGLGETTEXTUREPARAMETERIUIVPROC glGetTextureParameterIuiv = nullptr;
inline static PFNGLGETTEXTUREPARAMETERIVPROC glGetTextureParameteriv = nullptr;
inline static PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays = nullptr;
inline static PFNGLDISABLEVERTEXARRAYATTRIBPROC glDisableVertexArrayAttrib = nullptr;
inline static PFNGLENABLEVERTEXARRAYATTRIBPROC glEnableVertexArrayAttrib = nullptr;
inline static PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer = nullptr;
inline static PFNGLVERTEXARRAYVERTEXBUFFERPROC glVertexArrayVertexBuffer = nullptr;
inline static PFNGLVERTEXARRAYVERTEXBUFFERSPROC glVertexArrayVertexBuffers = nullptr;
inline static PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding = nullptr;
inline static PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat = nullptr;
inline static PFNGLVERTEXARRAYATTRIBIFORMATPROC glVertexArrayAttribIFormat = nullptr;
inline static PFNGLVERTEXARRAYATTRIBLFORMATPROC glVertexArrayAttribLFormat = nullptr;
inline static PFNGLVERTEXARRAYBINDINGDIVISORPROC glVertexArrayBindingDivisor = nullptr;
inline static PFNGLGETVERTEXARRAYIVPROC glGetVertexArrayiv = nullptr;
inline static PFNGLGETVERTEXARRAYINDEXEDIVPROC glGetVertexArrayIndexediv = nullptr;
inline static PFNGLGETVERTEXARRAYINDEXED64IVPROC glGetVertexArrayIndexed64iv = nullptr;
inline static PFNGLCREATESAMPLERSPROC glCreateSamplers = nullptr;
inline static PFNGLCREATEPROGRAMPIPELINESPROC glCreateProgramPipelines = nullptr;
inline static PFNGLCREATEQUERIESPROC glCreateQueries = nullptr;
inline static PFNGLGETQUERYBUFFEROBJECTI64VPROC glGetQueryBufferObjecti64v = nullptr;
inline static PFNGLGETQUERYBUFFEROBJECTIVPROC glGetQueryBufferObjectiv = nullptr;
inline static PFNGLGETQUERYBUFFEROBJECTUI64VPROC glGetQueryBufferObjectui64v = nullptr;
inline static PFNGLGETQUERYBUFFEROBJECTUIVPROC glGetQueryBufferObjectuiv = nullptr;
inline static PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion = nullptr;
inline static PFNGLGETTEXTURESUBIMAGEPROC glGetTextureSubImage = nullptr;
inline static PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glGetCompressedTextureSubImage = nullptr;
inline static PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus = nullptr;
inline static PFNGLGETNCOMPRESSEDTEXIMAGEPROC glGetnCompressedTexImage = nullptr;
inline static PFNGLGETNTEXIMAGEPROC glGetnTexImage = nullptr;
inline static PFNGLGETNUNIFORMDVPROC glGetnUniformdv = nullptr;
inline static PFNGLGETNUNIFORMFVPROC glGetnUniformfv = nullptr;
inline static PFNGLGETNUNIFORMIVPROC glGetnUniformiv = nullptr;
inline static PFNGLGETNUNIFORMUIVPROC glGetnUniformuiv = nullptr;
inline static PFNGLREADNPIXELSPROC glReadnPixels = nullptr;
inline static PFNGLTEXTUREBARRIERPROC glTextureBarrier = nullptr;
inline static PFNGLSPECIALIZESHADERPROC glSpecializeShader = nullptr;
inline static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glMultiDrawArraysIndirectCount = nullptr;
inline static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glMultiDrawElementsIndirectCount = nullptr;
inline static PFNGLPOLYGONOFFSETCLAMPPROC glPolygonOffsetClamp = nullptr;
inline static PFNGLPRIMITIVEBOUNDINGBOXARBPROC glPrimitiveBoundingBoxARB = nullptr;
inline static PFNGLGETTEXTUREHANDLEARBPROC glGetTextureHandleARB = nullptr;
inline static PFNGLGETTEXTURESAMPLERHANDLEARBPROC glGetTextureSamplerHandleARB = nullptr;
inline static PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glMakeTextureHandleResidentARB = nullptr;
inline static PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC glMakeTextureHandleNonResidentARB = nullptr;
inline static PFNGLGETIMAGEHANDLEARBPROC glGetImageHandleARB = nullptr;
inline static PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glMakeImageHandleResidentARB = nullptr;
inline static PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glMakeImageHandleNonResidentARB = nullptr;
inline static PFNGLUNIFORMHANDLEUI64ARBPROC glUniformHandleui64ARB = nullptr;
inline static PFNGLUNIFORMHANDLEUI64VARBPROC glUniformHandleui64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC glProgramUniformHandleui64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC glProgramUniformHandleui64vARB = nullptr;
inline static PFNGLISTEXTUREHANDLERESIDENTARBPROC glIsTextureHandleResidentARB = nullptr;
inline static PFNGLISIMAGEHANDLERESIDENTARBPROC glIsImageHandleResidentARB = nullptr;
inline static PFNGLVERTEXATTRIBL1UI64ARBPROC glVertexAttribL1ui64ARB = nullptr;
inline static PFNGLVERTEXATTRIBL1UI64VARBPROC glVertexAttribL1ui64vARB = nullptr;
inline static PFNGLGETVERTEXATTRIBLUI64VARBPROC glGetVertexAttribLui64vARB = nullptr;
inline static PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB = nullptr;
inline static PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glDispatchComputeGroupSizeARB = nullptr;
inline static PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB = nullptr;
inline static PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB = nullptr;
inline static PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB = nullptr;
inline static PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB = nullptr;
inline static PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB = nullptr;
inline static PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB = nullptr;
inline static PFNGLBLENDFUNCIARBPROC glBlendFunciARB = nullptr;
inline static PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB = nullptr;
inline static PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB = nullptr;
inline static PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB = nullptr;
inline static PFNGLPROGRAMPARAMETERIARBPROC glProgramParameteriARB = nullptr;
inline static PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB = nullptr;
inline static PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB = nullptr;
inline static PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB = nullptr;
inline static PFNGLSPECIALIZESHADERARBPROC glSpecializeShaderARB = nullptr;
inline static PFNGLUNIFORM1I64ARBPROC glUniform1i64ARB = nullptr;
inline static PFNGLUNIFORM2I64ARBPROC glUniform2i64ARB = nullptr;
inline static PFNGLUNIFORM3I64ARBPROC glUniform3i64ARB = nullptr;
inline static PFNGLUNIFORM4I64ARBPROC glUniform4i64ARB = nullptr;
inline static PFNGLUNIFORM1I64VARBPROC glUniform1i64vARB = nullptr;
inline static PFNGLUNIFORM2I64VARBPROC glUniform2i64vARB = nullptr;
inline static PFNGLUNIFORM3I64VARBPROC glUniform3i64vARB = nullptr;
inline static PFNGLUNIFORM4I64VARBPROC glUniform4i64vARB = nullptr;
inline static PFNGLUNIFORM1UI64ARBPROC glUniform1ui64ARB = nullptr;
inline static PFNGLUNIFORM2UI64ARBPROC glUniform2ui64ARB = nullptr;
inline static PFNGLUNIFORM3UI64ARBPROC glUniform3ui64ARB = nullptr;
inline static PFNGLUNIFORM4UI64ARBPROC glUniform4ui64ARB = nullptr;
inline static PFNGLUNIFORM1UI64VARBPROC glUniform1ui64vARB = nullptr;
inline static PFNGLUNIFORM2UI64VARBPROC glUniform2ui64vARB = nullptr;
inline static PFNGLUNIFORM3UI64VARBPROC glUniform3ui64vARB = nullptr;
inline static PFNGLUNIFORM4UI64VARBPROC glUniform4ui64vARB = nullptr;
inline static PFNGLGETUNIFORMI64VARBPROC glGetUniformi64vARB = nullptr;
inline static PFNGLGETUNIFORMUI64VARBPROC glGetUniformui64vARB = nullptr;
inline static PFNGLGETNUNIFORMI64VARBPROC glGetnUniformi64vARB = nullptr;
inline static PFNGLGETNUNIFORMUI64VARBPROC glGetnUniformui64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM1I64ARBPROC glProgramUniform1i64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM2I64ARBPROC glProgramUniform2i64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM3I64ARBPROC glProgramUniform3i64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM4I64ARBPROC glProgramUniform4i64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM1I64VARBPROC glProgramUniform1i64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM2I64VARBPROC glProgramUniform2i64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM3I64VARBPROC glProgramUniform3i64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM4I64VARBPROC glProgramUniform4i64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM1UI64ARBPROC glProgramUniform1ui64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM2UI64ARBPROC glProgramUniform2ui64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM3UI64ARBPROC glProgramUniform3ui64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM4UI64ARBPROC glProgramUniform4ui64ARB = nullptr;
inline static PFNGLPROGRAMUNIFORM1UI64VARBPROC glProgramUniform1ui64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM2UI64VARBPROC glProgramUniform2ui64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM3UI64VARBPROC glProgramUniform3ui64vARB = nullptr;
inline static PFNGLPROGRAMUNIFORM4UI64VARBPROC glProgramUniform4ui64vARB = nullptr;
inline static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC glMultiDrawArraysIndirectCountARB = nullptr;
inline static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC glMultiDrawElementsIndirectCountARB = nullptr;
inline static PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB = nullptr;
inline static PFNGLMAXSHADERCOMPILERTHREADSARBPROC glMaxShaderCompilerThreadsARB = nullptr;
inline static PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB = nullptr;
inline static PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB = nullptr;
inline static PFNGLREADNPIXELSARBPROC glReadnPixelsARB = nullptr;
inline static PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB = nullptr;
inline static PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB = nullptr;
inline static PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB = nullptr;
inline static PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB = nullptr;
inline static PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB = nullptr;
inline static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glFramebufferSampleLocationsfvARB = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glNamedFramebufferSampleLocationsfvARB = nullptr;
inline static PFNGLEVALUATEDEPTHVALUESARBPROC glEvaluateDepthValuesARB = nullptr;
inline static PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB = nullptr;
inline static PFNGLNAMEDSTRINGARBPROC glNamedStringARB = nullptr;
inline static PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB = nullptr;
inline static PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB = nullptr;
inline static PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB = nullptr;
inline static PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB = nullptr;
inline static PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB = nullptr;
inline static PFNGLBUFFERPAGECOMMITMENTARBPROC glBufferPageCommitmentARB = nullptr;
inline static PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC glNamedBufferPageCommitmentEXT = nullptr;
inline static PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC glNamedBufferPageCommitmentARB = nullptr;
inline static PFNGLTEXPAGECOMMITMENTARBPROC glTexPageCommitmentARB = nullptr;
inline static PFNGLTEXBUFFERARBPROC glTexBufferARB = nullptr;
inline static PFNGLDEPTHRANGEARRAYDVNVPROC glDepthRangeArraydvNV = nullptr;
inline static PFNGLDEPTHRANGEINDEXEDDNVPROC glDepthRangeIndexeddNV = nullptr;
inline static PFNGLBLENDBARRIERKHRPROC glBlendBarrierKHR = nullptr;
inline static PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glMaxShaderCompilerThreadsKHR = nullptr;
inline static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glRenderbufferStorageMultisampleAdvancedAMD = nullptr;
inline static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glNamedRenderbufferStorageMultisampleAdvancedAMD = nullptr;
inline static PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD = nullptr;
inline static PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD = nullptr;
inline static PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD = nullptr;
inline static PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD = nullptr;
inline static PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD = nullptr;
inline static PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD = nullptr;
inline static PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD = nullptr;
inline static PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD = nullptr;
inline static PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD = nullptr;
inline static PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD = nullptr;
inline static PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD = nullptr;
inline static PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glEGLImageTargetTexStorageEXT = nullptr;
inline static PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glEGLImageTargetTextureStorageEXT = nullptr;
inline static PFNGLLABELOBJECTEXTPROC glLabelObjectEXT = nullptr;
inline static PFNGLGETOBJECTLABELEXTPROC glGetObjectLabelEXT = nullptr;
inline static PFNGLINSERTEVENTMARKEREXTPROC glInsertEventMarkerEXT = nullptr;
inline static PFNGLPUSHGROUPMARKEREXTPROC glPushGroupMarkerEXT = nullptr;
inline static PFNGLPOPGROUPMARKEREXTPROC glPopGroupMarkerEXT = nullptr;
inline static PFNGLMATRIXLOADFEXTPROC glMatrixLoadfEXT = nullptr;
inline static PFNGLMATRIXLOADDEXTPROC glMatrixLoaddEXT = nullptr;
inline static PFNGLMATRIXMULTFEXTPROC glMatrixMultfEXT = nullptr;
inline static PFNGLMATRIXMULTDEXTPROC glMatrixMultdEXT = nullptr;
inline static PFNGLMATRIXLOADIDENTITYEXTPROC glMatrixLoadIdentityEXT = nullptr;
inline static PFNGLMATRIXROTATEFEXTPROC glMatrixRotatefEXT = nullptr;
inline static PFNGLMATRIXROTATEDEXTPROC glMatrixRotatedEXT = nullptr;
inline static PFNGLMATRIXSCALEFEXTPROC glMatrixScalefEXT = nullptr;
inline static PFNGLMATRIXSCALEDEXTPROC glMatrixScaledEXT = nullptr;
inline static PFNGLMATRIXTRANSLATEFEXTPROC glMatrixTranslatefEXT = nullptr;
inline static PFNGLMATRIXTRANSLATEDEXTPROC glMatrixTranslatedEXT = nullptr;
inline static PFNGLMATRIXFRUSTUMEXTPROC glMatrixFrustumEXT = nullptr;
inline static PFNGLMATRIXORTHOEXTPROC glMatrixOrthoEXT = nullptr;
inline static PFNGLMATRIXPOPEXTPROC glMatrixPopEXT = nullptr;
inline static PFNGLMATRIXPUSHEXTPROC glMatrixPushEXT = nullptr;
inline static PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT = nullptr;
inline static PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT = nullptr;
inline static PFNGLTEXTUREPARAMETERFEXTPROC glTextureParameterfEXT = nullptr;
inline static PFNGLTEXTUREPARAMETERFVEXTPROC glTextureParameterfvEXT = nullptr;
inline static PFNGLTEXTUREPARAMETERIEXTPROC glTextureParameteriEXT = nullptr;
inline static PFNGLTEXTUREPARAMETERIVEXTPROC glTextureParameterivEXT = nullptr;
inline static PFNGLTEXTUREIMAGE1DEXTPROC glTextureImage1DEXT = nullptr;
inline static PFNGLTEXTUREIMAGE2DEXTPROC glTextureImage2DEXT = nullptr;
inline static PFNGLTEXTURESUBIMAGE1DEXTPROC glTextureSubImage1DEXT = nullptr;
inline static PFNGLTEXTURESUBIMAGE2DEXTPROC glTextureSubImage2DEXT = nullptr;
inline static PFNGLCOPYTEXTUREIMAGE1DEXTPROC glCopyTextureImage1DEXT = nullptr;
inline static PFNGLCOPYTEXTUREIMAGE2DEXTPROC glCopyTextureImage2DEXT = nullptr;
inline static PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glCopyTextureSubImage1DEXT = nullptr;
inline static PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glCopyTextureSubImage2DEXT = nullptr;
inline static PFNGLGETTEXTUREIMAGEEXTPROC glGetTextureImageEXT = nullptr;
inline static PFNGLGETTEXTUREPARAMETERFVEXTPROC glGetTextureParameterfvEXT = nullptr;
inline static PFNGLGETTEXTUREPARAMETERIVEXTPROC glGetTextureParameterivEXT = nullptr;
inline static PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glGetTextureLevelParameterfvEXT = nullptr;
inline static PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glGetTextureLevelParameterivEXT = nullptr;
inline static PFNGLTEXTUREIMAGE3DEXTPROC glTextureImage3DEXT = nullptr;
inline static PFNGLTEXTURESUBIMAGE3DEXTPROC glTextureSubImage3DEXT = nullptr;
inline static PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glCopyTextureSubImage3DEXT = nullptr;
inline static PFNGLBINDMULTITEXTUREEXTPROC glBindMultiTextureEXT = nullptr;
inline static PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT = nullptr;
inline static PFNGLMULTITEXENVFEXTPROC glMultiTexEnvfEXT = nullptr;
inline static PFNGLMULTITEXENVFVEXTPROC glMultiTexEnvfvEXT = nullptr;
inline static PFNGLMULTITEXENVIEXTPROC glMultiTexEnviEXT = nullptr;
inline static PFNGLMULTITEXENVIVEXTPROC glMultiTexEnvivEXT = nullptr;
inline static PFNGLMULTITEXGENDEXTPROC glMultiTexGendEXT = nullptr;
inline static PFNGLMULTITEXGENDVEXTPROC glMultiTexGendvEXT = nullptr;
inline static PFNGLMULTITEXGENFEXTPROC glMultiTexGenfEXT = nullptr;
inline static PFNGLMULTITEXGENFVEXTPROC glMultiTexGenfvEXT = nullptr;
inline static PFNGLMULTITEXGENIEXTPROC glMultiTexGeniEXT = nullptr;
inline static PFNGLMULTITEXGENIVEXTPROC glMultiTexGenivEXT = nullptr;
inline static PFNGLGETMULTITEXENVFVEXTPROC glGetMultiTexEnvfvEXT = nullptr;
inline static PFNGLGETMULTITEXENVIVEXTPROC glGetMultiTexEnvivEXT = nullptr;
inline static PFNGLGETMULTITEXGENDVEXTPROC glGetMultiTexGendvEXT = nullptr;
inline static PFNGLGETMULTITEXGENFVEXTPROC glGetMultiTexGenfvEXT = nullptr;
inline static PFNGLGETMULTITEXGENIVEXTPROC glGetMultiTexGenivEXT = nullptr;
inline static PFNGLMULTITEXPARAMETERIEXTPROC glMultiTexParameteriEXT = nullptr;
inline static PFNGLMULTITEXPARAMETERIVEXTPROC glMultiTexParameterivEXT = nullptr;
inline static PFNGLMULTITEXPARAMETERFEXTPROC glMultiTexParameterfEXT = nullptr;
inline static PFNGLMULTITEXPARAMETERFVEXTPROC glMultiTexParameterfvEXT = nullptr;
inline static PFNGLMULTITEXIMAGE1DEXTPROC glMultiTexImage1DEXT = nullptr;
inline static PFNGLMULTITEXIMAGE2DEXTPROC glMultiTexImage2DEXT = nullptr;
inline static PFNGLMULTITEXSUBIMAGE1DEXTPROC glMultiTexSubImage1DEXT = nullptr;
inline static PFNGLMULTITEXSUBIMAGE2DEXTPROC glMultiTexSubImage2DEXT = nullptr;
inline static PFNGLCOPYMULTITEXIMAGE1DEXTPROC glCopyMultiTexImage1DEXT = nullptr;
inline static PFNGLCOPYMULTITEXIMAGE2DEXTPROC glCopyMultiTexImage2DEXT = nullptr;
inline static PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glCopyMultiTexSubImage1DEXT = nullptr;
inline static PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glCopyMultiTexSubImage2DEXT = nullptr;
inline static PFNGLGETMULTITEXIMAGEEXTPROC glGetMultiTexImageEXT = nullptr;
inline static PFNGLGETMULTITEXPARAMETERFVEXTPROC glGetMultiTexParameterfvEXT = nullptr;
inline static PFNGLGETMULTITEXPARAMETERIVEXTPROC glGetMultiTexParameterivEXT = nullptr;
inline static PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glGetMultiTexLevelParameterfvEXT = nullptr;
inline static PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glGetMultiTexLevelParameterivEXT = nullptr;
inline static PFNGLMULTITEXIMAGE3DEXTPROC glMultiTexImage3DEXT = nullptr;
inline static PFNGLMULTITEXSUBIMAGE3DEXTPROC glMultiTexSubImage3DEXT = nullptr;
inline static PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glCopyMultiTexSubImage3DEXT = nullptr;
inline static PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT = nullptr;
inline static PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT = nullptr;
inline static PFNGLGETFLOATINDEXEDVEXTPROC glGetFloatIndexedvEXT = nullptr;
inline static PFNGLGETDOUBLEINDEXEDVEXTPROC glGetDoubleIndexedvEXT = nullptr;
inline static PFNGLGETPOINTERINDEXEDVEXTPROC glGetPointerIndexedvEXT = nullptr;
inline static PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT = nullptr;
inline static PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT = nullptr;
inline static PFNGLISENABLEDINDEXEDEXTPROC glIsEnabledIndexedEXT = nullptr;
inline static PFNGLGETINTEGERINDEXEDVEXTPROC glGetIntegerIndexedvEXT = nullptr;
inline static PFNGLGETBOOLEANINDEXEDVEXTPROC glGetBooleanIndexedvEXT = nullptr;
inline static PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glCompressedTextureImage3DEXT = nullptr;
inline static PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glCompressedTextureImage2DEXT = nullptr;
inline static PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glCompressedTextureImage1DEXT = nullptr;
inline static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glCompressedTextureSubImage3DEXT = nullptr;
inline static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glCompressedTextureSubImage2DEXT = nullptr;
inline static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glCompressedTextureSubImage1DEXT = nullptr;
inline static PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glGetCompressedTextureImageEXT = nullptr;
inline static PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glCompressedMultiTexImage3DEXT = nullptr;
inline static PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glCompressedMultiTexImage2DEXT = nullptr;
inline static PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glCompressedMultiTexImage1DEXT = nullptr;
inline static PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glCompressedMultiTexSubImage3DEXT = nullptr;
inline static PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glCompressedMultiTexSubImage2DEXT = nullptr;
inline static PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glCompressedMultiTexSubImage1DEXT = nullptr;
inline static PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glGetCompressedMultiTexImageEXT = nullptr;
inline static PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT = nullptr;
inline static PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT = nullptr;
inline static PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT = nullptr;
inline static PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT = nullptr;
inline static PFNGLNAMEDBUFFERDATAEXTPROC glNamedBufferDataEXT = nullptr;
inline static PFNGLNAMEDBUFFERSUBDATAEXTPROC glNamedBufferSubDataEXT = nullptr;
inline static PFNGLMAPNAMEDBUFFEREXTPROC glMapNamedBufferEXT = nullptr;
inline static PFNGLUNMAPNAMEDBUFFEREXTPROC glUnmapNamedBufferEXT = nullptr;
inline static PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glGetNamedBufferParameterivEXT = nullptr;
inline static PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glGetNamedBufferPointervEXT = nullptr;
inline static PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glGetNamedBufferSubDataEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT = nullptr;
inline static PFNGLTEXTUREBUFFEREXTPROC glTextureBufferEXT = nullptr;
inline static PFNGLMULTITEXBUFFEREXTPROC glMultiTexBufferEXT = nullptr;
inline static PFNGLTEXTUREPARAMETERIIVEXTPROC glTextureParameterIivEXT = nullptr;
inline static PFNGLTEXTUREPARAMETERIUIVEXTPROC glTextureParameterIuivEXT = nullptr;
inline static PFNGLGETTEXTUREPARAMETERIIVEXTPROC glGetTextureParameterIivEXT = nullptr;
inline static PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glGetTextureParameterIuivEXT = nullptr;
inline static PFNGLMULTITEXPARAMETERIIVEXTPROC glMultiTexParameterIivEXT = nullptr;
inline static PFNGLMULTITEXPARAMETERIUIVEXTPROC glMultiTexParameterIuivEXT = nullptr;
inline static PFNGLGETMULTITEXPARAMETERIIVEXTPROC glGetMultiTexParameterIivEXT = nullptr;
inline static PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glGetMultiTexParameterIuivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glNamedProgramLocalParameters4fvEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glNamedProgramLocalParameterI4iEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glNamedProgramLocalParameterI4ivEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glNamedProgramLocalParametersI4ivEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glNamedProgramLocalParameterI4uiEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glNamedProgramLocalParameterI4uivEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glNamedProgramLocalParametersI4uivEXT = nullptr;
inline static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glGetNamedProgramLocalParameterIivEXT = nullptr;
inline static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glGetNamedProgramLocalParameterIuivEXT = nullptr;
inline static PFNGLENABLECLIENTSTATEIEXTPROC glEnableClientStateiEXT = nullptr;
inline static PFNGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT = nullptr;
inline static PFNGLGETFLOATI_VEXTPROC glGetFloati_vEXT = nullptr;
inline static PFNGLGETDOUBLEI_VEXTPROC glGetDoublei_vEXT = nullptr;
inline static PFNGLGETPOINTERI_VEXTPROC glGetPointeri_vEXT = nullptr;
inline static PFNGLNAMEDPROGRAMSTRINGEXTPROC glNamedProgramStringEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glNamedProgramLocalParameter4dEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glNamedProgramLocalParameter4dvEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glNamedProgramLocalParameter4fEXT = nullptr;
inline static PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glNamedProgramLocalParameter4fvEXT = nullptr;
inline static PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glGetNamedProgramLocalParameterdvEXT = nullptr;
inline static PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glGetNamedProgramLocalParameterfvEXT = nullptr;
inline static PFNGLGETNAMEDPROGRAMIVEXTPROC glGetNamedProgramivEXT = nullptr;
inline static PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glGetNamedProgramStringEXT = nullptr;
inline static PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glNamedRenderbufferStorageEXT = nullptr;
inline static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glGetNamedRenderbufferParameterivEXT = nullptr;
inline static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glNamedRenderbufferStorageMultisampleEXT = nullptr;
inline static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glNamedRenderbufferStorageMultisampleCoverageEXT = nullptr;
inline static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glCheckNamedFramebufferStatusEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glNamedFramebufferTexture1DEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glNamedFramebufferTexture2DEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glNamedFramebufferTexture3DEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glNamedFramebufferRenderbufferEXT = nullptr;
inline static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetNamedFramebufferAttachmentParameterivEXT = nullptr;
inline static PFNGLGENERATETEXTUREMIPMAPEXTPROC glGenerateTextureMipmapEXT = nullptr;
inline static PFNGLGENERATEMULTITEXMIPMAPEXTPROC glGenerateMultiTexMipmapEXT = nullptr;
inline static PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glFramebufferDrawBufferEXT = nullptr;
inline static PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glFramebufferDrawBuffersEXT = nullptr;
inline static PFNGLFRAMEBUFFERREADBUFFEREXTPROC glFramebufferReadBufferEXT = nullptr;
inline static PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glGetFramebufferParameterivEXT = nullptr;
inline static PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glNamedCopyBufferSubDataEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glNamedFramebufferTextureEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glNamedFramebufferTextureLayerEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glNamedFramebufferTextureFaceEXT = nullptr;
inline static PFNGLTEXTURERENDERBUFFEREXTPROC glTextureRenderbufferEXT = nullptr;
inline static PFNGLMULTITEXRENDERBUFFEREXTPROC glMultiTexRenderbufferEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glVertexArrayVertexOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glVertexArrayColorOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glVertexArrayEdgeFlagOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glVertexArrayIndexOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glVertexArrayNormalOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glVertexArrayTexCoordOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glVertexArrayMultiTexCoordOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glVertexArrayFogCoordOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glVertexArraySecondaryColorOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glVertexArrayVertexAttribOffsetEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glVertexArrayVertexAttribIOffsetEXT = nullptr;
inline static PFNGLENABLEVERTEXARRAYEXTPROC glEnableVertexArrayEXT = nullptr;
inline static PFNGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT = nullptr;
inline static PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glEnableVertexArrayAttribEXT = nullptr;
inline static PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT = nullptr;
inline static PFNGLGETVERTEXARRAYINTEGERVEXTPROC glGetVertexArrayIntegervEXT = nullptr;
inline static PFNGLGETVERTEXARRAYPOINTERVEXTPROC glGetVertexArrayPointervEXT = nullptr;
inline static PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC glGetVertexArrayIntegeri_vEXT = nullptr;
inline static PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC glGetVertexArrayPointeri_vEXT = nullptr;
inline static PFNGLMAPNAMEDBUFFERRANGEEXTPROC glMapNamedBufferRangeEXT = nullptr;
inline static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glFlushMappedNamedBufferRangeEXT = nullptr;
inline static PFNGLNAMEDBUFFERSTORAGEEXTPROC glNamedBufferStorageEXT = nullptr;
inline static PFNGLCLEARNAMEDBUFFERDATAEXTPROC glClearNamedBufferDataEXT = nullptr;
inline static PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC glClearNamedBufferSubDataEXT = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC glNamedFramebufferParameteriEXT = nullptr;
inline static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC glGetNamedFramebufferParameterivEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1DEXTPROC glProgramUniform1dEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2DEXTPROC glProgramUniform2dEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3DEXTPROC glProgramUniform3dEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4DEXTPROC glProgramUniform4dEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM1DVEXTPROC glProgramUniform1dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM2DVEXTPROC glProgramUniform2dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM3DVEXTPROC glProgramUniform3dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORM4DVEXTPROC glProgramUniform4dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glProgramUniformMatrix2dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glProgramUniformMatrix3dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glProgramUniformMatrix4dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glProgramUniformMatrix2x3dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glProgramUniformMatrix2x4dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glProgramUniformMatrix3x2dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glProgramUniformMatrix3x4dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glProgramUniformMatrix4x2dvEXT = nullptr;
inline static PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glProgramUniformMatrix4x3dvEXT = nullptr;
inline static PFNGLTEXTUREBUFFERRANGEEXTPROC glTextureBufferRangeEXT = nullptr;
inline static PFNGLTEXTURESTORAGE1DEXTPROC glTextureStorage1DEXT = nullptr;
inline static PFNGLTEXTURESTORAGE2DEXTPROC glTextureStorage2DEXT = nullptr;
inline static PFNGLTEXTURESTORAGE3DEXTPROC glTextureStorage3DEXT = nullptr;
inline static PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC glTextureStorage2DMultisampleEXT = nullptr;
inline static PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC glTextureStorage3DMultisampleEXT = nullptr;
inline static PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC glVertexArrayBindVertexBufferEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC glVertexArrayVertexAttribFormatEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC glVertexArrayVertexAttribIFormatEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC glVertexArrayVertexAttribLFormatEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC glVertexArrayVertexAttribBindingEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC glVertexArrayVertexBindingDivisorEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glVertexArrayVertexAttribLOffsetEXT = nullptr;
inline static PFNGLTEXTUREPAGECOMMITMENTEXTPROC glTexturePageCommitmentEXT = nullptr;
inline static PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC glVertexArrayVertexAttribDivisorEXT = nullptr;
inline static PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT = nullptr;
inline static PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT = nullptr;
inline static PFNGLPOLYGONOFFSETCLAMPEXTPROC glPolygonOffsetClampEXT = nullptr;
inline static PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT = nullptr;
inline static PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT = nullptr;
inline static PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT = nullptr;
inline static PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT = nullptr;
inline static PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glFramebufferFetchBarrierEXT = nullptr;
inline static PFNGLTEXSTORAGE1DEXTPROC glTexStorage1DEXT = nullptr;
inline static PFNGLTEXSTORAGE2DEXTPROC glTexStorage2DEXT = nullptr;
inline static PFNGLTEXSTORAGE3DEXTPROC glTexStorage3DEXT = nullptr;
inline static PFNGLWINDOWRECTANGLESEXTPROC glWindowRectanglesEXT = nullptr;
inline static PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC glApplyFramebufferAttachmentCMAAINTEL = nullptr;
inline static PFNGLBEGINPERFQUERYINTELPROC glBeginPerfQueryINTEL = nullptr;
inline static PFNGLCREATEPERFQUERYINTELPROC glCreatePerfQueryINTEL = nullptr;
inline static PFNGLDELETEPERFQUERYINTELPROC glDeletePerfQueryINTEL = nullptr;
inline static PFNGLENDPERFQUERYINTELPROC glEndPerfQueryINTEL = nullptr;
inline static PFNGLGETFIRSTPERFQUERYIDINTELPROC glGetFirstPerfQueryIdINTEL = nullptr;
inline static PFNGLGETNEXTPERFQUERYIDINTELPROC glGetNextPerfQueryIdINTEL = nullptr;
inline static PFNGLGETPERFCOUNTERINFOINTELPROC glGetPerfCounterInfoINTEL = nullptr;
inline static PFNGLGETPERFQUERYDATAINTELPROC glGetPerfQueryDataINTEL = nullptr;
inline static PFNGLGETPERFQUERYIDBYNAMEINTELPROC glGetPerfQueryIdByNameINTEL = nullptr;
inline static PFNGLGETPERFQUERYINFOINTELPROC glGetPerfQueryInfoINTEL = nullptr;
inline static PFNGLFRAMEBUFFERPARAMETERIMESAPROC glFramebufferParameteriMESA = nullptr;
inline static PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glGetFramebufferParameterivMESA = nullptr;
inline static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC glMultiDrawArraysIndirectBindlessNV = nullptr;
inline static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC glMultiDrawElementsIndirectBindlessNV = nullptr;
inline static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC glMultiDrawArraysIndirectBindlessCountNV = nullptr;
inline static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC glMultiDrawElementsIndirectBindlessCountNV = nullptr;
inline static PFNGLGETTEXTUREHANDLENVPROC glGetTextureHandleNV = nullptr;
inline static PFNGLGETTEXTURESAMPLERHANDLENVPROC glGetTextureSamplerHandleNV = nullptr;
inline static PFNGLMAKETEXTUREHANDLERESIDENTNVPROC glMakeTextureHandleResidentNV = nullptr;
inline static PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glMakeTextureHandleNonResidentNV = nullptr;
inline static PFNGLGETIMAGEHANDLENVPROC glGetImageHandleNV = nullptr;
inline static PFNGLMAKEIMAGEHANDLERESIDENTNVPROC glMakeImageHandleResidentNV = nullptr;
inline static PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC glMakeImageHandleNonResidentNV = nullptr;
inline static PFNGLUNIFORMHANDLEUI64NVPROC glUniformHandleui64NV = nullptr;
inline static PFNGLUNIFORMHANDLEUI64VNVPROC glUniformHandleui64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC glProgramUniformHandleui64NV = nullptr;
inline static PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC glProgramUniformHandleui64vNV = nullptr;
inline static PFNGLISTEXTUREHANDLERESIDENTNVPROC glIsTextureHandleResidentNV = nullptr;
inline static PFNGLISIMAGEHANDLERESIDENTNVPROC glIsImageHandleResidentNV = nullptr;
inline static PFNGLBLENDPARAMETERINVPROC glBlendParameteriNV = nullptr;
inline static PFNGLBLENDBARRIERNVPROC glBlendBarrierNV = nullptr;
inline static PFNGLVIEWPORTPOSITIONWSCALENVPROC glViewportPositionWScaleNV = nullptr;
inline static PFNGLCREATESTATESNVPROC glCreateStatesNV = nullptr;
inline static PFNGLDELETESTATESNVPROC glDeleteStatesNV = nullptr;
inline static PFNGLISSTATENVPROC glIsStateNV = nullptr;
inline static PFNGLSTATECAPTURENVPROC glStateCaptureNV = nullptr;
inline static PFNGLGETCOMMANDHEADERNVPROC glGetCommandHeaderNV = nullptr;
inline static PFNGLGETSTAGEINDEXNVPROC glGetStageIndexNV = nullptr;
inline static PFNGLDRAWCOMMANDSNVPROC glDrawCommandsNV = nullptr;
inline static PFNGLDRAWCOMMANDSADDRESSNVPROC glDrawCommandsAddressNV = nullptr;
inline static PFNGLDRAWCOMMANDSSTATESNVPROC glDrawCommandsStatesNV = nullptr;
inline static PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC glDrawCommandsStatesAddressNV = nullptr;
inline static PFNGLCREATECOMMANDLISTSNVPROC glCreateCommandListsNV = nullptr;
inline static PFNGLDELETECOMMANDLISTSNVPROC glDeleteCommandListsNV = nullptr;
inline static PFNGLISCOMMANDLISTNVPROC glIsCommandListNV = nullptr;
inline static PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC glListDrawCommandsStatesClientNV = nullptr;
inline static PFNGLCOMMANDLISTSEGMENTSNVPROC glCommandListSegmentsNV = nullptr;
inline static PFNGLCOMPILECOMMANDLISTNVPROC glCompileCommandListNV = nullptr;
inline static PFNGLCALLCOMMANDLISTNVPROC glCallCommandListNV = nullptr;
inline static PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV = nullptr;
inline static PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV = nullptr;
inline static PFNGLSUBPIXELPRECISIONBIASNVPROC glSubpixelPrecisionBiasNV = nullptr;
inline static PFNGLCONSERVATIVERASTERPARAMETERFNVPROC glConservativeRasterParameterfNV = nullptr;
inline static PFNGLCONSERVATIVERASTERPARAMETERINVPROC glConservativeRasterParameteriNV = nullptr;
inline static PFNGLDEPTHRANGEDNVPROC glDepthRangedNV = nullptr;
inline static PFNGLCLEARDEPTHDNVPROC glClearDepthdNV = nullptr;
inline static PFNGLDEPTHBOUNDSDNVPROC glDepthBoundsdNV = nullptr;
inline static PFNGLDRAWVKIMAGENVPROC glDrawVkImageNV = nullptr;
inline static PFNGLGETVKPROCADDRNVPROC glGetVkProcAddrNV = nullptr;
inline static PFNGLWAITVKSEMAPHORENVPROC glWaitVkSemaphoreNV = nullptr;
inline static PFNGLSIGNALVKSEMAPHORENVPROC glSignalVkSemaphoreNV = nullptr;
inline static PFNGLSIGNALVKFENCENVPROC glSignalVkFenceNV = nullptr;
inline static PFNGLFRAGMENTCOVERAGECOLORNVPROC glFragmentCoverageColorNV = nullptr;
inline static PFNGLCOVERAGEMODULATIONTABLENVPROC glCoverageModulationTableNV = nullptr;
inline static PFNGLGETCOVERAGEMODULATIONTABLENVPROC glGetCoverageModulationTableNV = nullptr;
inline static PFNGLCOVERAGEMODULATIONNVPROC glCoverageModulationNV = nullptr;
inline static PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glRenderbufferStorageMultisampleCoverageNV = nullptr;
inline static PFNGLUNIFORM1I64NVPROC glUniform1i64NV = nullptr;
inline static PFNGLUNIFORM2I64NVPROC glUniform2i64NV = nullptr;
inline static PFNGLUNIFORM3I64NVPROC glUniform3i64NV = nullptr;
inline static PFNGLUNIFORM4I64NVPROC glUniform4i64NV = nullptr;
inline static PFNGLUNIFORM1I64VNVPROC glUniform1i64vNV = nullptr;
inline static PFNGLUNIFORM2I64VNVPROC glUniform2i64vNV = nullptr;
inline static PFNGLUNIFORM3I64VNVPROC glUniform3i64vNV = nullptr;
inline static PFNGLUNIFORM4I64VNVPROC glUniform4i64vNV = nullptr;
inline static PFNGLUNIFORM1UI64NVPROC glUniform1ui64NV = nullptr;
inline static PFNGLUNIFORM2UI64NVPROC glUniform2ui64NV = nullptr;
inline static PFNGLUNIFORM3UI64NVPROC glUniform3ui64NV = nullptr;
inline static PFNGLUNIFORM4UI64NVPROC glUniform4ui64NV = nullptr;
inline static PFNGLUNIFORM1UI64VNVPROC glUniform1ui64vNV = nullptr;
inline static PFNGLUNIFORM2UI64VNVPROC glUniform2ui64vNV = nullptr;
inline static PFNGLUNIFORM3UI64VNVPROC glUniform3ui64vNV = nullptr;
inline static PFNGLUNIFORM4UI64VNVPROC glUniform4ui64vNV = nullptr;
inline static PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV = nullptr;
inline static PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV = nullptr;
inline static PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glGetInternalformatSampleivNV = nullptr;
inline static PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC glGetMemoryObjectDetachedResourcesuivNV = nullptr;
inline static PFNGLRESETMEMORYOBJECTPARAMETERNVPROC glResetMemoryObjectParameterNV = nullptr;
inline static PFNGLTEXATTACHMEMORYNVPROC glTexAttachMemoryNV = nullptr;
inline static PFNGLBUFFERATTACHMEMORYNVPROC glBufferAttachMemoryNV = nullptr;
inline static PFNGLTEXTUREATTACHMEMORYNVPROC glTextureAttachMemoryNV = nullptr;
inline static PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glNamedBufferAttachMemoryNV = nullptr;
inline static PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glBufferPageCommitmentMemNV = nullptr;
inline static PFNGLTEXPAGECOMMITMENTMEMNVPROC glTexPageCommitmentMemNV = nullptr;
inline static PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glNamedBufferPageCommitmentMemNV = nullptr;
inline static PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC glTexturePageCommitmentMemNV = nullptr;
inline static PFNGLDRAWMESHTASKSNVPROC glDrawMeshTasksNV = nullptr;
inline static PFNGLDRAWMESHTASKSINDIRECTNVPROC glDrawMeshTasksIndirectNV = nullptr;
inline static PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC glMultiDrawMeshTasksIndirectNV = nullptr;
inline static PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC glMultiDrawMeshTasksIndirectCountNV = nullptr;
inline static PFNGLGENPATHSNVPROC glGenPathsNV = nullptr;
inline static PFNGLDELETEPATHSNVPROC glDeletePathsNV = nullptr;
inline static PFNGLISPATHNVPROC glIsPathNV = nullptr;
inline static PFNGLPATHCOMMANDSNVPROC glPathCommandsNV = nullptr;
inline static PFNGLPATHCOORDSNVPROC glPathCoordsNV = nullptr;
inline static PFNGLPATHSUBCOMMANDSNVPROC glPathSubCommandsNV = nullptr;
inline static PFNGLPATHSUBCOORDSNVPROC glPathSubCoordsNV = nullptr;
inline static PFNGLPATHSTRINGNVPROC glPathStringNV = nullptr;
inline static PFNGLPATHGLYPHSNVPROC glPathGlyphsNV = nullptr;
inline static PFNGLPATHGLYPHRANGENVPROC glPathGlyphRangeNV = nullptr;
inline static PFNGLWEIGHTPATHSNVPROC glWeightPathsNV = nullptr;
inline static PFNGLCOPYPATHNVPROC glCopyPathNV = nullptr;
inline static PFNGLINTERPOLATEPATHSNVPROC glInterpolatePathsNV = nullptr;
inline static PFNGLTRANSFORMPATHNVPROC glTransformPathNV = nullptr;
inline static PFNGLPATHPARAMETERIVNVPROC glPathParameterivNV = nullptr;
inline static PFNGLPATHPARAMETERINVPROC glPathParameteriNV = nullptr;
inline static PFNGLPATHPARAMETERFVNVPROC glPathParameterfvNV = nullptr;
inline static PFNGLPATHPARAMETERFNVPROC glPathParameterfNV = nullptr;
inline static PFNGLPATHDASHARRAYNVPROC glPathDashArrayNV = nullptr;
inline static PFNGLPATHSTENCILFUNCNVPROC glPathStencilFuncNV = nullptr;
inline static PFNGLPATHSTENCILDEPTHOFFSETNVPROC glPathStencilDepthOffsetNV = nullptr;
inline static PFNGLSTENCILFILLPATHNVPROC glStencilFillPathNV = nullptr;
inline static PFNGLSTENCILSTROKEPATHNVPROC glStencilStrokePathNV = nullptr;
inline static PFNGLSTENCILFILLPATHINSTANCEDNVPROC glStencilFillPathInstancedNV = nullptr;
inline static PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glStencilStrokePathInstancedNV = nullptr;
inline static PFNGLPATHCOVERDEPTHFUNCNVPROC glPathCoverDepthFuncNV = nullptr;
inline static PFNGLCOVERFILLPATHNVPROC glCoverFillPathNV = nullptr;
inline static PFNGLCOVERSTROKEPATHNVPROC glCoverStrokePathNV = nullptr;
inline static PFNGLCOVERFILLPATHINSTANCEDNVPROC glCoverFillPathInstancedNV = nullptr;
inline static PFNGLCOVERSTROKEPATHINSTANCEDNVPROC glCoverStrokePathInstancedNV = nullptr;
inline static PFNGLGETPATHPARAMETERIVNVPROC glGetPathParameterivNV = nullptr;
inline static PFNGLGETPATHPARAMETERFVNVPROC glGetPathParameterfvNV = nullptr;
inline static PFNGLGETPATHCOMMANDSNVPROC glGetPathCommandsNV = nullptr;
inline static PFNGLGETPATHCOORDSNVPROC glGetPathCoordsNV = nullptr;
inline static PFNGLGETPATHDASHARRAYNVPROC glGetPathDashArrayNV = nullptr;
inline static PFNGLGETPATHMETRICSNVPROC glGetPathMetricsNV = nullptr;
inline static PFNGLGETPATHMETRICRANGENVPROC glGetPathMetricRangeNV = nullptr;
inline static PFNGLGETPATHSPACINGNVPROC glGetPathSpacingNV = nullptr;
inline static PFNGLISPOINTINFILLPATHNVPROC glIsPointInFillPathNV = nullptr;
inline static PFNGLISPOINTINSTROKEPATHNVPROC glIsPointInStrokePathNV = nullptr;
inline static PFNGLGETPATHLENGTHNVPROC glGetPathLengthNV = nullptr;
inline static PFNGLPOINTALONGPATHNVPROC glPointAlongPathNV = nullptr;
inline static PFNGLMATRIXLOAD3X2FNVPROC glMatrixLoad3x2fNV = nullptr;
inline static PFNGLMATRIXLOAD3X3FNVPROC glMatrixLoad3x3fNV = nullptr;
inline static PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC glMatrixLoadTranspose3x3fNV = nullptr;
inline static PFNGLMATRIXMULT3X2FNVPROC glMatrixMult3x2fNV = nullptr;
inline static PFNGLMATRIXMULT3X3FNVPROC glMatrixMult3x3fNV = nullptr;
inline static PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC glMatrixMultTranspose3x3fNV = nullptr;
inline static PFNGLSTENCILTHENCOVERFILLPATHNVPROC glStencilThenCoverFillPathNV = nullptr;
inline static PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC glStencilThenCoverStrokePathNV = nullptr;
inline static PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC glStencilThenCoverFillPathInstancedNV = nullptr;
inline static PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glStencilThenCoverStrokePathInstancedNV = nullptr;
inline static PFNGLPATHGLYPHINDEXRANGENVPROC glPathGlyphIndexRangeNV = nullptr;
inline static PFNGLPATHGLYPHINDEXARRAYNVPROC glPathGlyphIndexArrayNV = nullptr;
inline static PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC glPathMemoryGlyphIndexArrayNV = nullptr;
inline static PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glProgramPathFragmentInputGenNV = nullptr;
inline static PFNGLGETPROGRAMRESOURCEFVNVPROC glGetProgramResourcefvNV = nullptr;
inline static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glFramebufferSampleLocationsfvNV = nullptr;
inline static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glNamedFramebufferSampleLocationsfvNV = nullptr;
inline static PFNGLRESOLVEDEPTHVALUESNVPROC glResolveDepthValuesNV = nullptr;
inline static PFNGLSCISSOREXCLUSIVENVPROC glScissorExclusiveNV = nullptr;
inline static PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glScissorExclusiveArrayvNV = nullptr;
inline static PFNGLMAKEBUFFERRESIDENTNVPROC glMakeBufferResidentNV = nullptr;
inline static PFNGLMAKEBUFFERNONRESIDENTNVPROC glMakeBufferNonResidentNV = nullptr;
inline static PFNGLISBUFFERRESIDENTNVPROC glIsBufferResidentNV = nullptr;
inline static PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glMakeNamedBufferResidentNV = nullptr;
inline static PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glMakeNamedBufferNonResidentNV = nullptr;
inline static PFNGLISNAMEDBUFFERRESIDENTNVPROC glIsNamedBufferResidentNV = nullptr;
inline static PFNGLGETBUFFERPARAMETERUI64VNVPROC glGetBufferParameterui64vNV = nullptr;
inline static PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glGetNamedBufferParameterui64vNV = nullptr;
inline static PFNGLGETINTEGERUI64VNVPROC glGetIntegerui64vNV = nullptr;
inline static PFNGLUNIFORMUI64NVPROC glUniformui64NV = nullptr;
inline static PFNGLUNIFORMUI64VNVPROC glUniformui64vNV = nullptr;
inline static PFNGLGETUNIFORMUI64VNVPROC glGetUniformui64vNV = nullptr;
inline static PFNGLPROGRAMUNIFORMUI64NVPROC glProgramUniformui64NV = nullptr;
inline static PFNGLPROGRAMUNIFORMUI64VNVPROC glProgramUniformui64vNV = nullptr;
inline static PFNGLBINDSHADINGRATEIMAGENVPROC glBindShadingRateImageNV = nullptr;
inline static PFNGLGETSHADINGRATEIMAGEPALETTENVPROC glGetShadingRateImagePaletteNV = nullptr;
inline static PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC glGetShadingRateSampleLocationivNV = nullptr;
inline static PFNGLSHADINGRATEIMAGEBARRIERNVPROC glShadingRateImageBarrierNV = nullptr;
inline static PFNGLSHADINGRATEIMAGEPALETTENVPROC glShadingRateImagePaletteNV = nullptr;
inline static PFNGLSHADINGRATESAMPLEORDERNVPROC glShadingRateSampleOrderNV = nullptr;
inline static PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC glShadingRateSampleOrderCustomNV = nullptr;
inline static PFNGLTEXTUREBARRIERNVPROC glTextureBarrierNV = nullptr;
inline static PFNGLVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV = nullptr;
inline static PFNGLVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV = nullptr;
inline static PFNGLVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV = nullptr;
inline static PFNGLVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV = nullptr;
inline static PFNGLVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV = nullptr;
inline static PFNGLVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV = nullptr;
inline static PFNGLVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV = nullptr;
inline static PFNGLVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV = nullptr;
inline static PFNGLVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV = nullptr;
inline static PFNGLVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV = nullptr;
inline static PFNGLVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV = nullptr;
inline static PFNGLVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV = nullptr;
inline static PFNGLVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV = nullptr;
inline static PFNGLVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV = nullptr;
inline static PFNGLVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV = nullptr;
inline static PFNGLVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV = nullptr;
inline static PFNGLGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV = nullptr;
inline static PFNGLGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV = nullptr;
inline static PFNGLVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV = nullptr;
inline static PFNGLBUFFERADDRESSRANGENVPROC glBufferAddressRangeNV = nullptr;
inline static PFNGLVERTEXFORMATNVPROC glVertexFormatNV = nullptr;
inline static PFNGLNORMALFORMATNVPROC glNormalFormatNV = nullptr;
inline static PFNGLCOLORFORMATNVPROC glColorFormatNV = nullptr;
inline static PFNGLINDEXFORMATNVPROC glIndexFormatNV = nullptr;
inline static PFNGLTEXCOORDFORMATNVPROC glTexCoordFormatNV = nullptr;
inline static PFNGLEDGEFLAGFORMATNVPROC glEdgeFlagFormatNV = nullptr;
inline static PFNGLSECONDARYCOLORFORMATNVPROC glSecondaryColorFormatNV = nullptr;
inline static PFNGLFOGCOORDFORMATNVPROC glFogCoordFormatNV = nullptr;
inline static PFNGLVERTEXATTRIBFORMATNVPROC glVertexAttribFormatNV = nullptr;
inline static PFNGLVERTEXATTRIBIFORMATNVPROC glVertexAttribIFormatNV = nullptr;
inline static PFNGLGETINTEGERUI64I_VNVPROC glGetIntegerui64i_vNV = nullptr;
inline static PFNGLVIEWPORTSWIZZLENVPROC glViewportSwizzleNV = nullptr;
inline static PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glFramebufferTextureMultiviewOVR = nullptr;
// Function defines

#define glCullFace GLFunctionLoader::glCullFace
#define glFrontFace GLFunctionLoader::glFrontFace
#define glHint GLFunctionLoader::glHint
#define glLineWidth GLFunctionLoader::glLineWidth
#define glPointSize GLFunctionLoader::glPointSize
#define glPolygonMode GLFunctionLoader::glPolygonMode
#define glScissor GLFunctionLoader::glScissor
#define glTexParameterf GLFunctionLoader::glTexParameterf
#define glTexParameterfv GLFunctionLoader::glTexParameterfv
#define glTexParameteri GLFunctionLoader::glTexParameteri
#define glTexParameteriv GLFunctionLoader::glTexParameteriv
#define glTexImage1D GLFunctionLoader::glTexImage1D
#define glTexImage2D GLFunctionLoader::glTexImage2D
#define glDrawBuffer GLFunctionLoader::glDrawBuffer
#define glClear GLFunctionLoader::glClear
#define glClearColor GLFunctionLoader::glClearColor
#define glClearStencil GLFunctionLoader::glClearStencil
#define glClearDepth GLFunctionLoader::glClearDepth
#define glStencilMask GLFunctionLoader::glStencilMask
#define glColorMask GLFunctionLoader::glColorMask
#define glDepthMask GLFunctionLoader::glDepthMask
#define glDisable GLFunctionLoader::glDisable
#define glEnable GLFunctionLoader::glEnable
#define glFinish GLFunctionLoader::glFinish
#define glFlush GLFunctionLoader::glFlush
#define glBlendFunc GLFunctionLoader::glBlendFunc
#define glLogicOp GLFunctionLoader::glLogicOp
#define glStencilFunc GLFunctionLoader::glStencilFunc
#define glStencilOp GLFunctionLoader::glStencilOp
#define glDepthFunc GLFunctionLoader::glDepthFunc
#define glPixelStoref GLFunctionLoader::glPixelStoref
#define glPixelStorei GLFunctionLoader::glPixelStorei
#define glReadBuffer GLFunctionLoader::glReadBuffer
#define glReadPixels GLFunctionLoader::glReadPixels
#define glGetBooleanv GLFunctionLoader::glGetBooleanv
#define glGetDoublev GLFunctionLoader::glGetDoublev
#define glGetError GLFunctionLoader::glGetError
#define glGetFloatv GLFunctionLoader::glGetFloatv
#define glGetIntegerv GLFunctionLoader::glGetIntegerv
#define glGetString GLFunctionLoader::glGetString
#define glGetTexImage GLFunctionLoader::glGetTexImage
#define glGetTexParameterfv GLFunctionLoader::glGetTexParameterfv
#define glGetTexParameteriv GLFunctionLoader::glGetTexParameteriv
#define glGetTexLevelParameterfv GLFunctionLoader::glGetTexLevelParameterfv
#define glGetTexLevelParameteriv GLFunctionLoader::glGetTexLevelParameteriv
#define glIsEnabled GLFunctionLoader::glIsEnabled
#define glDepthRange GLFunctionLoader::glDepthRange
#define glViewport GLFunctionLoader::glViewport
#define glDrawArrays GLFunctionLoader::glDrawArrays
#define glDrawElements GLFunctionLoader::glDrawElements
#define glGetPointerv GLFunctionLoader::glGetPointerv
#define glPolygonOffset GLFunctionLoader::glPolygonOffset
#define glCopyTexImage1D GLFunctionLoader::glCopyTexImage1D
#define glCopyTexImage2D GLFunctionLoader::glCopyTexImage2D
#define glCopyTexSubImage1D GLFunctionLoader::glCopyTexSubImage1D
#define glCopyTexSubImage2D GLFunctionLoader::glCopyTexSubImage2D
#define glTexSubImage1D GLFunctionLoader::glTexSubImage1D
#define glTexSubImage2D GLFunctionLoader::glTexSubImage2D
#define glBindTexture GLFunctionLoader::glBindTexture
#define glDeleteTextures GLFunctionLoader::glDeleteTextures
#define glGenTextures GLFunctionLoader::glGenTextures
#define glIsTexture GLFunctionLoader::glIsTexture
#define glDrawRangeElements GLFunctionLoader::glDrawRangeElements
#define glTexImage3D GLFunctionLoader::glTexImage3D
#define glTexSubImage3D GLFunctionLoader::glTexSubImage3D
#define glCopyTexSubImage3D GLFunctionLoader::glCopyTexSubImage3D
#define glActiveTexture GLFunctionLoader::glActiveTexture
#define glSampleCoverage GLFunctionLoader::glSampleCoverage
#define glCompressedTexImage3D GLFunctionLoader::glCompressedTexImage3D
#define glCompressedTexImage2D GLFunctionLoader::glCompressedTexImage2D
#define glCompressedTexImage1D GLFunctionLoader::glCompressedTexImage1D
#define glCompressedTexSubImage3D GLFunctionLoader::glCompressedTexSubImage3D
#define glCompressedTexSubImage2D GLFunctionLoader::glCompressedTexSubImage2D
#define glCompressedTexSubImage1D GLFunctionLoader::glCompressedTexSubImage1D
#define glGetCompressedTexImage GLFunctionLoader::glGetCompressedTexImage
#define glBlendFuncSeparate GLFunctionLoader::glBlendFuncSeparate
#define glMultiDrawArrays GLFunctionLoader::glMultiDrawArrays
#define glMultiDrawElements GLFunctionLoader::glMultiDrawElements
#define glPointParameterf GLFunctionLoader::glPointParameterf
#define glPointParameterfv GLFunctionLoader::glPointParameterfv
#define glPointParameteri GLFunctionLoader::glPointParameteri
#define glPointParameteriv GLFunctionLoader::glPointParameteriv
#define glBlendColor GLFunctionLoader::glBlendColor
#define glBlendEquation GLFunctionLoader::glBlendEquation
#define glGenQueries GLFunctionLoader::glGenQueries
#define glDeleteQueries GLFunctionLoader::glDeleteQueries
#define glIsQuery GLFunctionLoader::glIsQuery
#define glBeginQuery GLFunctionLoader::glBeginQuery
#define glEndQuery GLFunctionLoader::glEndQuery
#define glGetQueryiv GLFunctionLoader::glGetQueryiv
#define glGetQueryObjectiv GLFunctionLoader::glGetQueryObjectiv
#define glGetQueryObjectuiv GLFunctionLoader::glGetQueryObjectuiv
#define glBindBuffer GLFunctionLoader::glBindBuffer
#define glDeleteBuffers GLFunctionLoader::glDeleteBuffers
#define glGenBuffers GLFunctionLoader::glGenBuffers
#define glIsBuffer GLFunctionLoader::glIsBuffer
#define glBufferData GLFunctionLoader::glBufferData
#define glBufferSubData GLFunctionLoader::glBufferSubData
#define glGetBufferSubData GLFunctionLoader::glGetBufferSubData
#define glMapBuffer GLFunctionLoader::glMapBuffer
#define glUnmapBuffer GLFunctionLoader::glUnmapBuffer
#define glGetBufferParameteriv GLFunctionLoader::glGetBufferParameteriv
#define glGetBufferPointerv GLFunctionLoader::glGetBufferPointerv
#define glBlendEquationSeparate GLFunctionLoader::glBlendEquationSeparate
#define glDrawBuffers GLFunctionLoader::glDrawBuffers
#define glStencilOpSeparate GLFunctionLoader::glStencilOpSeparate
#define glStencilFuncSeparate GLFunctionLoader::glStencilFuncSeparate
#define glStencilMaskSeparate GLFunctionLoader::glStencilMaskSeparate
#define glAttachShader GLFunctionLoader::glAttachShader
#define glBindAttribLocation GLFunctionLoader::glBindAttribLocation
#define glCompileShader GLFunctionLoader::glCompileShader
#define glCreateProgram GLFunctionLoader::glCreateProgram
#define glCreateShader GLFunctionLoader::glCreateShader
#define glDeleteProgram GLFunctionLoader::glDeleteProgram
#define glDeleteShader GLFunctionLoader::glDeleteShader
#define glDetachShader GLFunctionLoader::glDetachShader
#define glDisableVertexAttribArray GLFunctionLoader::glDisableVertexAttribArray
#define glEnableVertexAttribArray GLFunctionLoader::glEnableVertexAttribArray
#define glGetActiveAttrib GLFunctionLoader::glGetActiveAttrib
#define glGetActiveUniform GLFunctionLoader::glGetActiveUniform
#define glGetAttachedShaders GLFunctionLoader::glGetAttachedShaders
#define glGetAttribLocation GLFunctionLoader::glGetAttribLocation
#define glGetProgramiv GLFunctionLoader::glGetProgramiv
#define glGetProgramInfoLog GLFunctionLoader::glGetProgramInfoLog
#define glGetShaderiv GLFunctionLoader::glGetShaderiv
#define glGetShaderInfoLog GLFunctionLoader::glGetShaderInfoLog
#define glGetShaderSource GLFunctionLoader::glGetShaderSource
#define glGetUniformLocation GLFunctionLoader::glGetUniformLocation
#define glGetUniformfv GLFunctionLoader::glGetUniformfv
#define glGetUniformiv GLFunctionLoader::glGetUniformiv
#define glGetVertexAttribdv GLFunctionLoader::glGetVertexAttribdv
#define glGetVertexAttribfv GLFunctionLoader::glGetVertexAttribfv
#define glGetVertexAttribiv GLFunctionLoader::glGetVertexAttribiv
#define glGetVertexAttribPointerv GLFunctionLoader::glGetVertexAttribPointerv
#define glIsProgram GLFunctionLoader::glIsProgram
#define glIsShader GLFunctionLoader::glIsShader
#define glLinkProgram GLFunctionLoader::glLinkProgram
#define glShaderSource GLFunctionLoader::glShaderSource
#define glUseProgram GLFunctionLoader::glUseProgram
#define glUniform1f GLFunctionLoader::glUniform1f
#define glUniform2f GLFunctionLoader::glUniform2f
#define glUniform3f GLFunctionLoader::glUniform3f
#define glUniform4f GLFunctionLoader::glUniform4f
#define glUniform1i GLFunctionLoader::glUniform1i
#define glUniform2i GLFunctionLoader::glUniform2i
#define glUniform3i GLFunctionLoader::glUniform3i
#define glUniform4i GLFunctionLoader::glUniform4i
#define glUniform1fv GLFunctionLoader::glUniform1fv
#define glUniform2fv GLFunctionLoader::glUniform2fv
#define glUniform3fv GLFunctionLoader::glUniform3fv
#define glUniform4fv GLFunctionLoader::glUniform4fv
#define glUniform1iv GLFunctionLoader::glUniform1iv
#define glUniform2iv GLFunctionLoader::glUniform2iv
#define glUniform3iv GLFunctionLoader::glUniform3iv
#define glUniform4iv GLFunctionLoader::glUniform4iv
#define glUniformMatrix2fv GLFunctionLoader::glUniformMatrix2fv
#define glUniformMatrix3fv GLFunctionLoader::glUniformMatrix3fv
#define glUniformMatrix4fv GLFunctionLoader::glUniformMatrix4fv
#define glValidateProgram GLFunctionLoader::glValidateProgram
#define glVertexAttrib1d GLFunctionLoader::glVertexAttrib1d
#define glVertexAttrib1dv GLFunctionLoader::glVertexAttrib1dv
#define glVertexAttrib1f GLFunctionLoader::glVertexAttrib1f
#define glVertexAttrib1fv GLFunctionLoader::glVertexAttrib1fv
#define glVertexAttrib1s GLFunctionLoader::glVertexAttrib1s
#define glVertexAttrib1sv GLFunctionLoader::glVertexAttrib1sv
#define glVertexAttrib2d GLFunctionLoader::glVertexAttrib2d
#define glVertexAttrib2dv GLFunctionLoader::glVertexAttrib2dv
#define glVertexAttrib2f GLFunctionLoader::glVertexAttrib2f
#define glVertexAttrib2fv GLFunctionLoader::glVertexAttrib2fv
#define glVertexAttrib2s GLFunctionLoader::glVertexAttrib2s
#define glVertexAttrib2sv GLFunctionLoader::glVertexAttrib2sv
#define glVertexAttrib3d GLFunctionLoader::glVertexAttrib3d
#define glVertexAttrib3dv GLFunctionLoader::glVertexAttrib3dv
#define glVertexAttrib3f GLFunctionLoader::glVertexAttrib3f
#define glVertexAttrib3fv GLFunctionLoader::glVertexAttrib3fv
#define glVertexAttrib3s GLFunctionLoader::glVertexAttrib3s
#define glVertexAttrib3sv GLFunctionLoader::glVertexAttrib3sv
#define glVertexAttrib4Nbv GLFunctionLoader::glVertexAttrib4Nbv
#define glVertexAttrib4Niv GLFunctionLoader::glVertexAttrib4Niv
#define glVertexAttrib4Nsv GLFunctionLoader::glVertexAttrib4Nsv
#define glVertexAttrib4Nub GLFunctionLoader::glVertexAttrib4Nub
#define glVertexAttrib4Nubv GLFunctionLoader::glVertexAttrib4Nubv
#define glVertexAttrib4Nuiv GLFunctionLoader::glVertexAttrib4Nuiv
#define glVertexAttrib4Nusv GLFunctionLoader::glVertexAttrib4Nusv
#define glVertexAttrib4bv GLFunctionLoader::glVertexAttrib4bv
#define glVertexAttrib4d GLFunctionLoader::glVertexAttrib4d
#define glVertexAttrib4dv GLFunctionLoader::glVertexAttrib4dv
#define glVertexAttrib4f GLFunctionLoader::glVertexAttrib4f
#define glVertexAttrib4fv GLFunctionLoader::glVertexAttrib4fv
#define glVertexAttrib4iv GLFunctionLoader::glVertexAttrib4iv
#define glVertexAttrib4s GLFunctionLoader::glVertexAttrib4s
#define glVertexAttrib4sv GLFunctionLoader::glVertexAttrib4sv
#define glVertexAttrib4ubv GLFunctionLoader::glVertexAttrib4ubv
#define glVertexAttrib4uiv GLFunctionLoader::glVertexAttrib4uiv
#define glVertexAttrib4usv GLFunctionLoader::glVertexAttrib4usv
#define glVertexAttribPointer GLFunctionLoader::glVertexAttribPointer
#define glUniformMatrix2x3fv GLFunctionLoader::glUniformMatrix2x3fv
#define glUniformMatrix3x2fv GLFunctionLoader::glUniformMatrix3x2fv
#define glUniformMatrix2x4fv GLFunctionLoader::glUniformMatrix2x4fv
#define glUniformMatrix4x2fv GLFunctionLoader::glUniformMatrix4x2fv
#define glUniformMatrix3x4fv GLFunctionLoader::glUniformMatrix3x4fv
#define glUniformMatrix4x3fv GLFunctionLoader::glUniformMatrix4x3fv
#define glColorMaski GLFunctionLoader::glColorMaski
#define glGetBooleani_v GLFunctionLoader::glGetBooleani_v
#define glGetIntegeri_v GLFunctionLoader::glGetIntegeri_v
#define glEnablei GLFunctionLoader::glEnablei
#define glDisablei GLFunctionLoader::glDisablei
#define glIsEnabledi GLFunctionLoader::glIsEnabledi
#define glBeginTransformFeedback GLFunctionLoader::glBeginTransformFeedback
#define glEndTransformFeedback GLFunctionLoader::glEndTransformFeedback
#define glBindBufferRange GLFunctionLoader::glBindBufferRange
#define glBindBufferBase GLFunctionLoader::glBindBufferBase
#define glTransformFeedbackVaryings GLFunctionLoader::glTransformFeedbackVaryings
#define glGetTransformFeedbackVarying GLFunctionLoader::glGetTransformFeedbackVarying
#define glClampColor GLFunctionLoader::glClampColor
#define glBeginConditionalRender GLFunctionLoader::glBeginConditionalRender
#define glEndConditionalRender GLFunctionLoader::glEndConditionalRender
#define glVertexAttribIPointer GLFunctionLoader::glVertexAttribIPointer
#define glGetVertexAttribIiv GLFunctionLoader::glGetVertexAttribIiv
#define glGetVertexAttribIuiv GLFunctionLoader::glGetVertexAttribIuiv
#define glVertexAttribI1i GLFunctionLoader::glVertexAttribI1i
#define glVertexAttribI2i GLFunctionLoader::glVertexAttribI2i
#define glVertexAttribI3i GLFunctionLoader::glVertexAttribI3i
#define glVertexAttribI4i GLFunctionLoader::glVertexAttribI4i
#define glVertexAttribI1ui GLFunctionLoader::glVertexAttribI1ui
#define glVertexAttribI2ui GLFunctionLoader::glVertexAttribI2ui
#define glVertexAttribI3ui GLFunctionLoader::glVertexAttribI3ui
#define glVertexAttribI4ui GLFunctionLoader::glVertexAttribI4ui
#define glVertexAttribI1iv GLFunctionLoader::glVertexAttribI1iv
#define glVertexAttribI2iv GLFunctionLoader::glVertexAttribI2iv
#define glVertexAttribI3iv GLFunctionLoader::glVertexAttribI3iv
#define glVertexAttribI4iv GLFunctionLoader::glVertexAttribI4iv
#define glVertexAttribI1uiv GLFunctionLoader::glVertexAttribI1uiv
#define glVertexAttribI2uiv GLFunctionLoader::glVertexAttribI2uiv
#define glVertexAttribI3uiv GLFunctionLoader::glVertexAttribI3uiv
#define glVertexAttribI4uiv GLFunctionLoader::glVertexAttribI4uiv
#define glVertexAttribI4bv GLFunctionLoader::glVertexAttribI4bv
#define glVertexAttribI4sv GLFunctionLoader::glVertexAttribI4sv
#define glVertexAttribI4ubv GLFunctionLoader::glVertexAttribI4ubv
#define glVertexAttribI4usv GLFunctionLoader::glVertexAttribI4usv
#define glGetUniformuiv GLFunctionLoader::glGetUniformuiv
#define glBindFragDataLocation GLFunctionLoader::glBindFragDataLocation
#define glGetFragDataLocation GLFunctionLoader::glGetFragDataLocation
#define glUniform1ui GLFunctionLoader::glUniform1ui
#define glUniform2ui GLFunctionLoader::glUniform2ui
#define glUniform3ui GLFunctionLoader::glUniform3ui
#define glUniform4ui GLFunctionLoader::glUniform4ui
#define glUniform1uiv GLFunctionLoader::glUniform1uiv
#define glUniform2uiv GLFunctionLoader::glUniform2uiv
#define glUniform3uiv GLFunctionLoader::glUniform3uiv
#define glUniform4uiv GLFunctionLoader::glUniform4uiv
#define glTexParameterIiv GLFunctionLoader::glTexParameterIiv
#define glTexParameterIuiv GLFunctionLoader::glTexParameterIuiv
#define glGetTexParameterIiv GLFunctionLoader::glGetTexParameterIiv
#define glGetTexParameterIuiv GLFunctionLoader::glGetTexParameterIuiv
#define glClearBufferiv GLFunctionLoader::glClearBufferiv
#define glClearBufferuiv GLFunctionLoader::glClearBufferuiv
#define glClearBufferfv GLFunctionLoader::glClearBufferfv
#define glClearBufferfi GLFunctionLoader::glClearBufferfi
#define glGetStringi GLFunctionLoader::glGetStringi
#define glIsRenderbuffer GLFunctionLoader::glIsRenderbuffer
#define glBindRenderbuffer GLFunctionLoader::glBindRenderbuffer
#define glDeleteRenderbuffers GLFunctionLoader::glDeleteRenderbuffers
#define glGenRenderbuffers GLFunctionLoader::glGenRenderbuffers
#define glRenderbufferStorage GLFunctionLoader::glRenderbufferStorage
#define glGetRenderbufferParameteriv GLFunctionLoader::glGetRenderbufferParameteriv
#define glIsFramebuffer GLFunctionLoader::glIsFramebuffer
#define glBindFramebuffer GLFunctionLoader::glBindFramebuffer
#define glDeleteFramebuffers GLFunctionLoader::glDeleteFramebuffers
#define glGenFramebuffers GLFunctionLoader::glGenFramebuffers
#define glCheckFramebufferStatus GLFunctionLoader::glCheckFramebufferStatus
#define glFramebufferTexture1D GLFunctionLoader::glFramebufferTexture1D
#define glFramebufferTexture2D GLFunctionLoader::glFramebufferTexture2D
#define glFramebufferTexture3D GLFunctionLoader::glFramebufferTexture3D
#define glFramebufferRenderbuffer GLFunctionLoader::glFramebufferRenderbuffer
#define glGetFramebufferAttachmentParameteriv GLFunctionLoader::glGetFramebufferAttachmentParameteriv
#define glGenerateMipmap GLFunctionLoader::glGenerateMipmap
#define glBlitFramebuffer GLFunctionLoader::glBlitFramebuffer
#define glRenderbufferStorageMultisample GLFunctionLoader::glRenderbufferStorageMultisample
#define glFramebufferTextureLayer GLFunctionLoader::glFramebufferTextureLayer
#define glMapBufferRange GLFunctionLoader::glMapBufferRange
#define glFlushMappedBufferRange GLFunctionLoader::glFlushMappedBufferRange
#define glBindVertexArray GLFunctionLoader::glBindVertexArray
#define glDeleteVertexArrays GLFunctionLoader::glDeleteVertexArrays
#define glGenVertexArrays GLFunctionLoader::glGenVertexArrays
#define glIsVertexArray GLFunctionLoader::glIsVertexArray
#define glDrawArraysInstanced GLFunctionLoader::glDrawArraysInstanced
#define glDrawElementsInstanced GLFunctionLoader::glDrawElementsInstanced
#define glTexBuffer GLFunctionLoader::glTexBuffer
#define glPrimitiveRestartIndex GLFunctionLoader::glPrimitiveRestartIndex
#define glCopyBufferSubData GLFunctionLoader::glCopyBufferSubData
#define glGetUniformIndices GLFunctionLoader::glGetUniformIndices
#define glGetActiveUniformsiv GLFunctionLoader::glGetActiveUniformsiv
#define glGetActiveUniformName GLFunctionLoader::glGetActiveUniformName
#define glGetUniformBlockIndex GLFunctionLoader::glGetUniformBlockIndex
#define glGetActiveUniformBlockiv GLFunctionLoader::glGetActiveUniformBlockiv
#define glGetActiveUniformBlockName GLFunctionLoader::glGetActiveUniformBlockName
#define glUniformBlockBinding GLFunctionLoader::glUniformBlockBinding
#define glDrawElementsBaseVertex GLFunctionLoader::glDrawElementsBaseVertex
#define glDrawRangeElementsBaseVertex GLFunctionLoader::glDrawRangeElementsBaseVertex
#define glDrawElementsInstancedBaseVertex GLFunctionLoader::glDrawElementsInstancedBaseVertex
#define glMultiDrawElementsBaseVertex GLFunctionLoader::glMultiDrawElementsBaseVertex
#define glProvokingVertex GLFunctionLoader::glProvokingVertex
#define glFenceSync GLFunctionLoader::glFenceSync
#define glIsSync GLFunctionLoader::glIsSync
#define glDeleteSync GLFunctionLoader::glDeleteSync
#define glClientWaitSync GLFunctionLoader::glClientWaitSync
#define glWaitSync GLFunctionLoader::glWaitSync
#define glGetInteger64v GLFunctionLoader::glGetInteger64v
#define glGetSynciv GLFunctionLoader::glGetSynciv
#define glGetInteger64i_v GLFunctionLoader::glGetInteger64i_v
#define glGetBufferParameteri64v GLFunctionLoader::glGetBufferParameteri64v
#define glFramebufferTexture GLFunctionLoader::glFramebufferTexture
#define glTexImage2DMultisample GLFunctionLoader::glTexImage2DMultisample
#define glTexImage3DMultisample GLFunctionLoader::glTexImage3DMultisample
#define glGetMultisamplefv GLFunctionLoader::glGetMultisamplefv
#define glSampleMaski GLFunctionLoader::glSampleMaski
#define glBindFragDataLocationIndexed GLFunctionLoader::glBindFragDataLocationIndexed
#define glGetFragDataIndex GLFunctionLoader::glGetFragDataIndex
#define glGenSamplers GLFunctionLoader::glGenSamplers
#define glDeleteSamplers GLFunctionLoader::glDeleteSamplers
#define glIsSampler GLFunctionLoader::glIsSampler
#define glBindSampler GLFunctionLoader::glBindSampler
#define glSamplerParameteri GLFunctionLoader::glSamplerParameteri
#define glSamplerParameteriv GLFunctionLoader::glSamplerParameteriv
#define glSamplerParameterf GLFunctionLoader::glSamplerParameterf
#define glSamplerParameterfv GLFunctionLoader::glSamplerParameterfv
#define glSamplerParameterIiv GLFunctionLoader::glSamplerParameterIiv
#define glSamplerParameterIuiv GLFunctionLoader::glSamplerParameterIuiv
#define glGetSamplerParameteriv GLFunctionLoader::glGetSamplerParameteriv
#define glGetSamplerParameterIiv GLFunctionLoader::glGetSamplerParameterIiv
#define glGetSamplerParameterfv GLFunctionLoader::glGetSamplerParameterfv
#define glGetSamplerParameterIuiv GLFunctionLoader::glGetSamplerParameterIuiv
#define glQueryCounter GLFunctionLoader::glQueryCounter
#define glGetQueryObjecti64v GLFunctionLoader::glGetQueryObjecti64v
#define glGetQueryObjectui64v GLFunctionLoader::glGetQueryObjectui64v
#define glVertexAttribDivisor GLFunctionLoader::glVertexAttribDivisor
#define glVertexAttribP1ui GLFunctionLoader::glVertexAttribP1ui
#define glVertexAttribP1uiv GLFunctionLoader::glVertexAttribP1uiv
#define glVertexAttribP2ui GLFunctionLoader::glVertexAttribP2ui
#define glVertexAttribP2uiv GLFunctionLoader::glVertexAttribP2uiv
#define glVertexAttribP3ui GLFunctionLoader::glVertexAttribP3ui
#define glVertexAttribP3uiv GLFunctionLoader::glVertexAttribP3uiv
#define glVertexAttribP4ui GLFunctionLoader::glVertexAttribP4ui
#define glVertexAttribP4uiv GLFunctionLoader::glVertexAttribP4uiv
#define glMinSampleShading GLFunctionLoader::glMinSampleShading
#define glBlendEquationi GLFunctionLoader::glBlendEquationi
#define glBlendEquationSeparatei GLFunctionLoader::glBlendEquationSeparatei
#define glBlendFunci GLFunctionLoader::glBlendFunci
#define glBlendFuncSeparatei GLFunctionLoader::glBlendFuncSeparatei
#define glDrawArraysIndirect GLFunctionLoader::glDrawArraysIndirect
#define glDrawElementsIndirect GLFunctionLoader::glDrawElementsIndirect
#define glUniform1d GLFunctionLoader::glUniform1d
#define glUniform2d GLFunctionLoader::glUniform2d
#define glUniform3d GLFunctionLoader::glUniform3d
#define glUniform4d GLFunctionLoader::glUniform4d
#define glUniform1dv GLFunctionLoader::glUniform1dv
#define glUniform2dv GLFunctionLoader::glUniform2dv
#define glUniform3dv GLFunctionLoader::glUniform3dv
#define glUniform4dv GLFunctionLoader::glUniform4dv
#define glUniformMatrix2dv GLFunctionLoader::glUniformMatrix2dv
#define glUniformMatrix3dv GLFunctionLoader::glUniformMatrix3dv
#define glUniformMatrix4dv GLFunctionLoader::glUniformMatrix4dv
#define glUniformMatrix2x3dv GLFunctionLoader::glUniformMatrix2x3dv
#define glUniformMatrix2x4dv GLFunctionLoader::glUniformMatrix2x4dv
#define glUniformMatrix3x2dv GLFunctionLoader::glUniformMatrix3x2dv
#define glUniformMatrix3x4dv GLFunctionLoader::glUniformMatrix3x4dv
#define glUniformMatrix4x2dv GLFunctionLoader::glUniformMatrix4x2dv
#define glUniformMatrix4x3dv GLFunctionLoader::glUniformMatrix4x3dv
#define glGetUniformdv GLFunctionLoader::glGetUniformdv
#define glGetSubroutineUniformLocation GLFunctionLoader::glGetSubroutineUniformLocation
#define glGetSubroutineIndex GLFunctionLoader::glGetSubroutineIndex
#define glGetActiveSubroutineUniformiv GLFunctionLoader::glGetActiveSubroutineUniformiv
#define glGetActiveSubroutineUniformName GLFunctionLoader::glGetActiveSubroutineUniformName
#define glGetActiveSubroutineName GLFunctionLoader::glGetActiveSubroutineName
#define glUniformSubroutinesuiv GLFunctionLoader::glUniformSubroutinesuiv
#define glGetUniformSubroutineuiv GLFunctionLoader::glGetUniformSubroutineuiv
#define glGetProgramStageiv GLFunctionLoader::glGetProgramStageiv
#define glPatchParameteri GLFunctionLoader::glPatchParameteri
#define glPatchParameterfv GLFunctionLoader::glPatchParameterfv
#define glBindTransformFeedback GLFunctionLoader::glBindTransformFeedback
#define glDeleteTransformFeedbacks GLFunctionLoader::glDeleteTransformFeedbacks
#define glGenTransformFeedbacks GLFunctionLoader::glGenTransformFeedbacks
#define glIsTransformFeedback GLFunctionLoader::glIsTransformFeedback
#define glPauseTransformFeedback GLFunctionLoader::glPauseTransformFeedback
#define glResumeTransformFeedback GLFunctionLoader::glResumeTransformFeedback
#define glDrawTransformFeedback GLFunctionLoader::glDrawTransformFeedback
#define glDrawTransformFeedbackStream GLFunctionLoader::glDrawTransformFeedbackStream
#define glBeginQueryIndexed GLFunctionLoader::glBeginQueryIndexed
#define glEndQueryIndexed GLFunctionLoader::glEndQueryIndexed
#define glGetQueryIndexediv GLFunctionLoader::glGetQueryIndexediv
#define glReleaseShaderCompiler GLFunctionLoader::glReleaseShaderCompiler
#define glShaderBinary GLFunctionLoader::glShaderBinary
#define glGetShaderPrecisionFormat GLFunctionLoader::glGetShaderPrecisionFormat
#define glDepthRangef GLFunctionLoader::glDepthRangef
#define glClearDepthf GLFunctionLoader::glClearDepthf
#define glGetProgramBinary GLFunctionLoader::glGetProgramBinary
#define glProgramBinary GLFunctionLoader::glProgramBinary
#define glProgramParameteri GLFunctionLoader::glProgramParameteri
#define glUseProgramStages GLFunctionLoader::glUseProgramStages
#define glActiveShaderProgram GLFunctionLoader::glActiveShaderProgram
#define glCreateShaderProgramv GLFunctionLoader::glCreateShaderProgramv
#define glBindProgramPipeline GLFunctionLoader::glBindProgramPipeline
#define glDeleteProgramPipelines GLFunctionLoader::glDeleteProgramPipelines
#define glGenProgramPipelines GLFunctionLoader::glGenProgramPipelines
#define glIsProgramPipeline GLFunctionLoader::glIsProgramPipeline
#define glGetProgramPipelineiv GLFunctionLoader::glGetProgramPipelineiv
#define glProgramUniform1i GLFunctionLoader::glProgramUniform1i
#define glProgramUniform1iv GLFunctionLoader::glProgramUniform1iv
#define glProgramUniform1f GLFunctionLoader::glProgramUniform1f
#define glProgramUniform1fv GLFunctionLoader::glProgramUniform1fv
#define glProgramUniform1d GLFunctionLoader::glProgramUniform1d
#define glProgramUniform1dv GLFunctionLoader::glProgramUniform1dv
#define glProgramUniform1ui GLFunctionLoader::glProgramUniform1ui
#define glProgramUniform1uiv GLFunctionLoader::glProgramUniform1uiv
#define glProgramUniform2i GLFunctionLoader::glProgramUniform2i
#define glProgramUniform2iv GLFunctionLoader::glProgramUniform2iv
#define glProgramUniform2f GLFunctionLoader::glProgramUniform2f
#define glProgramUniform2fv GLFunctionLoader::glProgramUniform2fv
#define glProgramUniform2d GLFunctionLoader::glProgramUniform2d
#define glProgramUniform2dv GLFunctionLoader::glProgramUniform2dv
#define glProgramUniform2ui GLFunctionLoader::glProgramUniform2ui
#define glProgramUniform2uiv GLFunctionLoader::glProgramUniform2uiv
#define glProgramUniform3i GLFunctionLoader::glProgramUniform3i
#define glProgramUniform3iv GLFunctionLoader::glProgramUniform3iv
#define glProgramUniform3f GLFunctionLoader::glProgramUniform3f
#define glProgramUniform3fv GLFunctionLoader::glProgramUniform3fv
#define glProgramUniform3d GLFunctionLoader::glProgramUniform3d
#define glProgramUniform3dv GLFunctionLoader::glProgramUniform3dv
#define glProgramUniform3ui GLFunctionLoader::glProgramUniform3ui
#define glProgramUniform3uiv GLFunctionLoader::glProgramUniform3uiv
#define glProgramUniform4i GLFunctionLoader::glProgramUniform4i
#define glProgramUniform4iv GLFunctionLoader::glProgramUniform4iv
#define glProgramUniform4f GLFunctionLoader::glProgramUniform4f
#define glProgramUniform4fv GLFunctionLoader::glProgramUniform4fv
#define glProgramUniform4d GLFunctionLoader::glProgramUniform4d
#define glProgramUniform4dv GLFunctionLoader::glProgramUniform4dv
#define glProgramUniform4ui GLFunctionLoader::glProgramUniform4ui
#define glProgramUniform4uiv GLFunctionLoader::glProgramUniform4uiv
#define glProgramUniformMatrix2fv GLFunctionLoader::glProgramUniformMatrix2fv
#define glProgramUniformMatrix3fv GLFunctionLoader::glProgramUniformMatrix3fv
#define glProgramUniformMatrix4fv GLFunctionLoader::glProgramUniformMatrix4fv
#define glProgramUniformMatrix2dv GLFunctionLoader::glProgramUniformMatrix2dv
#define glProgramUniformMatrix3dv GLFunctionLoader::glProgramUniformMatrix3dv
#define glProgramUniformMatrix4dv GLFunctionLoader::glProgramUniformMatrix4dv
#define glProgramUniformMatrix2x3fv GLFunctionLoader::glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix3x2fv GLFunctionLoader::glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix2x4fv GLFunctionLoader::glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix4x2fv GLFunctionLoader::glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix3x4fv GLFunctionLoader::glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix4x3fv GLFunctionLoader::glProgramUniformMatrix4x3fv
#define glProgramUniformMatrix2x3dv GLFunctionLoader::glProgramUniformMatrix2x3dv
#define glProgramUniformMatrix3x2dv GLFunctionLoader::glProgramUniformMatrix3x2dv
#define glProgramUniformMatrix2x4dv GLFunctionLoader::glProgramUniformMatrix2x4dv
#define glProgramUniformMatrix4x2dv GLFunctionLoader::glProgramUniformMatrix4x2dv
#define glProgramUniformMatrix3x4dv GLFunctionLoader::glProgramUniformMatrix3x4dv
#define glProgramUniformMatrix4x3dv GLFunctionLoader::glProgramUniformMatrix4x3dv
#define glValidateProgramPipeline GLFunctionLoader::glValidateProgramPipeline
#define glGetProgramPipelineInfoLog GLFunctionLoader::glGetProgramPipelineInfoLog
#define glVertexAttribL1d GLFunctionLoader::glVertexAttribL1d
#define glVertexAttribL2d GLFunctionLoader::glVertexAttribL2d
#define glVertexAttribL3d GLFunctionLoader::glVertexAttribL3d
#define glVertexAttribL4d GLFunctionLoader::glVertexAttribL4d
#define glVertexAttribL1dv GLFunctionLoader::glVertexAttribL1dv
#define glVertexAttribL2dv GLFunctionLoader::glVertexAttribL2dv
#define glVertexAttribL3dv GLFunctionLoader::glVertexAttribL3dv
#define glVertexAttribL4dv GLFunctionLoader::glVertexAttribL4dv
#define glVertexAttribLPointer GLFunctionLoader::glVertexAttribLPointer
#define glGetVertexAttribLdv GLFunctionLoader::glGetVertexAttribLdv
#define glViewportArrayv GLFunctionLoader::glViewportArrayv
#define glViewportIndexedf GLFunctionLoader::glViewportIndexedf
#define glViewportIndexedfv GLFunctionLoader::glViewportIndexedfv
#define glScissorArrayv GLFunctionLoader::glScissorArrayv
#define glScissorIndexed GLFunctionLoader::glScissorIndexed
#define glScissorIndexedv GLFunctionLoader::glScissorIndexedv
#define glDepthRangeArrayv GLFunctionLoader::glDepthRangeArrayv
#define glDepthRangeIndexed GLFunctionLoader::glDepthRangeIndexed
#define glGetFloati_v GLFunctionLoader::glGetFloati_v
#define glGetDoublei_v GLFunctionLoader::glGetDoublei_v
#define glDrawArraysInstancedBaseInstance GLFunctionLoader::glDrawArraysInstancedBaseInstance
#define glDrawElementsInstancedBaseInstance GLFunctionLoader::glDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseVertexBaseInstance GLFunctionLoader::glDrawElementsInstancedBaseVertexBaseInstance
#define glGetInternalformativ GLFunctionLoader::glGetInternalformativ
#define glGetActiveAtomicCounterBufferiv GLFunctionLoader::glGetActiveAtomicCounterBufferiv
#define glBindImageTexture GLFunctionLoader::glBindImageTexture
#define glMemoryBarrier GLFunctionLoader::glMemoryBarrier
#define glTexStorage1D GLFunctionLoader::glTexStorage1D
#define glTexStorage2D GLFunctionLoader::glTexStorage2D
#define glTexStorage3D GLFunctionLoader::glTexStorage3D
#define glDrawTransformFeedbackInstanced GLFunctionLoader::glDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackStreamInstanced GLFunctionLoader::glDrawTransformFeedbackStreamInstanced
#define glClearBufferData GLFunctionLoader::glClearBufferData
#define glClearBufferSubData GLFunctionLoader::glClearBufferSubData
#define glDispatchCompute GLFunctionLoader::glDispatchCompute
#define glDispatchComputeIndirect GLFunctionLoader::glDispatchComputeIndirect
#define glCopyImageSubData GLFunctionLoader::glCopyImageSubData
#define glFramebufferParameteri GLFunctionLoader::glFramebufferParameteri
#define glGetFramebufferParameteriv GLFunctionLoader::glGetFramebufferParameteriv
#define glGetInternalformati64v GLFunctionLoader::glGetInternalformati64v
#define glInvalidateTexSubImage GLFunctionLoader::glInvalidateTexSubImage
#define glInvalidateTexImage GLFunctionLoader::glInvalidateTexImage
#define glInvalidateBufferSubData GLFunctionLoader::glInvalidateBufferSubData
#define glInvalidateBufferData GLFunctionLoader::glInvalidateBufferData
#define glInvalidateFramebuffer GLFunctionLoader::glInvalidateFramebuffer
#define glInvalidateSubFramebuffer GLFunctionLoader::glInvalidateSubFramebuffer
#define glMultiDrawArraysIndirect GLFunctionLoader::glMultiDrawArraysIndirect
#define glMultiDrawElementsIndirect GLFunctionLoader::glMultiDrawElementsIndirect
#define glGetProgramInterfaceiv GLFunctionLoader::glGetProgramInterfaceiv
#define glGetProgramResourceIndex GLFunctionLoader::glGetProgramResourceIndex
#define glGetProgramResourceName GLFunctionLoader::glGetProgramResourceName
#define glGetProgramResourceiv GLFunctionLoader::glGetProgramResourceiv
#define glGetProgramResourceLocation GLFunctionLoader::glGetProgramResourceLocation
#define glGetProgramResourceLocationIndex GLFunctionLoader::glGetProgramResourceLocationIndex
#define glShaderStorageBlockBinding GLFunctionLoader::glShaderStorageBlockBinding
#define glTexBufferRange GLFunctionLoader::glTexBufferRange
#define glTexStorage2DMultisample GLFunctionLoader::glTexStorage2DMultisample
#define glTexStorage3DMultisample GLFunctionLoader::glTexStorage3DMultisample
#define glTextureView GLFunctionLoader::glTextureView
#define glBindVertexBuffer GLFunctionLoader::glBindVertexBuffer
#define glVertexAttribFormat GLFunctionLoader::glVertexAttribFormat
#define glVertexAttribIFormat GLFunctionLoader::glVertexAttribIFormat
#define glVertexAttribLFormat GLFunctionLoader::glVertexAttribLFormat
#define glVertexAttribBinding GLFunctionLoader::glVertexAttribBinding
#define glVertexBindingDivisor GLFunctionLoader::glVertexBindingDivisor
#define glDebugMessageControl GLFunctionLoader::glDebugMessageControl
#define glDebugMessageInsert GLFunctionLoader::glDebugMessageInsert
#define glDebugMessageCallback GLFunctionLoader::glDebugMessageCallback
#define glGetDebugMessageLog GLFunctionLoader::glGetDebugMessageLog
#define glPushDebugGroup GLFunctionLoader::glPushDebugGroup
#define glPopDebugGroup GLFunctionLoader::glPopDebugGroup
#define glObjectLabel GLFunctionLoader::glObjectLabel
#define glGetObjectLabel GLFunctionLoader::glGetObjectLabel
#define glObjectPtrLabel GLFunctionLoader::glObjectPtrLabel
#define glGetObjectPtrLabel GLFunctionLoader::glGetObjectPtrLabel
#define glBufferStorage GLFunctionLoader::glBufferStorage
#define glClearTexImage GLFunctionLoader::glClearTexImage
#define glClearTexSubImage GLFunctionLoader::glClearTexSubImage
#define glBindBuffersBase GLFunctionLoader::glBindBuffersBase
#define glBindBuffersRange GLFunctionLoader::glBindBuffersRange
#define glBindTextures GLFunctionLoader::glBindTextures
#define glBindSamplers GLFunctionLoader::glBindSamplers
#define glBindImageTextures GLFunctionLoader::glBindImageTextures
#define glBindVertexBuffers GLFunctionLoader::glBindVertexBuffers
#define glClipControl GLFunctionLoader::glClipControl
#define glCreateTransformFeedbacks GLFunctionLoader::glCreateTransformFeedbacks
#define glTransformFeedbackBufferBase GLFunctionLoader::glTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange GLFunctionLoader::glTransformFeedbackBufferRange
#define glGetTransformFeedbackiv GLFunctionLoader::glGetTransformFeedbackiv
#define glGetTransformFeedbacki_v GLFunctionLoader::glGetTransformFeedbacki_v
#define glGetTransformFeedbacki64_v GLFunctionLoader::glGetTransformFeedbacki64_v
#define glCreateBuffers GLFunctionLoader::glCreateBuffers
#define glNamedBufferStorage GLFunctionLoader::glNamedBufferStorage
#define glNamedBufferData GLFunctionLoader::glNamedBufferData
#define glNamedBufferSubData GLFunctionLoader::glNamedBufferSubData
#define glCopyNamedBufferSubData GLFunctionLoader::glCopyNamedBufferSubData
#define glClearNamedBufferData GLFunctionLoader::glClearNamedBufferData
#define glClearNamedBufferSubData GLFunctionLoader::glClearNamedBufferSubData
#define glMapNamedBuffer GLFunctionLoader::glMapNamedBuffer
#define glMapNamedBufferRange GLFunctionLoader::glMapNamedBufferRange
#define glUnmapNamedBuffer GLFunctionLoader::glUnmapNamedBuffer
#define glFlushMappedNamedBufferRange GLFunctionLoader::glFlushMappedNamedBufferRange
#define glGetNamedBufferParameteriv GLFunctionLoader::glGetNamedBufferParameteriv
#define glGetNamedBufferParameteri64v GLFunctionLoader::glGetNamedBufferParameteri64v
#define glGetNamedBufferPointerv GLFunctionLoader::glGetNamedBufferPointerv
#define glGetNamedBufferSubData GLFunctionLoader::glGetNamedBufferSubData
#define glCreateFramebuffers GLFunctionLoader::glCreateFramebuffers
#define glNamedFramebufferRenderbuffer GLFunctionLoader::glNamedFramebufferRenderbuffer
#define glNamedFramebufferParameteri GLFunctionLoader::glNamedFramebufferParameteri
#define glNamedFramebufferTexture GLFunctionLoader::glNamedFramebufferTexture
#define glNamedFramebufferTextureLayer GLFunctionLoader::glNamedFramebufferTextureLayer
#define glNamedFramebufferDrawBuffer GLFunctionLoader::glNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers GLFunctionLoader::glNamedFramebufferDrawBuffers
#define glNamedFramebufferReadBuffer GLFunctionLoader::glNamedFramebufferReadBuffer
#define glInvalidateNamedFramebufferData GLFunctionLoader::glInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData GLFunctionLoader::glInvalidateNamedFramebufferSubData
#define glClearNamedFramebufferiv GLFunctionLoader::glClearNamedFramebufferiv
#define glClearNamedFramebufferuiv GLFunctionLoader::glClearNamedFramebufferuiv
#define glClearNamedFramebufferfv GLFunctionLoader::glClearNamedFramebufferfv
#define glClearNamedFramebufferfi GLFunctionLoader::glClearNamedFramebufferfi
#define glBlitNamedFramebuffer GLFunctionLoader::glBlitNamedFramebuffer
#define glCheckNamedFramebufferStatus GLFunctionLoader::glCheckNamedFramebufferStatus
#define glGetNamedFramebufferParameteriv GLFunctionLoader::glGetNamedFramebufferParameteriv
#define glGetNamedFramebufferAttachmentParameteriv GLFunctionLoader::glGetNamedFramebufferAttachmentParameteriv
#define glCreateRenderbuffers GLFunctionLoader::glCreateRenderbuffers
#define glNamedRenderbufferStorage GLFunctionLoader::glNamedRenderbufferStorage
#define glNamedRenderbufferStorageMultisample GLFunctionLoader::glNamedRenderbufferStorageMultisample
#define glGetNamedRenderbufferParameteriv GLFunctionLoader::glGetNamedRenderbufferParameteriv
#define glCreateTextures GLFunctionLoader::glCreateTextures
#define glTextureBuffer GLFunctionLoader::glTextureBuffer
#define glTextureBufferRange GLFunctionLoader::glTextureBufferRange
#define glTextureStorage1D GLFunctionLoader::glTextureStorage1D
#define glTextureStorage2D GLFunctionLoader::glTextureStorage2D
#define glTextureStorage3D GLFunctionLoader::glTextureStorage3D
#define glTextureStorage2DMultisample GLFunctionLoader::glTextureStorage2DMultisample
#define glTextureStorage3DMultisample GLFunctionLoader::glTextureStorage3DMultisample
#define glTextureSubImage1D GLFunctionLoader::glTextureSubImage1D
#define glTextureSubImage2D GLFunctionLoader::glTextureSubImage2D
#define glTextureSubImage3D GLFunctionLoader::glTextureSubImage3D
#define glCompressedTextureSubImage1D GLFunctionLoader::glCompressedTextureSubImage1D
#define glCompressedTextureSubImage2D GLFunctionLoader::glCompressedTextureSubImage2D
#define glCompressedTextureSubImage3D GLFunctionLoader::glCompressedTextureSubImage3D
#define glCopyTextureSubImage1D GLFunctionLoader::glCopyTextureSubImage1D
#define glCopyTextureSubImage2D GLFunctionLoader::glCopyTextureSubImage2D
#define glCopyTextureSubImage3D GLFunctionLoader::glCopyTextureSubImage3D
#define glTextureParameterf GLFunctionLoader::glTextureParameterf
#define glTextureParameterfv GLFunctionLoader::glTextureParameterfv
#define glTextureParameteri GLFunctionLoader::glTextureParameteri
#define glTextureParameterIiv GLFunctionLoader::glTextureParameterIiv
#define glTextureParameterIuiv GLFunctionLoader::glTextureParameterIuiv
#define glTextureParameteriv GLFunctionLoader::glTextureParameteriv
#define glGenerateTextureMipmap GLFunctionLoader::glGenerateTextureMipmap
#define glBindTextureUnit GLFunctionLoader::glBindTextureUnit
#define glGetTextureImage GLFunctionLoader::glGetTextureImage
#define glGetCompressedTextureImage GLFunctionLoader::glGetCompressedTextureImage
#define glGetTextureLevelParameterfv GLFunctionLoader::glGetTextureLevelParameterfv
#define glGetTextureLevelParameteriv GLFunctionLoader::glGetTextureLevelParameteriv
#define glGetTextureParameterfv GLFunctionLoader::glGetTextureParameterfv
#define glGetTextureParameterIiv GLFunctionLoader::glGetTextureParameterIiv
#define glGetTextureParameterIuiv GLFunctionLoader::glGetTextureParameterIuiv
#define glGetTextureParameteriv GLFunctionLoader::glGetTextureParameteriv
#define glCreateVertexArrays GLFunctionLoader::glCreateVertexArrays
#define glDisableVertexArrayAttrib GLFunctionLoader::glDisableVertexArrayAttrib
#define glEnableVertexArrayAttrib GLFunctionLoader::glEnableVertexArrayAttrib
#define glVertexArrayElementBuffer GLFunctionLoader::glVertexArrayElementBuffer
#define glVertexArrayVertexBuffer GLFunctionLoader::glVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers GLFunctionLoader::glVertexArrayVertexBuffers
#define glVertexArrayAttribBinding GLFunctionLoader::glVertexArrayAttribBinding
#define glVertexArrayAttribFormat GLFunctionLoader::glVertexArrayAttribFormat
#define glVertexArrayAttribIFormat GLFunctionLoader::glVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat GLFunctionLoader::glVertexArrayAttribLFormat
#define glVertexArrayBindingDivisor GLFunctionLoader::glVertexArrayBindingDivisor
#define glGetVertexArrayiv GLFunctionLoader::glGetVertexArrayiv
#define glGetVertexArrayIndexediv GLFunctionLoader::glGetVertexArrayIndexediv
#define glGetVertexArrayIndexed64iv GLFunctionLoader::glGetVertexArrayIndexed64iv
#define glCreateSamplers GLFunctionLoader::glCreateSamplers
#define glCreateProgramPipelines GLFunctionLoader::glCreateProgramPipelines
#define glCreateQueries GLFunctionLoader::glCreateQueries
#define glGetQueryBufferObjecti64v GLFunctionLoader::glGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv GLFunctionLoader::glGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v GLFunctionLoader::glGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv GLFunctionLoader::glGetQueryBufferObjectuiv
#define glMemoryBarrierByRegion GLFunctionLoader::glMemoryBarrierByRegion
#define glGetTextureSubImage GLFunctionLoader::glGetTextureSubImage
#define glGetCompressedTextureSubImage GLFunctionLoader::glGetCompressedTextureSubImage
#define glGetGraphicsResetStatus GLFunctionLoader::glGetGraphicsResetStatus
#define glGetnCompressedTexImage GLFunctionLoader::glGetnCompressedTexImage
#define glGetnTexImage GLFunctionLoader::glGetnTexImage
#define glGetnUniformdv GLFunctionLoader::glGetnUniformdv
#define glGetnUniformfv GLFunctionLoader::glGetnUniformfv
#define glGetnUniformiv GLFunctionLoader::glGetnUniformiv
#define glGetnUniformuiv GLFunctionLoader::glGetnUniformuiv
#define glReadnPixels GLFunctionLoader::glReadnPixels
#define glTextureBarrier GLFunctionLoader::glTextureBarrier
#define glSpecializeShader GLFunctionLoader::glSpecializeShader
#define glMultiDrawArraysIndirectCount GLFunctionLoader::glMultiDrawArraysIndirectCount
#define glMultiDrawElementsIndirectCount GLFunctionLoader::glMultiDrawElementsIndirectCount
#define glPolygonOffsetClamp GLFunctionLoader::glPolygonOffsetClamp
#define glPrimitiveBoundingBoxARB GLFunctionLoader::glPrimitiveBoundingBoxARB
#define glGetTextureHandleARB GLFunctionLoader::glGetTextureHandleARB
#define glGetTextureSamplerHandleARB GLFunctionLoader::glGetTextureSamplerHandleARB
#define glMakeTextureHandleResidentARB GLFunctionLoader::glMakeTextureHandleResidentARB
#define glMakeTextureHandleNonResidentARB GLFunctionLoader::glMakeTextureHandleNonResidentARB
#define glGetImageHandleARB GLFunctionLoader::glGetImageHandleARB
#define glMakeImageHandleResidentARB GLFunctionLoader::glMakeImageHandleResidentARB
#define glMakeImageHandleNonResidentARB GLFunctionLoader::glMakeImageHandleNonResidentARB
#define glUniformHandleui64ARB GLFunctionLoader::glUniformHandleui64ARB
#define glUniformHandleui64vARB GLFunctionLoader::glUniformHandleui64vARB
#define glProgramUniformHandleui64ARB GLFunctionLoader::glProgramUniformHandleui64ARB
#define glProgramUniformHandleui64vARB GLFunctionLoader::glProgramUniformHandleui64vARB
#define glIsTextureHandleResidentARB GLFunctionLoader::glIsTextureHandleResidentARB
#define glIsImageHandleResidentARB GLFunctionLoader::glIsImageHandleResidentARB
#define glVertexAttribL1ui64ARB GLFunctionLoader::glVertexAttribL1ui64ARB
#define glVertexAttribL1ui64vARB GLFunctionLoader::glVertexAttribL1ui64vARB
#define glGetVertexAttribLui64vARB GLFunctionLoader::glGetVertexAttribLui64vARB
#define glCreateSyncFromCLeventARB GLFunctionLoader::glCreateSyncFromCLeventARB
#define glDispatchComputeGroupSizeARB GLFunctionLoader::glDispatchComputeGroupSizeARB
#define glDebugMessageControlARB GLFunctionLoader::glDebugMessageControlARB
#define glDebugMessageInsertARB GLFunctionLoader::glDebugMessageInsertARB
#define glDebugMessageCallbackARB GLFunctionLoader::glDebugMessageCallbackARB
#define glGetDebugMessageLogARB GLFunctionLoader::glGetDebugMessageLogARB
#define glBlendEquationiARB GLFunctionLoader::glBlendEquationiARB
#define glBlendEquationSeparateiARB GLFunctionLoader::glBlendEquationSeparateiARB
#define glBlendFunciARB GLFunctionLoader::glBlendFunciARB
#define glBlendFuncSeparateiARB GLFunctionLoader::glBlendFuncSeparateiARB
#define glDrawArraysInstancedARB GLFunctionLoader::glDrawArraysInstancedARB
#define glDrawElementsInstancedARB GLFunctionLoader::glDrawElementsInstancedARB
#define glProgramParameteriARB GLFunctionLoader::glProgramParameteriARB
#define glFramebufferTextureARB GLFunctionLoader::glFramebufferTextureARB
#define glFramebufferTextureLayerARB GLFunctionLoader::glFramebufferTextureLayerARB
#define glFramebufferTextureFaceARB GLFunctionLoader::glFramebufferTextureFaceARB
#define glSpecializeShaderARB GLFunctionLoader::glSpecializeShaderARB
#define glUniform1i64ARB GLFunctionLoader::glUniform1i64ARB
#define glUniform2i64ARB GLFunctionLoader::glUniform2i64ARB
#define glUniform3i64ARB GLFunctionLoader::glUniform3i64ARB
#define glUniform4i64ARB GLFunctionLoader::glUniform4i64ARB
#define glUniform1i64vARB GLFunctionLoader::glUniform1i64vARB
#define glUniform2i64vARB GLFunctionLoader::glUniform2i64vARB
#define glUniform3i64vARB GLFunctionLoader::glUniform3i64vARB
#define glUniform4i64vARB GLFunctionLoader::glUniform4i64vARB
#define glUniform1ui64ARB GLFunctionLoader::glUniform1ui64ARB
#define glUniform2ui64ARB GLFunctionLoader::glUniform2ui64ARB
#define glUniform3ui64ARB GLFunctionLoader::glUniform3ui64ARB
#define glUniform4ui64ARB GLFunctionLoader::glUniform4ui64ARB
#define glUniform1ui64vARB GLFunctionLoader::glUniform1ui64vARB
#define glUniform2ui64vARB GLFunctionLoader::glUniform2ui64vARB
#define glUniform3ui64vARB GLFunctionLoader::glUniform3ui64vARB
#define glUniform4ui64vARB GLFunctionLoader::glUniform4ui64vARB
#define glGetUniformi64vARB GLFunctionLoader::glGetUniformi64vARB
#define glGetUniformui64vARB GLFunctionLoader::glGetUniformui64vARB
#define glGetnUniformi64vARB GLFunctionLoader::glGetnUniformi64vARB
#define glGetnUniformui64vARB GLFunctionLoader::glGetnUniformui64vARB
#define glProgramUniform1i64ARB GLFunctionLoader::glProgramUniform1i64ARB
#define glProgramUniform2i64ARB GLFunctionLoader::glProgramUniform2i64ARB
#define glProgramUniform3i64ARB GLFunctionLoader::glProgramUniform3i64ARB
#define glProgramUniform4i64ARB GLFunctionLoader::glProgramUniform4i64ARB
#define glProgramUniform1i64vARB GLFunctionLoader::glProgramUniform1i64vARB
#define glProgramUniform2i64vARB GLFunctionLoader::glProgramUniform2i64vARB
#define glProgramUniform3i64vARB GLFunctionLoader::glProgramUniform3i64vARB
#define glProgramUniform4i64vARB GLFunctionLoader::glProgramUniform4i64vARB
#define glProgramUniform1ui64ARB GLFunctionLoader::glProgramUniform1ui64ARB
#define glProgramUniform2ui64ARB GLFunctionLoader::glProgramUniform2ui64ARB
#define glProgramUniform3ui64ARB GLFunctionLoader::glProgramUniform3ui64ARB
#define glProgramUniform4ui64ARB GLFunctionLoader::glProgramUniform4ui64ARB
#define glProgramUniform1ui64vARB GLFunctionLoader::glProgramUniform1ui64vARB
#define glProgramUniform2ui64vARB GLFunctionLoader::glProgramUniform2ui64vARB
#define glProgramUniform3ui64vARB GLFunctionLoader::glProgramUniform3ui64vARB
#define glProgramUniform4ui64vARB GLFunctionLoader::glProgramUniform4ui64vARB
#define glMultiDrawArraysIndirectCountARB GLFunctionLoader::glMultiDrawArraysIndirectCountARB
#define glMultiDrawElementsIndirectCountARB GLFunctionLoader::glMultiDrawElementsIndirectCountARB
#define glVertexAttribDivisorARB GLFunctionLoader::glVertexAttribDivisorARB
#define glMaxShaderCompilerThreadsARB GLFunctionLoader::glMaxShaderCompilerThreadsARB
#define glGetGraphicsResetStatusARB GLFunctionLoader::glGetGraphicsResetStatusARB
#define glGetnTexImageARB GLFunctionLoader::glGetnTexImageARB
#define glReadnPixelsARB GLFunctionLoader::glReadnPixelsARB
#define glGetnCompressedTexImageARB GLFunctionLoader::glGetnCompressedTexImageARB
#define glGetnUniformfvARB GLFunctionLoader::glGetnUniformfvARB
#define glGetnUniformivARB GLFunctionLoader::glGetnUniformivARB
#define glGetnUniformuivARB GLFunctionLoader::glGetnUniformuivARB
#define glGetnUniformdvARB GLFunctionLoader::glGetnUniformdvARB
#define glFramebufferSampleLocationsfvARB GLFunctionLoader::glFramebufferSampleLocationsfvARB
#define glNamedFramebufferSampleLocationsfvARB GLFunctionLoader::glNamedFramebufferSampleLocationsfvARB
#define glEvaluateDepthValuesARB GLFunctionLoader::glEvaluateDepthValuesARB
#define glMinSampleShadingARB GLFunctionLoader::glMinSampleShadingARB
#define glNamedStringARB GLFunctionLoader::glNamedStringARB
#define glDeleteNamedStringARB GLFunctionLoader::glDeleteNamedStringARB
#define glCompileShaderIncludeARB GLFunctionLoader::glCompileShaderIncludeARB
#define glIsNamedStringARB GLFunctionLoader::glIsNamedStringARB
#define glGetNamedStringARB GLFunctionLoader::glGetNamedStringARB
#define glGetNamedStringivARB GLFunctionLoader::glGetNamedStringivARB
#define glBufferPageCommitmentARB GLFunctionLoader::glBufferPageCommitmentARB
#define glNamedBufferPageCommitmentEXT GLFunctionLoader::glNamedBufferPageCommitmentEXT
#define glNamedBufferPageCommitmentARB GLFunctionLoader::glNamedBufferPageCommitmentARB
#define glTexPageCommitmentARB GLFunctionLoader::glTexPageCommitmentARB
#define glTexBufferARB GLFunctionLoader::glTexBufferARB
#define glDepthRangeArraydvNV GLFunctionLoader::glDepthRangeArraydvNV
#define glDepthRangeIndexeddNV GLFunctionLoader::glDepthRangeIndexeddNV
#define glBlendBarrierKHR GLFunctionLoader::glBlendBarrierKHR
#define glMaxShaderCompilerThreadsKHR GLFunctionLoader::glMaxShaderCompilerThreadsKHR
#define glRenderbufferStorageMultisampleAdvancedAMD GLFunctionLoader::glRenderbufferStorageMultisampleAdvancedAMD
#define glNamedRenderbufferStorageMultisampleAdvancedAMD GLFunctionLoader::glNamedRenderbufferStorageMultisampleAdvancedAMD
#define glGetPerfMonitorGroupsAMD GLFunctionLoader::glGetPerfMonitorGroupsAMD
#define glGetPerfMonitorCountersAMD GLFunctionLoader::glGetPerfMonitorCountersAMD
#define glGetPerfMonitorGroupStringAMD GLFunctionLoader::glGetPerfMonitorGroupStringAMD
#define glGetPerfMonitorCounterStringAMD GLFunctionLoader::glGetPerfMonitorCounterStringAMD
#define glGetPerfMonitorCounterInfoAMD GLFunctionLoader::glGetPerfMonitorCounterInfoAMD
#define glGenPerfMonitorsAMD GLFunctionLoader::glGenPerfMonitorsAMD
#define glDeletePerfMonitorsAMD GLFunctionLoader::glDeletePerfMonitorsAMD
#define glSelectPerfMonitorCountersAMD GLFunctionLoader::glSelectPerfMonitorCountersAMD
#define glBeginPerfMonitorAMD GLFunctionLoader::glBeginPerfMonitorAMD
#define glEndPerfMonitorAMD GLFunctionLoader::glEndPerfMonitorAMD
#define glGetPerfMonitorCounterDataAMD GLFunctionLoader::glGetPerfMonitorCounterDataAMD
#define glEGLImageTargetTexStorageEXT GLFunctionLoader::glEGLImageTargetTexStorageEXT
#define glEGLImageTargetTextureStorageEXT GLFunctionLoader::glEGLImageTargetTextureStorageEXT
#define glLabelObjectEXT GLFunctionLoader::glLabelObjectEXT
#define glGetObjectLabelEXT GLFunctionLoader::glGetObjectLabelEXT
#define glInsertEventMarkerEXT GLFunctionLoader::glInsertEventMarkerEXT
#define glPushGroupMarkerEXT GLFunctionLoader::glPushGroupMarkerEXT
#define glPopGroupMarkerEXT GLFunctionLoader::glPopGroupMarkerEXT
#define glMatrixLoadfEXT GLFunctionLoader::glMatrixLoadfEXT
#define glMatrixLoaddEXT GLFunctionLoader::glMatrixLoaddEXT
#define glMatrixMultfEXT GLFunctionLoader::glMatrixMultfEXT
#define glMatrixMultdEXT GLFunctionLoader::glMatrixMultdEXT
#define glMatrixLoadIdentityEXT GLFunctionLoader::glMatrixLoadIdentityEXT
#define glMatrixRotatefEXT GLFunctionLoader::glMatrixRotatefEXT
#define glMatrixRotatedEXT GLFunctionLoader::glMatrixRotatedEXT
#define glMatrixScalefEXT GLFunctionLoader::glMatrixScalefEXT
#define glMatrixScaledEXT GLFunctionLoader::glMatrixScaledEXT
#define glMatrixTranslatefEXT GLFunctionLoader::glMatrixTranslatefEXT
#define glMatrixTranslatedEXT GLFunctionLoader::glMatrixTranslatedEXT
#define glMatrixFrustumEXT GLFunctionLoader::glMatrixFrustumEXT
#define glMatrixOrthoEXT GLFunctionLoader::glMatrixOrthoEXT
#define glMatrixPopEXT GLFunctionLoader::glMatrixPopEXT
#define glMatrixPushEXT GLFunctionLoader::glMatrixPushEXT
#define glClientAttribDefaultEXT GLFunctionLoader::glClientAttribDefaultEXT
#define glPushClientAttribDefaultEXT GLFunctionLoader::glPushClientAttribDefaultEXT
#define glTextureParameterfEXT GLFunctionLoader::glTextureParameterfEXT
#define glTextureParameterfvEXT GLFunctionLoader::glTextureParameterfvEXT
#define glTextureParameteriEXT GLFunctionLoader::glTextureParameteriEXT
#define glTextureParameterivEXT GLFunctionLoader::glTextureParameterivEXT
#define glTextureImage1DEXT GLFunctionLoader::glTextureImage1DEXT
#define glTextureImage2DEXT GLFunctionLoader::glTextureImage2DEXT
#define glTextureSubImage1DEXT GLFunctionLoader::glTextureSubImage1DEXT
#define glTextureSubImage2DEXT GLFunctionLoader::glTextureSubImage2DEXT
#define glCopyTextureImage1DEXT GLFunctionLoader::glCopyTextureImage1DEXT
#define glCopyTextureImage2DEXT GLFunctionLoader::glCopyTextureImage2DEXT
#define glCopyTextureSubImage1DEXT GLFunctionLoader::glCopyTextureSubImage1DEXT
#define glCopyTextureSubImage2DEXT GLFunctionLoader::glCopyTextureSubImage2DEXT
#define glGetTextureImageEXT GLFunctionLoader::glGetTextureImageEXT
#define glGetTextureParameterfvEXT GLFunctionLoader::glGetTextureParameterfvEXT
#define glGetTextureParameterivEXT GLFunctionLoader::glGetTextureParameterivEXT
#define glGetTextureLevelParameterfvEXT GLFunctionLoader::glGetTextureLevelParameterfvEXT
#define glGetTextureLevelParameterivEXT GLFunctionLoader::glGetTextureLevelParameterivEXT
#define glTextureImage3DEXT GLFunctionLoader::glTextureImage3DEXT
#define glTextureSubImage3DEXT GLFunctionLoader::glTextureSubImage3DEXT
#define glCopyTextureSubImage3DEXT GLFunctionLoader::glCopyTextureSubImage3DEXT
#define glBindMultiTextureEXT GLFunctionLoader::glBindMultiTextureEXT
#define glMultiTexCoordPointerEXT GLFunctionLoader::glMultiTexCoordPointerEXT
#define glMultiTexEnvfEXT GLFunctionLoader::glMultiTexEnvfEXT
#define glMultiTexEnvfvEXT GLFunctionLoader::glMultiTexEnvfvEXT
#define glMultiTexEnviEXT GLFunctionLoader::glMultiTexEnviEXT
#define glMultiTexEnvivEXT GLFunctionLoader::glMultiTexEnvivEXT
#define glMultiTexGendEXT GLFunctionLoader::glMultiTexGendEXT
#define glMultiTexGendvEXT GLFunctionLoader::glMultiTexGendvEXT
#define glMultiTexGenfEXT GLFunctionLoader::glMultiTexGenfEXT
#define glMultiTexGenfvEXT GLFunctionLoader::glMultiTexGenfvEXT
#define glMultiTexGeniEXT GLFunctionLoader::glMultiTexGeniEXT
#define glMultiTexGenivEXT GLFunctionLoader::glMultiTexGenivEXT
#define glGetMultiTexEnvfvEXT GLFunctionLoader::glGetMultiTexEnvfvEXT
#define glGetMultiTexEnvivEXT GLFunctionLoader::glGetMultiTexEnvivEXT
#define glGetMultiTexGendvEXT GLFunctionLoader::glGetMultiTexGendvEXT
#define glGetMultiTexGenfvEXT GLFunctionLoader::glGetMultiTexGenfvEXT
#define glGetMultiTexGenivEXT GLFunctionLoader::glGetMultiTexGenivEXT
#define glMultiTexParameteriEXT GLFunctionLoader::glMultiTexParameteriEXT
#define glMultiTexParameterivEXT GLFunctionLoader::glMultiTexParameterivEXT
#define glMultiTexParameterfEXT GLFunctionLoader::glMultiTexParameterfEXT
#define glMultiTexParameterfvEXT GLFunctionLoader::glMultiTexParameterfvEXT
#define glMultiTexImage1DEXT GLFunctionLoader::glMultiTexImage1DEXT
#define glMultiTexImage2DEXT GLFunctionLoader::glMultiTexImage2DEXT
#define glMultiTexSubImage1DEXT GLFunctionLoader::glMultiTexSubImage1DEXT
#define glMultiTexSubImage2DEXT GLFunctionLoader::glMultiTexSubImage2DEXT
#define glCopyMultiTexImage1DEXT GLFunctionLoader::glCopyMultiTexImage1DEXT
#define glCopyMultiTexImage2DEXT GLFunctionLoader::glCopyMultiTexImage2DEXT
#define glCopyMultiTexSubImage1DEXT GLFunctionLoader::glCopyMultiTexSubImage1DEXT
#define glCopyMultiTexSubImage2DEXT GLFunctionLoader::glCopyMultiTexSubImage2DEXT
#define glGetMultiTexImageEXT GLFunctionLoader::glGetMultiTexImageEXT
#define glGetMultiTexParameterfvEXT GLFunctionLoader::glGetMultiTexParameterfvEXT
#define glGetMultiTexParameterivEXT GLFunctionLoader::glGetMultiTexParameterivEXT
#define glGetMultiTexLevelParameterfvEXT GLFunctionLoader::glGetMultiTexLevelParameterfvEXT
#define glGetMultiTexLevelParameterivEXT GLFunctionLoader::glGetMultiTexLevelParameterivEXT
#define glMultiTexImage3DEXT GLFunctionLoader::glMultiTexImage3DEXT
#define glMultiTexSubImage3DEXT GLFunctionLoader::glMultiTexSubImage3DEXT
#define glCopyMultiTexSubImage3DEXT GLFunctionLoader::glCopyMultiTexSubImage3DEXT
#define glEnableClientStateIndexedEXT GLFunctionLoader::glEnableClientStateIndexedEXT
#define glDisableClientStateIndexedEXT GLFunctionLoader::glDisableClientStateIndexedEXT
#define glGetFloatIndexedvEXT GLFunctionLoader::glGetFloatIndexedvEXT
#define glGetDoubleIndexedvEXT GLFunctionLoader::glGetDoubleIndexedvEXT
#define glGetPointerIndexedvEXT GLFunctionLoader::glGetPointerIndexedvEXT
#define glEnableIndexedEXT GLFunctionLoader::glEnableIndexedEXT
#define glDisableIndexedEXT GLFunctionLoader::glDisableIndexedEXT
#define glIsEnabledIndexedEXT GLFunctionLoader::glIsEnabledIndexedEXT
#define glGetIntegerIndexedvEXT GLFunctionLoader::glGetIntegerIndexedvEXT
#define glGetBooleanIndexedvEXT GLFunctionLoader::glGetBooleanIndexedvEXT
#define glCompressedTextureImage3DEXT GLFunctionLoader::glCompressedTextureImage3DEXT
#define glCompressedTextureImage2DEXT GLFunctionLoader::glCompressedTextureImage2DEXT
#define glCompressedTextureImage1DEXT GLFunctionLoader::glCompressedTextureImage1DEXT
#define glCompressedTextureSubImage3DEXT GLFunctionLoader::glCompressedTextureSubImage3DEXT
#define glCompressedTextureSubImage2DEXT GLFunctionLoader::glCompressedTextureSubImage2DEXT
#define glCompressedTextureSubImage1DEXT GLFunctionLoader::glCompressedTextureSubImage1DEXT
#define glGetCompressedTextureImageEXT GLFunctionLoader::glGetCompressedTextureImageEXT
#define glCompressedMultiTexImage3DEXT GLFunctionLoader::glCompressedMultiTexImage3DEXT
#define glCompressedMultiTexImage2DEXT GLFunctionLoader::glCompressedMultiTexImage2DEXT
#define glCompressedMultiTexImage1DEXT GLFunctionLoader::glCompressedMultiTexImage1DEXT
#define glCompressedMultiTexSubImage3DEXT GLFunctionLoader::glCompressedMultiTexSubImage3DEXT
#define glCompressedMultiTexSubImage2DEXT GLFunctionLoader::glCompressedMultiTexSubImage2DEXT
#define glCompressedMultiTexSubImage1DEXT GLFunctionLoader::glCompressedMultiTexSubImage1DEXT
#define glGetCompressedMultiTexImageEXT GLFunctionLoader::glGetCompressedMultiTexImageEXT
#define glMatrixLoadTransposefEXT GLFunctionLoader::glMatrixLoadTransposefEXT
#define glMatrixLoadTransposedEXT GLFunctionLoader::glMatrixLoadTransposedEXT
#define glMatrixMultTransposefEXT GLFunctionLoader::glMatrixMultTransposefEXT
#define glMatrixMultTransposedEXT GLFunctionLoader::glMatrixMultTransposedEXT
#define glNamedBufferDataEXT GLFunctionLoader::glNamedBufferDataEXT
#define glNamedBufferSubDataEXT GLFunctionLoader::glNamedBufferSubDataEXT
#define glMapNamedBufferEXT GLFunctionLoader::glMapNamedBufferEXT
#define glUnmapNamedBufferEXT GLFunctionLoader::glUnmapNamedBufferEXT
#define glGetNamedBufferParameterivEXT GLFunctionLoader::glGetNamedBufferParameterivEXT
#define glGetNamedBufferPointervEXT GLFunctionLoader::glGetNamedBufferPointervEXT
#define glGetNamedBufferSubDataEXT GLFunctionLoader::glGetNamedBufferSubDataEXT
#define glProgramUniform1fEXT GLFunctionLoader::glProgramUniform1fEXT
#define glProgramUniform2fEXT GLFunctionLoader::glProgramUniform2fEXT
#define glProgramUniform3fEXT GLFunctionLoader::glProgramUniform3fEXT
#define glProgramUniform4fEXT GLFunctionLoader::glProgramUniform4fEXT
#define glProgramUniform1iEXT GLFunctionLoader::glProgramUniform1iEXT
#define glProgramUniform2iEXT GLFunctionLoader::glProgramUniform2iEXT
#define glProgramUniform3iEXT GLFunctionLoader::glProgramUniform3iEXT
#define glProgramUniform4iEXT GLFunctionLoader::glProgramUniform4iEXT
#define glProgramUniform1fvEXT GLFunctionLoader::glProgramUniform1fvEXT
#define glProgramUniform2fvEXT GLFunctionLoader::glProgramUniform2fvEXT
#define glProgramUniform3fvEXT GLFunctionLoader::glProgramUniform3fvEXT
#define glProgramUniform4fvEXT GLFunctionLoader::glProgramUniform4fvEXT
#define glProgramUniform1ivEXT GLFunctionLoader::glProgramUniform1ivEXT
#define glProgramUniform2ivEXT GLFunctionLoader::glProgramUniform2ivEXT
#define glProgramUniform3ivEXT GLFunctionLoader::glProgramUniform3ivEXT
#define glProgramUniform4ivEXT GLFunctionLoader::glProgramUniform4ivEXT
#define glProgramUniformMatrix2fvEXT GLFunctionLoader::glProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix3fvEXT GLFunctionLoader::glProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix4fvEXT GLFunctionLoader::glProgramUniformMatrix4fvEXT
#define glProgramUniformMatrix2x3fvEXT GLFunctionLoader::glProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix3x2fvEXT GLFunctionLoader::glProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix2x4fvEXT GLFunctionLoader::glProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix4x2fvEXT GLFunctionLoader::glProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix3x4fvEXT GLFunctionLoader::glProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4x3fvEXT GLFunctionLoader::glProgramUniformMatrix4x3fvEXT
#define glTextureBufferEXT GLFunctionLoader::glTextureBufferEXT
#define glMultiTexBufferEXT GLFunctionLoader::glMultiTexBufferEXT
#define glTextureParameterIivEXT GLFunctionLoader::glTextureParameterIivEXT
#define glTextureParameterIuivEXT GLFunctionLoader::glTextureParameterIuivEXT
#define glGetTextureParameterIivEXT GLFunctionLoader::glGetTextureParameterIivEXT
#define glGetTextureParameterIuivEXT GLFunctionLoader::glGetTextureParameterIuivEXT
#define glMultiTexParameterIivEXT GLFunctionLoader::glMultiTexParameterIivEXT
#define glMultiTexParameterIuivEXT GLFunctionLoader::glMultiTexParameterIuivEXT
#define glGetMultiTexParameterIivEXT GLFunctionLoader::glGetMultiTexParameterIivEXT
#define glGetMultiTexParameterIuivEXT GLFunctionLoader::glGetMultiTexParameterIuivEXT
#define glProgramUniform1uiEXT GLFunctionLoader::glProgramUniform1uiEXT
#define glProgramUniform2uiEXT GLFunctionLoader::glProgramUniform2uiEXT
#define glProgramUniform3uiEXT GLFunctionLoader::glProgramUniform3uiEXT
#define glProgramUniform4uiEXT GLFunctionLoader::glProgramUniform4uiEXT
#define glProgramUniform1uivEXT GLFunctionLoader::glProgramUniform1uivEXT
#define glProgramUniform2uivEXT GLFunctionLoader::glProgramUniform2uivEXT
#define glProgramUniform3uivEXT GLFunctionLoader::glProgramUniform3uivEXT
#define glProgramUniform4uivEXT GLFunctionLoader::glProgramUniform4uivEXT
#define glNamedProgramLocalParameters4fvEXT GLFunctionLoader::glNamedProgramLocalParameters4fvEXT
#define glNamedProgramLocalParameterI4iEXT GLFunctionLoader::glNamedProgramLocalParameterI4iEXT
#define glNamedProgramLocalParameterI4ivEXT GLFunctionLoader::glNamedProgramLocalParameterI4ivEXT
#define glNamedProgramLocalParametersI4ivEXT GLFunctionLoader::glNamedProgramLocalParametersI4ivEXT
#define glNamedProgramLocalParameterI4uiEXT GLFunctionLoader::glNamedProgramLocalParameterI4uiEXT
#define glNamedProgramLocalParameterI4uivEXT GLFunctionLoader::glNamedProgramLocalParameterI4uivEXT
#define glNamedProgramLocalParametersI4uivEXT GLFunctionLoader::glNamedProgramLocalParametersI4uivEXT
#define glGetNamedProgramLocalParameterIivEXT GLFunctionLoader::glGetNamedProgramLocalParameterIivEXT
#define glGetNamedProgramLocalParameterIuivEXT GLFunctionLoader::glGetNamedProgramLocalParameterIuivEXT
#define glEnableClientStateiEXT GLFunctionLoader::glEnableClientStateiEXT
#define glDisableClientStateiEXT GLFunctionLoader::glDisableClientStateiEXT
#define glGetFloati_vEXT GLFunctionLoader::glGetFloati_vEXT
#define glGetDoublei_vEXT GLFunctionLoader::glGetDoublei_vEXT
#define glGetPointeri_vEXT GLFunctionLoader::glGetPointeri_vEXT
#define glNamedProgramStringEXT GLFunctionLoader::glNamedProgramStringEXT
#define glNamedProgramLocalParameter4dEXT GLFunctionLoader::glNamedProgramLocalParameter4dEXT
#define glNamedProgramLocalParameter4dvEXT GLFunctionLoader::glNamedProgramLocalParameter4dvEXT
#define glNamedProgramLocalParameter4fEXT GLFunctionLoader::glNamedProgramLocalParameter4fEXT
#define glNamedProgramLocalParameter4fvEXT GLFunctionLoader::glNamedProgramLocalParameter4fvEXT
#define glGetNamedProgramLocalParameterdvEXT GLFunctionLoader::glGetNamedProgramLocalParameterdvEXT
#define glGetNamedProgramLocalParameterfvEXT GLFunctionLoader::glGetNamedProgramLocalParameterfvEXT
#define glGetNamedProgramivEXT GLFunctionLoader::glGetNamedProgramivEXT
#define glGetNamedProgramStringEXT GLFunctionLoader::glGetNamedProgramStringEXT
#define glNamedRenderbufferStorageEXT GLFunctionLoader::glNamedRenderbufferStorageEXT
#define glGetNamedRenderbufferParameterivEXT GLFunctionLoader::glGetNamedRenderbufferParameterivEXT
#define glNamedRenderbufferStorageMultisampleEXT GLFunctionLoader::glNamedRenderbufferStorageMultisampleEXT
#define glNamedRenderbufferStorageMultisampleCoverageEXT GLFunctionLoader::glNamedRenderbufferStorageMultisampleCoverageEXT
#define glCheckNamedFramebufferStatusEXT GLFunctionLoader::glCheckNamedFramebufferStatusEXT
#define glNamedFramebufferTexture1DEXT GLFunctionLoader::glNamedFramebufferTexture1DEXT
#define glNamedFramebufferTexture2DEXT GLFunctionLoader::glNamedFramebufferTexture2DEXT
#define glNamedFramebufferTexture3DEXT GLFunctionLoader::glNamedFramebufferTexture3DEXT
#define glNamedFramebufferRenderbufferEXT GLFunctionLoader::glNamedFramebufferRenderbufferEXT
#define glGetNamedFramebufferAttachmentParameterivEXT GLFunctionLoader::glGetNamedFramebufferAttachmentParameterivEXT
#define glGenerateTextureMipmapEXT GLFunctionLoader::glGenerateTextureMipmapEXT
#define glGenerateMultiTexMipmapEXT GLFunctionLoader::glGenerateMultiTexMipmapEXT
#define glFramebufferDrawBufferEXT GLFunctionLoader::glFramebufferDrawBufferEXT
#define glFramebufferDrawBuffersEXT GLFunctionLoader::glFramebufferDrawBuffersEXT
#define glFramebufferReadBufferEXT GLFunctionLoader::glFramebufferReadBufferEXT
#define glGetFramebufferParameterivEXT GLFunctionLoader::glGetFramebufferParameterivEXT
#define glNamedCopyBufferSubDataEXT GLFunctionLoader::glNamedCopyBufferSubDataEXT
#define glNamedFramebufferTextureEXT GLFunctionLoader::glNamedFramebufferTextureEXT
#define glNamedFramebufferTextureLayerEXT GLFunctionLoader::glNamedFramebufferTextureLayerEXT
#define glNamedFramebufferTextureFaceEXT GLFunctionLoader::glNamedFramebufferTextureFaceEXT
#define glTextureRenderbufferEXT GLFunctionLoader::glTextureRenderbufferEXT
#define glMultiTexRenderbufferEXT GLFunctionLoader::glMultiTexRenderbufferEXT
#define glVertexArrayVertexOffsetEXT GLFunctionLoader::glVertexArrayVertexOffsetEXT
#define glVertexArrayColorOffsetEXT GLFunctionLoader::glVertexArrayColorOffsetEXT
#define glVertexArrayEdgeFlagOffsetEXT GLFunctionLoader::glVertexArrayEdgeFlagOffsetEXT
#define glVertexArrayIndexOffsetEXT GLFunctionLoader::glVertexArrayIndexOffsetEXT
#define glVertexArrayNormalOffsetEXT GLFunctionLoader::glVertexArrayNormalOffsetEXT
#define glVertexArrayTexCoordOffsetEXT GLFunctionLoader::glVertexArrayTexCoordOffsetEXT
#define glVertexArrayMultiTexCoordOffsetEXT GLFunctionLoader::glVertexArrayMultiTexCoordOffsetEXT
#define glVertexArrayFogCoordOffsetEXT GLFunctionLoader::glVertexArrayFogCoordOffsetEXT
#define glVertexArraySecondaryColorOffsetEXT GLFunctionLoader::glVertexArraySecondaryColorOffsetEXT
#define glVertexArrayVertexAttribOffsetEXT GLFunctionLoader::glVertexArrayVertexAttribOffsetEXT
#define glVertexArrayVertexAttribIOffsetEXT GLFunctionLoader::glVertexArrayVertexAttribIOffsetEXT
#define glEnableVertexArrayEXT GLFunctionLoader::glEnableVertexArrayEXT
#define glDisableVertexArrayEXT GLFunctionLoader::glDisableVertexArrayEXT
#define glEnableVertexArrayAttribEXT GLFunctionLoader::glEnableVertexArrayAttribEXT
#define glDisableVertexArrayAttribEXT GLFunctionLoader::glDisableVertexArrayAttribEXT
#define glGetVertexArrayIntegervEXT GLFunctionLoader::glGetVertexArrayIntegervEXT
#define glGetVertexArrayPointervEXT GLFunctionLoader::glGetVertexArrayPointervEXT
#define glGetVertexArrayIntegeri_vEXT GLFunctionLoader::glGetVertexArrayIntegeri_vEXT
#define glGetVertexArrayPointeri_vEXT GLFunctionLoader::glGetVertexArrayPointeri_vEXT
#define glMapNamedBufferRangeEXT GLFunctionLoader::glMapNamedBufferRangeEXT
#define glFlushMappedNamedBufferRangeEXT GLFunctionLoader::glFlushMappedNamedBufferRangeEXT
#define glNamedBufferStorageEXT GLFunctionLoader::glNamedBufferStorageEXT
#define glClearNamedBufferDataEXT GLFunctionLoader::glClearNamedBufferDataEXT
#define glClearNamedBufferSubDataEXT GLFunctionLoader::glClearNamedBufferSubDataEXT
#define glNamedFramebufferParameteriEXT GLFunctionLoader::glNamedFramebufferParameteriEXT
#define glGetNamedFramebufferParameterivEXT GLFunctionLoader::glGetNamedFramebufferParameterivEXT
#define glProgramUniform1dEXT GLFunctionLoader::glProgramUniform1dEXT
#define glProgramUniform2dEXT GLFunctionLoader::glProgramUniform2dEXT
#define glProgramUniform3dEXT GLFunctionLoader::glProgramUniform3dEXT
#define glProgramUniform4dEXT GLFunctionLoader::glProgramUniform4dEXT
#define glProgramUniform1dvEXT GLFunctionLoader::glProgramUniform1dvEXT
#define glProgramUniform2dvEXT GLFunctionLoader::glProgramUniform2dvEXT
#define glProgramUniform3dvEXT GLFunctionLoader::glProgramUniform3dvEXT
#define glProgramUniform4dvEXT GLFunctionLoader::glProgramUniform4dvEXT
#define glProgramUniformMatrix2dvEXT GLFunctionLoader::glProgramUniformMatrix2dvEXT
#define glProgramUniformMatrix3dvEXT GLFunctionLoader::glProgramUniformMatrix3dvEXT
#define glProgramUniformMatrix4dvEXT GLFunctionLoader::glProgramUniformMatrix4dvEXT
#define glProgramUniformMatrix2x3dvEXT GLFunctionLoader::glProgramUniformMatrix2x3dvEXT
#define glProgramUniformMatrix2x4dvEXT GLFunctionLoader::glProgramUniformMatrix2x4dvEXT
#define glProgramUniformMatrix3x2dvEXT GLFunctionLoader::glProgramUniformMatrix3x2dvEXT
#define glProgramUniformMatrix3x4dvEXT GLFunctionLoader::glProgramUniformMatrix3x4dvEXT
#define glProgramUniformMatrix4x2dvEXT GLFunctionLoader::glProgramUniformMatrix4x2dvEXT
#define glProgramUniformMatrix4x3dvEXT GLFunctionLoader::glProgramUniformMatrix4x3dvEXT
#define glTextureBufferRangeEXT GLFunctionLoader::glTextureBufferRangeEXT
#define glTextureStorage1DEXT GLFunctionLoader::glTextureStorage1DEXT
#define glTextureStorage2DEXT GLFunctionLoader::glTextureStorage2DEXT
#define glTextureStorage3DEXT GLFunctionLoader::glTextureStorage3DEXT
#define glTextureStorage2DMultisampleEXT GLFunctionLoader::glTextureStorage2DMultisampleEXT
#define glTextureStorage3DMultisampleEXT GLFunctionLoader::glTextureStorage3DMultisampleEXT
#define glVertexArrayBindVertexBufferEXT GLFunctionLoader::glVertexArrayBindVertexBufferEXT
#define glVertexArrayVertexAttribFormatEXT GLFunctionLoader::glVertexArrayVertexAttribFormatEXT
#define glVertexArrayVertexAttribIFormatEXT GLFunctionLoader::glVertexArrayVertexAttribIFormatEXT
#define glVertexArrayVertexAttribLFormatEXT GLFunctionLoader::glVertexArrayVertexAttribLFormatEXT
#define glVertexArrayVertexAttribBindingEXT GLFunctionLoader::glVertexArrayVertexAttribBindingEXT
#define glVertexArrayVertexBindingDivisorEXT GLFunctionLoader::glVertexArrayVertexBindingDivisorEXT
#define glVertexArrayVertexAttribLOffsetEXT GLFunctionLoader::glVertexArrayVertexAttribLOffsetEXT
#define glTexturePageCommitmentEXT GLFunctionLoader::glTexturePageCommitmentEXT
#define glVertexArrayVertexAttribDivisorEXT GLFunctionLoader::glVertexArrayVertexAttribDivisorEXT
#define glDrawArraysInstancedEXT GLFunctionLoader::glDrawArraysInstancedEXT
#define glDrawElementsInstancedEXT GLFunctionLoader::glDrawElementsInstancedEXT
#define glPolygonOffsetClampEXT GLFunctionLoader::glPolygonOffsetClampEXT
#define glRasterSamplesEXT GLFunctionLoader::glRasterSamplesEXT
#define glUseShaderProgramEXT GLFunctionLoader::glUseShaderProgramEXT
#define glActiveProgramEXT GLFunctionLoader::glActiveProgramEXT
#define glCreateShaderProgramEXT GLFunctionLoader::glCreateShaderProgramEXT
#define glFramebufferFetchBarrierEXT GLFunctionLoader::glFramebufferFetchBarrierEXT
#define glTexStorage1DEXT GLFunctionLoader::glTexStorage1DEXT
#define glTexStorage2DEXT GLFunctionLoader::glTexStorage2DEXT
#define glTexStorage3DEXT GLFunctionLoader::glTexStorage3DEXT
#define glWindowRectanglesEXT GLFunctionLoader::glWindowRectanglesEXT
#define glApplyFramebufferAttachmentCMAAINTEL GLFunctionLoader::glApplyFramebufferAttachmentCMAAINTEL
#define glBeginPerfQueryINTEL GLFunctionLoader::glBeginPerfQueryINTEL
#define glCreatePerfQueryINTEL GLFunctionLoader::glCreatePerfQueryINTEL
#define glDeletePerfQueryINTEL GLFunctionLoader::glDeletePerfQueryINTEL
#define glEndPerfQueryINTEL GLFunctionLoader::glEndPerfQueryINTEL
#define glGetFirstPerfQueryIdINTEL GLFunctionLoader::glGetFirstPerfQueryIdINTEL
#define glGetNextPerfQueryIdINTEL GLFunctionLoader::glGetNextPerfQueryIdINTEL
#define glGetPerfCounterInfoINTEL GLFunctionLoader::glGetPerfCounterInfoINTEL
#define glGetPerfQueryDataINTEL GLFunctionLoader::glGetPerfQueryDataINTEL
#define glGetPerfQueryIdByNameINTEL GLFunctionLoader::glGetPerfQueryIdByNameINTEL
#define glGetPerfQueryInfoINTEL GLFunctionLoader::glGetPerfQueryInfoINTEL
#define glFramebufferParameteriMESA GLFunctionLoader::glFramebufferParameteriMESA
#define glGetFramebufferParameterivMESA GLFunctionLoader::glGetFramebufferParameterivMESA
#define glMultiDrawArraysIndirectBindlessNV GLFunctionLoader::glMultiDrawArraysIndirectBindlessNV
#define glMultiDrawElementsIndirectBindlessNV GLFunctionLoader::glMultiDrawElementsIndirectBindlessNV
#define glMultiDrawArraysIndirectBindlessCountNV GLFunctionLoader::glMultiDrawArraysIndirectBindlessCountNV
#define glMultiDrawElementsIndirectBindlessCountNV GLFunctionLoader::glMultiDrawElementsIndirectBindlessCountNV
#define glGetTextureHandleNV GLFunctionLoader::glGetTextureHandleNV
#define glGetTextureSamplerHandleNV GLFunctionLoader::glGetTextureSamplerHandleNV
#define glMakeTextureHandleResidentNV GLFunctionLoader::glMakeTextureHandleResidentNV
#define glMakeTextureHandleNonResidentNV GLFunctionLoader::glMakeTextureHandleNonResidentNV
#define glGetImageHandleNV GLFunctionLoader::glGetImageHandleNV
#define glMakeImageHandleResidentNV GLFunctionLoader::glMakeImageHandleResidentNV
#define glMakeImageHandleNonResidentNV GLFunctionLoader::glMakeImageHandleNonResidentNV
#define glUniformHandleui64NV GLFunctionLoader::glUniformHandleui64NV
#define glUniformHandleui64vNV GLFunctionLoader::glUniformHandleui64vNV
#define glProgramUniformHandleui64NV GLFunctionLoader::glProgramUniformHandleui64NV
#define glProgramUniformHandleui64vNV GLFunctionLoader::glProgramUniformHandleui64vNV
#define glIsTextureHandleResidentNV GLFunctionLoader::glIsTextureHandleResidentNV
#define glIsImageHandleResidentNV GLFunctionLoader::glIsImageHandleResidentNV
#define glBlendParameteriNV GLFunctionLoader::glBlendParameteriNV
#define glBlendBarrierNV GLFunctionLoader::glBlendBarrierNV
#define glViewportPositionWScaleNV GLFunctionLoader::glViewportPositionWScaleNV
#define glCreateStatesNV GLFunctionLoader::glCreateStatesNV
#define glDeleteStatesNV GLFunctionLoader::glDeleteStatesNV
#define glIsStateNV GLFunctionLoader::glIsStateNV
#define glStateCaptureNV GLFunctionLoader::glStateCaptureNV
#define glGetCommandHeaderNV GLFunctionLoader::glGetCommandHeaderNV
#define glGetStageIndexNV GLFunctionLoader::glGetStageIndexNV
#define glDrawCommandsNV GLFunctionLoader::glDrawCommandsNV
#define glDrawCommandsAddressNV GLFunctionLoader::glDrawCommandsAddressNV
#define glDrawCommandsStatesNV GLFunctionLoader::glDrawCommandsStatesNV
#define glDrawCommandsStatesAddressNV GLFunctionLoader::glDrawCommandsStatesAddressNV
#define glCreateCommandListsNV GLFunctionLoader::glCreateCommandListsNV
#define glDeleteCommandListsNV GLFunctionLoader::glDeleteCommandListsNV
#define glIsCommandListNV GLFunctionLoader::glIsCommandListNV
#define glListDrawCommandsStatesClientNV GLFunctionLoader::glListDrawCommandsStatesClientNV
#define glCommandListSegmentsNV GLFunctionLoader::glCommandListSegmentsNV
#define glCompileCommandListNV GLFunctionLoader::glCompileCommandListNV
#define glCallCommandListNV GLFunctionLoader::glCallCommandListNV
#define glBeginConditionalRenderNV GLFunctionLoader::glBeginConditionalRenderNV
#define glEndConditionalRenderNV GLFunctionLoader::glEndConditionalRenderNV
#define glSubpixelPrecisionBiasNV GLFunctionLoader::glSubpixelPrecisionBiasNV
#define glConservativeRasterParameterfNV GLFunctionLoader::glConservativeRasterParameterfNV
#define glConservativeRasterParameteriNV GLFunctionLoader::glConservativeRasterParameteriNV
#define glDepthRangedNV GLFunctionLoader::glDepthRangedNV
#define glClearDepthdNV GLFunctionLoader::glClearDepthdNV
#define glDepthBoundsdNV GLFunctionLoader::glDepthBoundsdNV
#define glDrawVkImageNV GLFunctionLoader::glDrawVkImageNV
#define glGetVkProcAddrNV GLFunctionLoader::glGetVkProcAddrNV
#define glWaitVkSemaphoreNV GLFunctionLoader::glWaitVkSemaphoreNV
#define glSignalVkSemaphoreNV GLFunctionLoader::glSignalVkSemaphoreNV
#define glSignalVkFenceNV GLFunctionLoader::glSignalVkFenceNV
#define glFragmentCoverageColorNV GLFunctionLoader::glFragmentCoverageColorNV
#define glCoverageModulationTableNV GLFunctionLoader::glCoverageModulationTableNV
#define glGetCoverageModulationTableNV GLFunctionLoader::glGetCoverageModulationTableNV
#define glCoverageModulationNV GLFunctionLoader::glCoverageModulationNV
#define glRenderbufferStorageMultisampleCoverageNV GLFunctionLoader::glRenderbufferStorageMultisampleCoverageNV
#define glUniform1i64NV GLFunctionLoader::glUniform1i64NV
#define glUniform2i64NV GLFunctionLoader::glUniform2i64NV
#define glUniform3i64NV GLFunctionLoader::glUniform3i64NV
#define glUniform4i64NV GLFunctionLoader::glUniform4i64NV
#define glUniform1i64vNV GLFunctionLoader::glUniform1i64vNV
#define glUniform2i64vNV GLFunctionLoader::glUniform2i64vNV
#define glUniform3i64vNV GLFunctionLoader::glUniform3i64vNV
#define glUniform4i64vNV GLFunctionLoader::glUniform4i64vNV
#define glUniform1ui64NV GLFunctionLoader::glUniform1ui64NV
#define glUniform2ui64NV GLFunctionLoader::glUniform2ui64NV
#define glUniform3ui64NV GLFunctionLoader::glUniform3ui64NV
#define glUniform4ui64NV GLFunctionLoader::glUniform4ui64NV
#define glUniform1ui64vNV GLFunctionLoader::glUniform1ui64vNV
#define glUniform2ui64vNV GLFunctionLoader::glUniform2ui64vNV
#define glUniform3ui64vNV GLFunctionLoader::glUniform3ui64vNV
#define glUniform4ui64vNV GLFunctionLoader::glUniform4ui64vNV
#define glGetUniformi64vNV GLFunctionLoader::glGetUniformi64vNV
#define glProgramUniform1i64NV GLFunctionLoader::glProgramUniform1i64NV
#define glProgramUniform2i64NV GLFunctionLoader::glProgramUniform2i64NV
#define glProgramUniform3i64NV GLFunctionLoader::glProgramUniform3i64NV
#define glProgramUniform4i64NV GLFunctionLoader::glProgramUniform4i64NV
#define glProgramUniform1i64vNV GLFunctionLoader::glProgramUniform1i64vNV
#define glProgramUniform2i64vNV GLFunctionLoader::glProgramUniform2i64vNV
#define glProgramUniform3i64vNV GLFunctionLoader::glProgramUniform3i64vNV
#define glProgramUniform4i64vNV GLFunctionLoader::glProgramUniform4i64vNV
#define glProgramUniform1ui64NV GLFunctionLoader::glProgramUniform1ui64NV
#define glProgramUniform2ui64NV GLFunctionLoader::glProgramUniform2ui64NV
#define glProgramUniform3ui64NV GLFunctionLoader::glProgramUniform3ui64NV
#define glProgramUniform4ui64NV GLFunctionLoader::glProgramUniform4ui64NV
#define glProgramUniform1ui64vNV GLFunctionLoader::glProgramUniform1ui64vNV
#define glProgramUniform2ui64vNV GLFunctionLoader::glProgramUniform2ui64vNV
#define glProgramUniform3ui64vNV GLFunctionLoader::glProgramUniform3ui64vNV
#define glProgramUniform4ui64vNV GLFunctionLoader::glProgramUniform4ui64vNV
#define glGetInternalformatSampleivNV GLFunctionLoader::glGetInternalformatSampleivNV
#define glGetMemoryObjectDetachedResourcesuivNV GLFunctionLoader::glGetMemoryObjectDetachedResourcesuivNV
#define glResetMemoryObjectParameterNV GLFunctionLoader::glResetMemoryObjectParameterNV
#define glTexAttachMemoryNV GLFunctionLoader::glTexAttachMemoryNV
#define glBufferAttachMemoryNV GLFunctionLoader::glBufferAttachMemoryNV
#define glTextureAttachMemoryNV GLFunctionLoader::glTextureAttachMemoryNV
#define glNamedBufferAttachMemoryNV GLFunctionLoader::glNamedBufferAttachMemoryNV
#define glBufferPageCommitmentMemNV GLFunctionLoader::glBufferPageCommitmentMemNV
#define glTexPageCommitmentMemNV GLFunctionLoader::glTexPageCommitmentMemNV
#define glNamedBufferPageCommitmentMemNV GLFunctionLoader::glNamedBufferPageCommitmentMemNV
#define glTexturePageCommitmentMemNV GLFunctionLoader::glTexturePageCommitmentMemNV
#define glDrawMeshTasksNV GLFunctionLoader::glDrawMeshTasksNV
#define glDrawMeshTasksIndirectNV GLFunctionLoader::glDrawMeshTasksIndirectNV
#define glMultiDrawMeshTasksIndirectNV GLFunctionLoader::glMultiDrawMeshTasksIndirectNV
#define glMultiDrawMeshTasksIndirectCountNV GLFunctionLoader::glMultiDrawMeshTasksIndirectCountNV
#define glGenPathsNV GLFunctionLoader::glGenPathsNV
#define glDeletePathsNV GLFunctionLoader::glDeletePathsNV
#define glIsPathNV GLFunctionLoader::glIsPathNV
#define glPathCommandsNV GLFunctionLoader::glPathCommandsNV
#define glPathCoordsNV GLFunctionLoader::glPathCoordsNV
#define glPathSubCommandsNV GLFunctionLoader::glPathSubCommandsNV
#define glPathSubCoordsNV GLFunctionLoader::glPathSubCoordsNV
#define glPathStringNV GLFunctionLoader::glPathStringNV
#define glPathGlyphsNV GLFunctionLoader::glPathGlyphsNV
#define glPathGlyphRangeNV GLFunctionLoader::glPathGlyphRangeNV
#define glWeightPathsNV GLFunctionLoader::glWeightPathsNV
#define glCopyPathNV GLFunctionLoader::glCopyPathNV
#define glInterpolatePathsNV GLFunctionLoader::glInterpolatePathsNV
#define glTransformPathNV GLFunctionLoader::glTransformPathNV
#define glPathParameterivNV GLFunctionLoader::glPathParameterivNV
#define glPathParameteriNV GLFunctionLoader::glPathParameteriNV
#define glPathParameterfvNV GLFunctionLoader::glPathParameterfvNV
#define glPathParameterfNV GLFunctionLoader::glPathParameterfNV
#define glPathDashArrayNV GLFunctionLoader::glPathDashArrayNV
#define glPathStencilFuncNV GLFunctionLoader::glPathStencilFuncNV
#define glPathStencilDepthOffsetNV GLFunctionLoader::glPathStencilDepthOffsetNV
#define glStencilFillPathNV GLFunctionLoader::glStencilFillPathNV
#define glStencilStrokePathNV GLFunctionLoader::glStencilStrokePathNV
#define glStencilFillPathInstancedNV GLFunctionLoader::glStencilFillPathInstancedNV
#define glStencilStrokePathInstancedNV GLFunctionLoader::glStencilStrokePathInstancedNV
#define glPathCoverDepthFuncNV GLFunctionLoader::glPathCoverDepthFuncNV
#define glCoverFillPathNV GLFunctionLoader::glCoverFillPathNV
#define glCoverStrokePathNV GLFunctionLoader::glCoverStrokePathNV
#define glCoverFillPathInstancedNV GLFunctionLoader::glCoverFillPathInstancedNV
#define glCoverStrokePathInstancedNV GLFunctionLoader::glCoverStrokePathInstancedNV
#define glGetPathParameterivNV GLFunctionLoader::glGetPathParameterivNV
#define glGetPathParameterfvNV GLFunctionLoader::glGetPathParameterfvNV
#define glGetPathCommandsNV GLFunctionLoader::glGetPathCommandsNV
#define glGetPathCoordsNV GLFunctionLoader::glGetPathCoordsNV
#define glGetPathDashArrayNV GLFunctionLoader::glGetPathDashArrayNV
#define glGetPathMetricsNV GLFunctionLoader::glGetPathMetricsNV
#define glGetPathMetricRangeNV GLFunctionLoader::glGetPathMetricRangeNV
#define glGetPathSpacingNV GLFunctionLoader::glGetPathSpacingNV
#define glIsPointInFillPathNV GLFunctionLoader::glIsPointInFillPathNV
#define glIsPointInStrokePathNV GLFunctionLoader::glIsPointInStrokePathNV
#define glGetPathLengthNV GLFunctionLoader::glGetPathLengthNV
#define glPointAlongPathNV GLFunctionLoader::glPointAlongPathNV
#define glMatrixLoad3x2fNV GLFunctionLoader::glMatrixLoad3x2fNV
#define glMatrixLoad3x3fNV GLFunctionLoader::glMatrixLoad3x3fNV
#define glMatrixLoadTranspose3x3fNV GLFunctionLoader::glMatrixLoadTranspose3x3fNV
#define glMatrixMult3x2fNV GLFunctionLoader::glMatrixMult3x2fNV
#define glMatrixMult3x3fNV GLFunctionLoader::glMatrixMult3x3fNV
#define glMatrixMultTranspose3x3fNV GLFunctionLoader::glMatrixMultTranspose3x3fNV
#define glStencilThenCoverFillPathNV GLFunctionLoader::glStencilThenCoverFillPathNV
#define glStencilThenCoverStrokePathNV GLFunctionLoader::glStencilThenCoverStrokePathNV
#define glStencilThenCoverFillPathInstancedNV GLFunctionLoader::glStencilThenCoverFillPathInstancedNV
#define glStencilThenCoverStrokePathInstancedNV GLFunctionLoader::glStencilThenCoverStrokePathInstancedNV
#define glPathGlyphIndexRangeNV GLFunctionLoader::glPathGlyphIndexRangeNV
#define glPathGlyphIndexArrayNV GLFunctionLoader::glPathGlyphIndexArrayNV
#define glPathMemoryGlyphIndexArrayNV GLFunctionLoader::glPathMemoryGlyphIndexArrayNV
#define glProgramPathFragmentInputGenNV GLFunctionLoader::glProgramPathFragmentInputGenNV
#define glGetProgramResourcefvNV GLFunctionLoader::glGetProgramResourcefvNV
#define glFramebufferSampleLocationsfvNV GLFunctionLoader::glFramebufferSampleLocationsfvNV
#define glNamedFramebufferSampleLocationsfvNV GLFunctionLoader::glNamedFramebufferSampleLocationsfvNV
#define glResolveDepthValuesNV GLFunctionLoader::glResolveDepthValuesNV
#define glScissorExclusiveNV GLFunctionLoader::glScissorExclusiveNV
#define glScissorExclusiveArrayvNV GLFunctionLoader::glScissorExclusiveArrayvNV
#define glMakeBufferResidentNV GLFunctionLoader::glMakeBufferResidentNV
#define glMakeBufferNonResidentNV GLFunctionLoader::glMakeBufferNonResidentNV
#define glIsBufferResidentNV GLFunctionLoader::glIsBufferResidentNV
#define glMakeNamedBufferResidentNV GLFunctionLoader::glMakeNamedBufferResidentNV
#define glMakeNamedBufferNonResidentNV GLFunctionLoader::glMakeNamedBufferNonResidentNV
#define glIsNamedBufferResidentNV GLFunctionLoader::glIsNamedBufferResidentNV
#define glGetBufferParameterui64vNV GLFunctionLoader::glGetBufferParameterui64vNV
#define glGetNamedBufferParameterui64vNV GLFunctionLoader::glGetNamedBufferParameterui64vNV
#define glGetIntegerui64vNV GLFunctionLoader::glGetIntegerui64vNV
#define glUniformui64NV GLFunctionLoader::glUniformui64NV
#define glUniformui64vNV GLFunctionLoader::glUniformui64vNV
#define glGetUniformui64vNV GLFunctionLoader::glGetUniformui64vNV
#define glProgramUniformui64NV GLFunctionLoader::glProgramUniformui64NV
#define glProgramUniformui64vNV GLFunctionLoader::glProgramUniformui64vNV
#define glBindShadingRateImageNV GLFunctionLoader::glBindShadingRateImageNV
#define glGetShadingRateImagePaletteNV GLFunctionLoader::glGetShadingRateImagePaletteNV
#define glGetShadingRateSampleLocationivNV GLFunctionLoader::glGetShadingRateSampleLocationivNV
#define glShadingRateImageBarrierNV GLFunctionLoader::glShadingRateImageBarrierNV
#define glShadingRateImagePaletteNV GLFunctionLoader::glShadingRateImagePaletteNV
#define glShadingRateSampleOrderNV GLFunctionLoader::glShadingRateSampleOrderNV
#define glShadingRateSampleOrderCustomNV GLFunctionLoader::glShadingRateSampleOrderCustomNV
#define glTextureBarrierNV GLFunctionLoader::glTextureBarrierNV
#define glVertexAttribL1i64NV GLFunctionLoader::glVertexAttribL1i64NV
#define glVertexAttribL2i64NV GLFunctionLoader::glVertexAttribL2i64NV
#define glVertexAttribL3i64NV GLFunctionLoader::glVertexAttribL3i64NV
#define glVertexAttribL4i64NV GLFunctionLoader::glVertexAttribL4i64NV
#define glVertexAttribL1i64vNV GLFunctionLoader::glVertexAttribL1i64vNV
#define glVertexAttribL2i64vNV GLFunctionLoader::glVertexAttribL2i64vNV
#define glVertexAttribL3i64vNV GLFunctionLoader::glVertexAttribL3i64vNV
#define glVertexAttribL4i64vNV GLFunctionLoader::glVertexAttribL4i64vNV
#define glVertexAttribL1ui64NV GLFunctionLoader::glVertexAttribL1ui64NV
#define glVertexAttribL2ui64NV GLFunctionLoader::glVertexAttribL2ui64NV
#define glVertexAttribL3ui64NV GLFunctionLoader::glVertexAttribL3ui64NV
#define glVertexAttribL4ui64NV GLFunctionLoader::glVertexAttribL4ui64NV
#define glVertexAttribL1ui64vNV GLFunctionLoader::glVertexAttribL1ui64vNV
#define glVertexAttribL2ui64vNV GLFunctionLoader::glVertexAttribL2ui64vNV
#define glVertexAttribL3ui64vNV GLFunctionLoader::glVertexAttribL3ui64vNV
#define glVertexAttribL4ui64vNV GLFunctionLoader::glVertexAttribL4ui64vNV
#define glGetVertexAttribLi64vNV GLFunctionLoader::glGetVertexAttribLi64vNV
#define glGetVertexAttribLui64vNV GLFunctionLoader::glGetVertexAttribLui64vNV
#define glVertexAttribLFormatNV GLFunctionLoader::glVertexAttribLFormatNV
#define glBufferAddressRangeNV GLFunctionLoader::glBufferAddressRangeNV
#define glVertexFormatNV GLFunctionLoader::glVertexFormatNV
#define glNormalFormatNV GLFunctionLoader::glNormalFormatNV
#define glColorFormatNV GLFunctionLoader::glColorFormatNV
#define glIndexFormatNV GLFunctionLoader::glIndexFormatNV
#define glTexCoordFormatNV GLFunctionLoader::glTexCoordFormatNV
#define glEdgeFlagFormatNV GLFunctionLoader::glEdgeFlagFormatNV
#define glSecondaryColorFormatNV GLFunctionLoader::glSecondaryColorFormatNV
#define glFogCoordFormatNV GLFunctionLoader::glFogCoordFormatNV
#define glVertexAttribFormatNV GLFunctionLoader::glVertexAttribFormatNV
#define glVertexAttribIFormatNV GLFunctionLoader::glVertexAttribIFormatNV
#define glGetIntegerui64i_vNV GLFunctionLoader::glGetIntegerui64i_vNV
#define glViewportSwizzleNV GLFunctionLoader::glViewportSwizzleNV
#define glFramebufferTextureMultiviewOVR GLFunctionLoader::glFramebufferTextureMultiviewOVR

static void * Load_Function(const char * name)
{
	void * result = nullptr;

	#if defined(_WIN32) or defined(_WIN64)
	result = (void*) wglGetProcAddress(name);
	if(result == nullptr)
	{
		HMODULE module = LoadLibraryA("opengl32.dll");
		if(module != nullptr)
			result = (void *) GetProcAddress(module, name);
	}
	#endif

	return result;
}

static unsigned long Initizalize()
{
	unsigned long count = 0;

	glCullFace = (PFNGLCULLFACEPROC) Load_Function("glCullFace"); 
	if(glCullFace != nullptr) count++;
	glFrontFace = (PFNGLFRONTFACEPROC) Load_Function("glFrontFace"); 
	if(glFrontFace != nullptr) count++;
	glHint = (PFNGLHINTPROC) Load_Function("glHint"); 
	if(glHint != nullptr) count++;
	glLineWidth = (PFNGLLINEWIDTHPROC) Load_Function("glLineWidth"); 
	if(glLineWidth != nullptr) count++;
	glPointSize = (PFNGLPOINTSIZEPROC) Load_Function("glPointSize"); 
	if(glPointSize != nullptr) count++;
	glPolygonMode = (PFNGLPOLYGONMODEPROC) Load_Function("glPolygonMode"); 
	if(glPolygonMode != nullptr) count++;
	glScissor = (PFNGLSCISSORPROC) Load_Function("glScissor"); 
	if(glScissor != nullptr) count++;
	glTexParameterf = (PFNGLTEXPARAMETERFPROC) Load_Function("glTexParameterf"); 
	if(glTexParameterf != nullptr) count++;
	glTexParameterfv = (PFNGLTEXPARAMETERFVPROC) Load_Function("glTexParameterfv"); 
	if(glTexParameterfv != nullptr) count++;
	glTexParameteri = (PFNGLTEXPARAMETERIPROC) Load_Function("glTexParameteri"); 
	if(glTexParameteri != nullptr) count++;
	glTexParameteriv = (PFNGLTEXPARAMETERIVPROC) Load_Function("glTexParameteriv"); 
	if(glTexParameteriv != nullptr) count++;
	glTexImage1D = (PFNGLTEXIMAGE1DPROC) Load_Function("glTexImage1D"); 
	if(glTexImage1D != nullptr) count++;
	glTexImage2D = (PFNGLTEXIMAGE2DPROC) Load_Function("glTexImage2D"); 
	if(glTexImage2D != nullptr) count++;
	glDrawBuffer = (PFNGLDRAWBUFFERPROC) Load_Function("glDrawBuffer"); 
	if(glDrawBuffer != nullptr) count++;
	glClear = (PFNGLCLEARPROC) Load_Function("glClear"); 
	if(glClear != nullptr) count++;
	glClearColor = (PFNGLCLEARCOLORPROC) Load_Function("glClearColor"); 
	if(glClearColor != nullptr) count++;
	glClearStencil = (PFNGLCLEARSTENCILPROC) Load_Function("glClearStencil"); 
	if(glClearStencil != nullptr) count++;
	glClearDepth = (PFNGLCLEARDEPTHPROC) Load_Function("glClearDepth"); 
	if(glClearDepth != nullptr) count++;
	glStencilMask = (PFNGLSTENCILMASKPROC) Load_Function("glStencilMask"); 
	if(glStencilMask != nullptr) count++;
	glColorMask = (PFNGLCOLORMASKPROC) Load_Function("glColorMask"); 
	if(glColorMask != nullptr) count++;
	glDepthMask = (PFNGLDEPTHMASKPROC) Load_Function("glDepthMask"); 
	if(glDepthMask != nullptr) count++;
	glDisable = (PFNGLDISABLEPROC) Load_Function("glDisable"); 
	if(glDisable != nullptr) count++;
	glEnable = (PFNGLENABLEPROC) Load_Function("glEnable"); 
	if(glEnable != nullptr) count++;
	glFinish = (PFNGLFINISHPROC) Load_Function("glFinish"); 
	if(glFinish != nullptr) count++;
	glFlush = (PFNGLFLUSHPROC) Load_Function("glFlush"); 
	if(glFlush != nullptr) count++;
	glBlendFunc = (PFNGLBLENDFUNCPROC) Load_Function("glBlendFunc"); 
	if(glBlendFunc != nullptr) count++;
	glLogicOp = (PFNGLLOGICOPPROC) Load_Function("glLogicOp"); 
	if(glLogicOp != nullptr) count++;
	glStencilFunc = (PFNGLSTENCILFUNCPROC) Load_Function("glStencilFunc"); 
	if(glStencilFunc != nullptr) count++;
	glStencilOp = (PFNGLSTENCILOPPROC) Load_Function("glStencilOp"); 
	if(glStencilOp != nullptr) count++;
	glDepthFunc = (PFNGLDEPTHFUNCPROC) Load_Function("glDepthFunc"); 
	if(glDepthFunc != nullptr) count++;
	glPixelStoref = (PFNGLPIXELSTOREFPROC) Load_Function("glPixelStoref"); 
	if(glPixelStoref != nullptr) count++;
	glPixelStorei = (PFNGLPIXELSTOREIPROC) Load_Function("glPixelStorei"); 
	if(glPixelStorei != nullptr) count++;
	glReadBuffer = (PFNGLREADBUFFERPROC) Load_Function("glReadBuffer"); 
	if(glReadBuffer != nullptr) count++;
	glReadPixels = (PFNGLREADPIXELSPROC) Load_Function("glReadPixels"); 
	if(glReadPixels != nullptr) count++;
	glGetBooleanv = (PFNGLGETBOOLEANVPROC) Load_Function("glGetBooleanv"); 
	if(glGetBooleanv != nullptr) count++;
	glGetDoublev = (PFNGLGETDOUBLEVPROC) Load_Function("glGetDoublev"); 
	if(glGetDoublev != nullptr) count++;
	glGetError = (PFNGLGETERRORPROC) Load_Function("glGetError"); 
	if(glGetError != nullptr) count++;
	glGetFloatv = (PFNGLGETFLOATVPROC) Load_Function("glGetFloatv"); 
	if(glGetFloatv != nullptr) count++;
	glGetIntegerv = (PFNGLGETINTEGERVPROC) Load_Function("glGetIntegerv"); 
	if(glGetIntegerv != nullptr) count++;
	glGetString = (PFNGLGETSTRINGPROC) Load_Function("glGetString"); 
	if(glGetString != nullptr) count++;
	glGetTexImage = (PFNGLGETTEXIMAGEPROC) Load_Function("glGetTexImage"); 
	if(glGetTexImage != nullptr) count++;
	glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) Load_Function("glGetTexParameterfv"); 
	if(glGetTexParameterfv != nullptr) count++;
	glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) Load_Function("glGetTexParameteriv"); 
	if(glGetTexParameteriv != nullptr) count++;
	glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC) Load_Function("glGetTexLevelParameterfv"); 
	if(glGetTexLevelParameterfv != nullptr) count++;
	glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC) Load_Function("glGetTexLevelParameteriv"); 
	if(glGetTexLevelParameteriv != nullptr) count++;
	glIsEnabled = (PFNGLISENABLEDPROC) Load_Function("glIsEnabled"); 
	if(glIsEnabled != nullptr) count++;
	glDepthRange = (PFNGLDEPTHRANGEPROC) Load_Function("glDepthRange"); 
	if(glDepthRange != nullptr) count++;
	glViewport = (PFNGLVIEWPORTPROC) Load_Function("glViewport"); 
	if(glViewport != nullptr) count++;
	glDrawArrays = (PFNGLDRAWARRAYSPROC) Load_Function("glDrawArrays"); 
	if(glDrawArrays != nullptr) count++;
	glDrawElements = (PFNGLDRAWELEMENTSPROC) Load_Function("glDrawElements"); 
	if(glDrawElements != nullptr) count++;
	glGetPointerv = (PFNGLGETPOINTERVPROC) Load_Function("glGetPointerv"); 
	if(glGetPointerv != nullptr) count++;
	glPolygonOffset = (PFNGLPOLYGONOFFSETPROC) Load_Function("glPolygonOffset"); 
	if(glPolygonOffset != nullptr) count++;
	glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC) Load_Function("glCopyTexImage1D"); 
	if(glCopyTexImage1D != nullptr) count++;
	glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) Load_Function("glCopyTexImage2D"); 
	if(glCopyTexImage2D != nullptr) count++;
	glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC) Load_Function("glCopyTexSubImage1D"); 
	if(glCopyTexSubImage1D != nullptr) count++;
	glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) Load_Function("glCopyTexSubImage2D"); 
	if(glCopyTexSubImage2D != nullptr) count++;
	glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC) Load_Function("glTexSubImage1D"); 
	if(glTexSubImage1D != nullptr) count++;
	glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) Load_Function("glTexSubImage2D"); 
	if(glTexSubImage2D != nullptr) count++;
	glBindTexture = (PFNGLBINDTEXTUREPROC) Load_Function("glBindTexture"); 
	if(glBindTexture != nullptr) count++;
	glDeleteTextures = (PFNGLDELETETEXTURESPROC) Load_Function("glDeleteTextures"); 
	if(glDeleteTextures != nullptr) count++;
	glGenTextures = (PFNGLGENTEXTURESPROC) Load_Function("glGenTextures"); 
	if(glGenTextures != nullptr) count++;
	glIsTexture = (PFNGLISTEXTUREPROC) Load_Function("glIsTexture"); 
	if(glIsTexture != nullptr) count++;
	glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) Load_Function("glDrawRangeElements"); 
	if(glDrawRangeElements != nullptr) count++;
	glTexImage3D = (PFNGLTEXIMAGE3DPROC) Load_Function("glTexImage3D"); 
	if(glTexImage3D != nullptr) count++;
	glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) Load_Function("glTexSubImage3D"); 
	if(glTexSubImage3D != nullptr) count++;
	glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) Load_Function("glCopyTexSubImage3D"); 
	if(glCopyTexSubImage3D != nullptr) count++;
	glActiveTexture = (PFNGLACTIVETEXTUREPROC) Load_Function("glActiveTexture"); 
	if(glActiveTexture != nullptr) count++;
	glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) Load_Function("glSampleCoverage"); 
	if(glSampleCoverage != nullptr) count++;
	glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) Load_Function("glCompressedTexImage3D"); 
	if(glCompressedTexImage3D != nullptr) count++;
	glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) Load_Function("glCompressedTexImage2D"); 
	if(glCompressedTexImage2D != nullptr) count++;
	glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) Load_Function("glCompressedTexImage1D"); 
	if(glCompressedTexImage1D != nullptr) count++;
	glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) Load_Function("glCompressedTexSubImage3D"); 
	if(glCompressedTexSubImage3D != nullptr) count++;
	glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) Load_Function("glCompressedTexSubImage2D"); 
	if(glCompressedTexSubImage2D != nullptr) count++;
	glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) Load_Function("glCompressedTexSubImage1D"); 
	if(glCompressedTexSubImage1D != nullptr) count++;
	glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) Load_Function("glGetCompressedTexImage"); 
	if(glGetCompressedTexImage != nullptr) count++;
	glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) Load_Function("glBlendFuncSeparate"); 
	if(glBlendFuncSeparate != nullptr) count++;
	glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC) Load_Function("glMultiDrawArrays"); 
	if(glMultiDrawArrays != nullptr) count++;
	glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC) Load_Function("glMultiDrawElements"); 
	if(glMultiDrawElements != nullptr) count++;
	glPointParameterf = (PFNGLPOINTPARAMETERFPROC) Load_Function("glPointParameterf"); 
	if(glPointParameterf != nullptr) count++;
	glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC) Load_Function("glPointParameterfv"); 
	if(glPointParameterfv != nullptr) count++;
	glPointParameteri = (PFNGLPOINTPARAMETERIPROC) Load_Function("glPointParameteri"); 
	if(glPointParameteri != nullptr) count++;
	glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC) Load_Function("glPointParameteriv"); 
	if(glPointParameteriv != nullptr) count++;
	glBlendColor = (PFNGLBLENDCOLORPROC) Load_Function("glBlendColor"); 
	if(glBlendColor != nullptr) count++;
	glBlendEquation = (PFNGLBLENDEQUATIONPROC) Load_Function("glBlendEquation"); 
	if(glBlendEquation != nullptr) count++;
	glGenQueries = (PFNGLGENQUERIESPROC) Load_Function("glGenQueries"); 
	if(glGenQueries != nullptr) count++;
	glDeleteQueries = (PFNGLDELETEQUERIESPROC) Load_Function("glDeleteQueries"); 
	if(glDeleteQueries != nullptr) count++;
	glIsQuery = (PFNGLISQUERYPROC) Load_Function("glIsQuery"); 
	if(glIsQuery != nullptr) count++;
	glBeginQuery = (PFNGLBEGINQUERYPROC) Load_Function("glBeginQuery"); 
	if(glBeginQuery != nullptr) count++;
	glEndQuery = (PFNGLENDQUERYPROC) Load_Function("glEndQuery"); 
	if(glEndQuery != nullptr) count++;
	glGetQueryiv = (PFNGLGETQUERYIVPROC) Load_Function("glGetQueryiv"); 
	if(glGetQueryiv != nullptr) count++;
	glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC) Load_Function("glGetQueryObjectiv"); 
	if(glGetQueryObjectiv != nullptr) count++;
	glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) Load_Function("glGetQueryObjectuiv"); 
	if(glGetQueryObjectuiv != nullptr) count++;
	glBindBuffer = (PFNGLBINDBUFFERPROC) Load_Function("glBindBuffer"); 
	if(glBindBuffer != nullptr) count++;
	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) Load_Function("glDeleteBuffers"); 
	if(glDeleteBuffers != nullptr) count++;
	glGenBuffers = (PFNGLGENBUFFERSPROC) Load_Function("glGenBuffers"); 
	if(glGenBuffers != nullptr) count++;
	glIsBuffer = (PFNGLISBUFFERPROC) Load_Function("glIsBuffer"); 
	if(glIsBuffer != nullptr) count++;
	glBufferData = (PFNGLBUFFERDATAPROC) Load_Function("glBufferData"); 
	if(glBufferData != nullptr) count++;
	glBufferSubData = (PFNGLBUFFERSUBDATAPROC) Load_Function("glBufferSubData"); 
	if(glBufferSubData != nullptr) count++;
	glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC) Load_Function("glGetBufferSubData"); 
	if(glGetBufferSubData != nullptr) count++;
	glMapBuffer = (PFNGLMAPBUFFERPROC) Load_Function("glMapBuffer"); 
	if(glMapBuffer != nullptr) count++;
	glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) Load_Function("glUnmapBuffer"); 
	if(glUnmapBuffer != nullptr) count++;
	glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) Load_Function("glGetBufferParameteriv"); 
	if(glGetBufferParameteriv != nullptr) count++;
	glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) Load_Function("glGetBufferPointerv"); 
	if(glGetBufferPointerv != nullptr) count++;
	glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) Load_Function("glBlendEquationSeparate"); 
	if(glBlendEquationSeparate != nullptr) count++;
	glDrawBuffers = (PFNGLDRAWBUFFERSPROC) Load_Function("glDrawBuffers"); 
	if(glDrawBuffers != nullptr) count++;
	glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) Load_Function("glStencilOpSeparate"); 
	if(glStencilOpSeparate != nullptr) count++;
	glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) Load_Function("glStencilFuncSeparate"); 
	if(glStencilFuncSeparate != nullptr) count++;
	glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) Load_Function("glStencilMaskSeparate"); 
	if(glStencilMaskSeparate != nullptr) count++;
	glAttachShader = (PFNGLATTACHSHADERPROC) Load_Function("glAttachShader"); 
	if(glAttachShader != nullptr) count++;
	glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) Load_Function("glBindAttribLocation"); 
	if(glBindAttribLocation != nullptr) count++;
	glCompileShader = (PFNGLCOMPILESHADERPROC) Load_Function("glCompileShader"); 
	if(glCompileShader != nullptr) count++;
	glCreateProgram = (PFNGLCREATEPROGRAMPROC) Load_Function("glCreateProgram"); 
	if(glCreateProgram != nullptr) count++;
	glCreateShader = (PFNGLCREATESHADERPROC) Load_Function("glCreateShader"); 
	if(glCreateShader != nullptr) count++;
	glDeleteProgram = (PFNGLDELETEPROGRAMPROC) Load_Function("glDeleteProgram"); 
	if(glDeleteProgram != nullptr) count++;
	glDeleteShader = (PFNGLDELETESHADERPROC) Load_Function("glDeleteShader"); 
	if(glDeleteShader != nullptr) count++;
	glDetachShader = (PFNGLDETACHSHADERPROC) Load_Function("glDetachShader"); 
	if(glDetachShader != nullptr) count++;
	glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) Load_Function("glDisableVertexAttribArray"); 
	if(glDisableVertexAttribArray != nullptr) count++;
	glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) Load_Function("glEnableVertexAttribArray"); 
	if(glEnableVertexAttribArray != nullptr) count++;
	glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) Load_Function("glGetActiveAttrib"); 
	if(glGetActiveAttrib != nullptr) count++;
	glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) Load_Function("glGetActiveUniform"); 
	if(glGetActiveUniform != nullptr) count++;
	glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) Load_Function("glGetAttachedShaders"); 
	if(glGetAttachedShaders != nullptr) count++;
	glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) Load_Function("glGetAttribLocation"); 
	if(glGetAttribLocation != nullptr) count++;
	glGetProgramiv = (PFNGLGETPROGRAMIVPROC) Load_Function("glGetProgramiv"); 
	if(glGetProgramiv != nullptr) count++;
	glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) Load_Function("glGetProgramInfoLog"); 
	if(glGetProgramInfoLog != nullptr) count++;
	glGetShaderiv = (PFNGLGETSHADERIVPROC) Load_Function("glGetShaderiv"); 
	if(glGetShaderiv != nullptr) count++;
	glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) Load_Function("glGetShaderInfoLog"); 
	if(glGetShaderInfoLog != nullptr) count++;
	glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) Load_Function("glGetShaderSource"); 
	if(glGetShaderSource != nullptr) count++;
	glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) Load_Function("glGetUniformLocation"); 
	if(glGetUniformLocation != nullptr) count++;
	glGetUniformfv = (PFNGLGETUNIFORMFVPROC) Load_Function("glGetUniformfv"); 
	if(glGetUniformfv != nullptr) count++;
	glGetUniformiv = (PFNGLGETUNIFORMIVPROC) Load_Function("glGetUniformiv"); 
	if(glGetUniformiv != nullptr) count++;
	glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC) Load_Function("glGetVertexAttribdv"); 
	if(glGetVertexAttribdv != nullptr) count++;
	glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) Load_Function("glGetVertexAttribfv"); 
	if(glGetVertexAttribfv != nullptr) count++;
	glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) Load_Function("glGetVertexAttribiv"); 
	if(glGetVertexAttribiv != nullptr) count++;
	glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) Load_Function("glGetVertexAttribPointerv"); 
	if(glGetVertexAttribPointerv != nullptr) count++;
	glIsProgram = (PFNGLISPROGRAMPROC) Load_Function("glIsProgram"); 
	if(glIsProgram != nullptr) count++;
	glIsShader = (PFNGLISSHADERPROC) Load_Function("glIsShader"); 
	if(glIsShader != nullptr) count++;
	glLinkProgram = (PFNGLLINKPROGRAMPROC) Load_Function("glLinkProgram"); 
	if(glLinkProgram != nullptr) count++;
	glShaderSource = (PFNGLSHADERSOURCEPROC) Load_Function("glShaderSource"); 
	if(glShaderSource != nullptr) count++;
	glUseProgram = (PFNGLUSEPROGRAMPROC) Load_Function("glUseProgram"); 
	if(glUseProgram != nullptr) count++;
	glUniform1f = (PFNGLUNIFORM1FPROC) Load_Function("glUniform1f"); 
	if(glUniform1f != nullptr) count++;
	glUniform2f = (PFNGLUNIFORM2FPROC) Load_Function("glUniform2f"); 
	if(glUniform2f != nullptr) count++;
	glUniform3f = (PFNGLUNIFORM3FPROC) Load_Function("glUniform3f"); 
	if(glUniform3f != nullptr) count++;
	glUniform4f = (PFNGLUNIFORM4FPROC) Load_Function("glUniform4f"); 
	if(glUniform4f != nullptr) count++;
	glUniform1i = (PFNGLUNIFORM1IPROC) Load_Function("glUniform1i"); 
	if(glUniform1i != nullptr) count++;
	glUniform2i = (PFNGLUNIFORM2IPROC) Load_Function("glUniform2i"); 
	if(glUniform2i != nullptr) count++;
	glUniform3i = (PFNGLUNIFORM3IPROC) Load_Function("glUniform3i"); 
	if(glUniform3i != nullptr) count++;
	glUniform4i = (PFNGLUNIFORM4IPROC) Load_Function("glUniform4i"); 
	if(glUniform4i != nullptr) count++;
	glUniform1fv = (PFNGLUNIFORM1FVPROC) Load_Function("glUniform1fv"); 
	if(glUniform1fv != nullptr) count++;
	glUniform2fv = (PFNGLUNIFORM2FVPROC) Load_Function("glUniform2fv"); 
	if(glUniform2fv != nullptr) count++;
	glUniform3fv = (PFNGLUNIFORM3FVPROC) Load_Function("glUniform3fv"); 
	if(glUniform3fv != nullptr) count++;
	glUniform4fv = (PFNGLUNIFORM4FVPROC) Load_Function("glUniform4fv"); 
	if(glUniform4fv != nullptr) count++;
	glUniform1iv = (PFNGLUNIFORM1IVPROC) Load_Function("glUniform1iv"); 
	if(glUniform1iv != nullptr) count++;
	glUniform2iv = (PFNGLUNIFORM2IVPROC) Load_Function("glUniform2iv"); 
	if(glUniform2iv != nullptr) count++;
	glUniform3iv = (PFNGLUNIFORM3IVPROC) Load_Function("glUniform3iv"); 
	if(glUniform3iv != nullptr) count++;
	glUniform4iv = (PFNGLUNIFORM4IVPROC) Load_Function("glUniform4iv"); 
	if(glUniform4iv != nullptr) count++;
	glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) Load_Function("glUniformMatrix2fv"); 
	if(glUniformMatrix2fv != nullptr) count++;
	glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) Load_Function("glUniformMatrix3fv"); 
	if(glUniformMatrix3fv != nullptr) count++;
	glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) Load_Function("glUniformMatrix4fv"); 
	if(glUniformMatrix4fv != nullptr) count++;
	glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) Load_Function("glValidateProgram"); 
	if(glValidateProgram != nullptr) count++;
	glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC) Load_Function("glVertexAttrib1d"); 
	if(glVertexAttrib1d != nullptr) count++;
	glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC) Load_Function("glVertexAttrib1dv"); 
	if(glVertexAttrib1dv != nullptr) count++;
	glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) Load_Function("glVertexAttrib1f"); 
	if(glVertexAttrib1f != nullptr) count++;
	glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) Load_Function("glVertexAttrib1fv"); 
	if(glVertexAttrib1fv != nullptr) count++;
	glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC) Load_Function("glVertexAttrib1s"); 
	if(glVertexAttrib1s != nullptr) count++;
	glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC) Load_Function("glVertexAttrib1sv"); 
	if(glVertexAttrib1sv != nullptr) count++;
	glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC) Load_Function("glVertexAttrib2d"); 
	if(glVertexAttrib2d != nullptr) count++;
	glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC) Load_Function("glVertexAttrib2dv"); 
	if(glVertexAttrib2dv != nullptr) count++;
	glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) Load_Function("glVertexAttrib2f"); 
	if(glVertexAttrib2f != nullptr) count++;
	glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) Load_Function("glVertexAttrib2fv"); 
	if(glVertexAttrib2fv != nullptr) count++;
	glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC) Load_Function("glVertexAttrib2s"); 
	if(glVertexAttrib2s != nullptr) count++;
	glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC) Load_Function("glVertexAttrib2sv"); 
	if(glVertexAttrib2sv != nullptr) count++;
	glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC) Load_Function("glVertexAttrib3d"); 
	if(glVertexAttrib3d != nullptr) count++;
	glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC) Load_Function("glVertexAttrib3dv"); 
	if(glVertexAttrib3dv != nullptr) count++;
	glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) Load_Function("glVertexAttrib3f"); 
	if(glVertexAttrib3f != nullptr) count++;
	glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) Load_Function("glVertexAttrib3fv"); 
	if(glVertexAttrib3fv != nullptr) count++;
	glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC) Load_Function("glVertexAttrib3s"); 
	if(glVertexAttrib3s != nullptr) count++;
	glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC) Load_Function("glVertexAttrib3sv"); 
	if(glVertexAttrib3sv != nullptr) count++;
	glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC) Load_Function("glVertexAttrib4Nbv"); 
	if(glVertexAttrib4Nbv != nullptr) count++;
	glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC) Load_Function("glVertexAttrib4Niv"); 
	if(glVertexAttrib4Niv != nullptr) count++;
	glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC) Load_Function("glVertexAttrib4Nsv"); 
	if(glVertexAttrib4Nsv != nullptr) count++;
	glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC) Load_Function("glVertexAttrib4Nub"); 
	if(glVertexAttrib4Nub != nullptr) count++;
	glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC) Load_Function("glVertexAttrib4Nubv"); 
	if(glVertexAttrib4Nubv != nullptr) count++;
	glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC) Load_Function("glVertexAttrib4Nuiv"); 
	if(glVertexAttrib4Nuiv != nullptr) count++;
	glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC) Load_Function("glVertexAttrib4Nusv"); 
	if(glVertexAttrib4Nusv != nullptr) count++;
	glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC) Load_Function("glVertexAttrib4bv"); 
	if(glVertexAttrib4bv != nullptr) count++;
	glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC) Load_Function("glVertexAttrib4d"); 
	if(glVertexAttrib4d != nullptr) count++;
	glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC) Load_Function("glVertexAttrib4dv"); 
	if(glVertexAttrib4dv != nullptr) count++;
	glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) Load_Function("glVertexAttrib4f"); 
	if(glVertexAttrib4f != nullptr) count++;
	glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) Load_Function("glVertexAttrib4fv"); 
	if(glVertexAttrib4fv != nullptr) count++;
	glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC) Load_Function("glVertexAttrib4iv"); 
	if(glVertexAttrib4iv != nullptr) count++;
	glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC) Load_Function("glVertexAttrib4s"); 
	if(glVertexAttrib4s != nullptr) count++;
	glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC) Load_Function("glVertexAttrib4sv"); 
	if(glVertexAttrib4sv != nullptr) count++;
	glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC) Load_Function("glVertexAttrib4ubv"); 
	if(glVertexAttrib4ubv != nullptr) count++;
	glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC) Load_Function("glVertexAttrib4uiv"); 
	if(glVertexAttrib4uiv != nullptr) count++;
	glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC) Load_Function("glVertexAttrib4usv"); 
	if(glVertexAttrib4usv != nullptr) count++;
	glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) Load_Function("glVertexAttribPointer"); 
	if(glVertexAttribPointer != nullptr) count++;
	glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) Load_Function("glUniformMatrix2x3fv"); 
	if(glUniformMatrix2x3fv != nullptr) count++;
	glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) Load_Function("glUniformMatrix3x2fv"); 
	if(glUniformMatrix3x2fv != nullptr) count++;
	glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) Load_Function("glUniformMatrix2x4fv"); 
	if(glUniformMatrix2x4fv != nullptr) count++;
	glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) Load_Function("glUniformMatrix4x2fv"); 
	if(glUniformMatrix4x2fv != nullptr) count++;
	glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) Load_Function("glUniformMatrix3x4fv"); 
	if(glUniformMatrix3x4fv != nullptr) count++;
	glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) Load_Function("glUniformMatrix4x3fv"); 
	if(glUniformMatrix4x3fv != nullptr) count++;
	glColorMaski = (PFNGLCOLORMASKIPROC) Load_Function("glColorMaski"); 
	if(glColorMaski != nullptr) count++;
	glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC) Load_Function("glGetBooleani_v"); 
	if(glGetBooleani_v != nullptr) count++;
	glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) Load_Function("glGetIntegeri_v"); 
	if(glGetIntegeri_v != nullptr) count++;
	glEnablei = (PFNGLENABLEIPROC) Load_Function("glEnablei"); 
	if(glEnablei != nullptr) count++;
	glDisablei = (PFNGLDISABLEIPROC) Load_Function("glDisablei"); 
	if(glDisablei != nullptr) count++;
	glIsEnabledi = (PFNGLISENABLEDIPROC) Load_Function("glIsEnabledi"); 
	if(glIsEnabledi != nullptr) count++;
	glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) Load_Function("glBeginTransformFeedback"); 
	if(glBeginTransformFeedback != nullptr) count++;
	glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) Load_Function("glEndTransformFeedback"); 
	if(glEndTransformFeedback != nullptr) count++;
	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) Load_Function("glBindBufferRange"); 
	if(glBindBufferRange != nullptr) count++;
	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) Load_Function("glBindBufferBase"); 
	if(glBindBufferBase != nullptr) count++;
	glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) Load_Function("glTransformFeedbackVaryings"); 
	if(glTransformFeedbackVaryings != nullptr) count++;
	glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) Load_Function("glGetTransformFeedbackVarying"); 
	if(glGetTransformFeedbackVarying != nullptr) count++;
	glClampColor = (PFNGLCLAMPCOLORPROC) Load_Function("glClampColor"); 
	if(glClampColor != nullptr) count++;
	glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC) Load_Function("glBeginConditionalRender"); 
	if(glBeginConditionalRender != nullptr) count++;
	glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC) Load_Function("glEndConditionalRender"); 
	if(glEndConditionalRender != nullptr) count++;
	glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) Load_Function("glVertexAttribIPointer"); 
	if(glVertexAttribIPointer != nullptr) count++;
	glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) Load_Function("glGetVertexAttribIiv"); 
	if(glGetVertexAttribIiv != nullptr) count++;
	glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) Load_Function("glGetVertexAttribIuiv"); 
	if(glGetVertexAttribIuiv != nullptr) count++;
	glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC) Load_Function("glVertexAttribI1i"); 
	if(glVertexAttribI1i != nullptr) count++;
	glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC) Load_Function("glVertexAttribI2i"); 
	if(glVertexAttribI2i != nullptr) count++;
	glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC) Load_Function("glVertexAttribI3i"); 
	if(glVertexAttribI3i != nullptr) count++;
	glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) Load_Function("glVertexAttribI4i"); 
	if(glVertexAttribI4i != nullptr) count++;
	glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC) Load_Function("glVertexAttribI1ui"); 
	if(glVertexAttribI1ui != nullptr) count++;
	glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC) Load_Function("glVertexAttribI2ui"); 
	if(glVertexAttribI2ui != nullptr) count++;
	glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC) Load_Function("glVertexAttribI3ui"); 
	if(glVertexAttribI3ui != nullptr) count++;
	glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) Load_Function("glVertexAttribI4ui"); 
	if(glVertexAttribI4ui != nullptr) count++;
	glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC) Load_Function("glVertexAttribI1iv"); 
	if(glVertexAttribI1iv != nullptr) count++;
	glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC) Load_Function("glVertexAttribI2iv"); 
	if(glVertexAttribI2iv != nullptr) count++;
	glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC) Load_Function("glVertexAttribI3iv"); 
	if(glVertexAttribI3iv != nullptr) count++;
	glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) Load_Function("glVertexAttribI4iv"); 
	if(glVertexAttribI4iv != nullptr) count++;
	glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC) Load_Function("glVertexAttribI1uiv"); 
	if(glVertexAttribI1uiv != nullptr) count++;
	glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC) Load_Function("glVertexAttribI2uiv"); 
	if(glVertexAttribI2uiv != nullptr) count++;
	glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC) Load_Function("glVertexAttribI3uiv"); 
	if(glVertexAttribI3uiv != nullptr) count++;
	glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) Load_Function("glVertexAttribI4uiv"); 
	if(glVertexAttribI4uiv != nullptr) count++;
	glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC) Load_Function("glVertexAttribI4bv"); 
	if(glVertexAttribI4bv != nullptr) count++;
	glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC) Load_Function("glVertexAttribI4sv"); 
	if(glVertexAttribI4sv != nullptr) count++;
	glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC) Load_Function("glVertexAttribI4ubv"); 
	if(glVertexAttribI4ubv != nullptr) count++;
	glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC) Load_Function("glVertexAttribI4usv"); 
	if(glVertexAttribI4usv != nullptr) count++;
	glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) Load_Function("glGetUniformuiv"); 
	if(glGetUniformuiv != nullptr) count++;
	glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC) Load_Function("glBindFragDataLocation"); 
	if(glBindFragDataLocation != nullptr) count++;
	glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) Load_Function("glGetFragDataLocation"); 
	if(glGetFragDataLocation != nullptr) count++;
	glUniform1ui = (PFNGLUNIFORM1UIPROC) Load_Function("glUniform1ui"); 
	if(glUniform1ui != nullptr) count++;
	glUniform2ui = (PFNGLUNIFORM2UIPROC) Load_Function("glUniform2ui"); 
	if(glUniform2ui != nullptr) count++;
	glUniform3ui = (PFNGLUNIFORM3UIPROC) Load_Function("glUniform3ui"); 
	if(glUniform3ui != nullptr) count++;
	glUniform4ui = (PFNGLUNIFORM4UIPROC) Load_Function("glUniform4ui"); 
	if(glUniform4ui != nullptr) count++;
	glUniform1uiv = (PFNGLUNIFORM1UIVPROC) Load_Function("glUniform1uiv"); 
	if(glUniform1uiv != nullptr) count++;
	glUniform2uiv = (PFNGLUNIFORM2UIVPROC) Load_Function("glUniform2uiv"); 
	if(glUniform2uiv != nullptr) count++;
	glUniform3uiv = (PFNGLUNIFORM3UIVPROC) Load_Function("glUniform3uiv"); 
	if(glUniform3uiv != nullptr) count++;
	glUniform4uiv = (PFNGLUNIFORM4UIVPROC) Load_Function("glUniform4uiv"); 
	if(glUniform4uiv != nullptr) count++;
	glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) Load_Function("glTexParameterIiv"); 
	if(glTexParameterIiv != nullptr) count++;
	glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) Load_Function("glTexParameterIuiv"); 
	if(glTexParameterIuiv != nullptr) count++;
	glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) Load_Function("glGetTexParameterIiv"); 
	if(glGetTexParameterIiv != nullptr) count++;
	glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) Load_Function("glGetTexParameterIuiv"); 
	if(glGetTexParameterIuiv != nullptr) count++;
	glClearBufferiv = (PFNGLCLEARBUFFERIVPROC) Load_Function("glClearBufferiv"); 
	if(glClearBufferiv != nullptr) count++;
	glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) Load_Function("glClearBufferuiv"); 
	if(glClearBufferuiv != nullptr) count++;
	glClearBufferfv = (PFNGLCLEARBUFFERFVPROC) Load_Function("glClearBufferfv"); 
	if(glClearBufferfv != nullptr) count++;
	glClearBufferfi = (PFNGLCLEARBUFFERFIPROC) Load_Function("glClearBufferfi"); 
	if(glClearBufferfi != nullptr) count++;
	glGetStringi = (PFNGLGETSTRINGIPROC) Load_Function("glGetStringi"); 
	if(glGetStringi != nullptr) count++;
	glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) Load_Function("glIsRenderbuffer"); 
	if(glIsRenderbuffer != nullptr) count++;
	glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) Load_Function("glBindRenderbuffer"); 
	if(glBindRenderbuffer != nullptr) count++;
	glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) Load_Function("glDeleteRenderbuffers"); 
	if(glDeleteRenderbuffers != nullptr) count++;
	glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) Load_Function("glGenRenderbuffers"); 
	if(glGenRenderbuffers != nullptr) count++;
	glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) Load_Function("glRenderbufferStorage"); 
	if(glRenderbufferStorage != nullptr) count++;
	glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) Load_Function("glGetRenderbufferParameteriv"); 
	if(glGetRenderbufferParameteriv != nullptr) count++;
	glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) Load_Function("glIsFramebuffer"); 
	if(glIsFramebuffer != nullptr) count++;
	glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) Load_Function("glBindFramebuffer"); 
	if(glBindFramebuffer != nullptr) count++;
	glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) Load_Function("glDeleteFramebuffers"); 
	if(glDeleteFramebuffers != nullptr) count++;
	glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) Load_Function("glGenFramebuffers"); 
	if(glGenFramebuffers != nullptr) count++;
	glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) Load_Function("glCheckFramebufferStatus"); 
	if(glCheckFramebufferStatus != nullptr) count++;
	glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) Load_Function("glFramebufferTexture1D"); 
	if(glFramebufferTexture1D != nullptr) count++;
	glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) Load_Function("glFramebufferTexture2D"); 
	if(glFramebufferTexture2D != nullptr) count++;
	glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) Load_Function("glFramebufferTexture3D"); 
	if(glFramebufferTexture3D != nullptr) count++;
	glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) Load_Function("glFramebufferRenderbuffer"); 
	if(glFramebufferRenderbuffer != nullptr) count++;
	glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) Load_Function("glGetFramebufferAttachmentParameteriv"); 
	if(glGetFramebufferAttachmentParameteriv != nullptr) count++;
	glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) Load_Function("glGenerateMipmap"); 
	if(glGenerateMipmap != nullptr) count++;
	glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) Load_Function("glBlitFramebuffer"); 
	if(glBlitFramebuffer != nullptr) count++;
	glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) Load_Function("glRenderbufferStorageMultisample"); 
	if(glRenderbufferStorageMultisample != nullptr) count++;
	glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) Load_Function("glFramebufferTextureLayer"); 
	if(glFramebufferTextureLayer != nullptr) count++;
	glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) Load_Function("glMapBufferRange"); 
	if(glMapBufferRange != nullptr) count++;
	glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) Load_Function("glFlushMappedBufferRange"); 
	if(glFlushMappedBufferRange != nullptr) count++;
	glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) Load_Function("glBindVertexArray"); 
	if(glBindVertexArray != nullptr) count++;
	glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) Load_Function("glDeleteVertexArrays"); 
	if(glDeleteVertexArrays != nullptr) count++;
	glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) Load_Function("glGenVertexArrays"); 
	if(glGenVertexArrays != nullptr) count++;
	glIsVertexArray = (PFNGLISVERTEXARRAYPROC) Load_Function("glIsVertexArray"); 
	if(glIsVertexArray != nullptr) count++;
	glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) Load_Function("glDrawArraysInstanced"); 
	if(glDrawArraysInstanced != nullptr) count++;
	glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) Load_Function("glDrawElementsInstanced"); 
	if(glDrawElementsInstanced != nullptr) count++;
	glTexBuffer = (PFNGLTEXBUFFERPROC) Load_Function("glTexBuffer"); 
	if(glTexBuffer != nullptr) count++;
	glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC) Load_Function("glPrimitiveRestartIndex"); 
	if(glPrimitiveRestartIndex != nullptr) count++;
	glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) Load_Function("glCopyBufferSubData"); 
	if(glCopyBufferSubData != nullptr) count++;
	glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) Load_Function("glGetUniformIndices"); 
	if(glGetUniformIndices != nullptr) count++;
	glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) Load_Function("glGetActiveUniformsiv"); 
	if(glGetActiveUniformsiv != nullptr) count++;
	glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) Load_Function("glGetActiveUniformName"); 
	if(glGetActiveUniformName != nullptr) count++;
	glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) Load_Function("glGetUniformBlockIndex"); 
	if(glGetUniformBlockIndex != nullptr) count++;
	glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) Load_Function("glGetActiveUniformBlockiv"); 
	if(glGetActiveUniformBlockiv != nullptr) count++;
	glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) Load_Function("glGetActiveUniformBlockName"); 
	if(glGetActiveUniformBlockName != nullptr) count++;
	glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) Load_Function("glUniformBlockBinding"); 
	if(glUniformBlockBinding != nullptr) count++;
	glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) Load_Function("glDrawElementsBaseVertex"); 
	if(glDrawElementsBaseVertex != nullptr) count++;
	glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) Load_Function("glDrawRangeElementsBaseVertex"); 
	if(glDrawRangeElementsBaseVertex != nullptr) count++;
	glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) Load_Function("glDrawElementsInstancedBaseVertex"); 
	if(glDrawElementsInstancedBaseVertex != nullptr) count++;
	glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) Load_Function("glMultiDrawElementsBaseVertex"); 
	if(glMultiDrawElementsBaseVertex != nullptr) count++;
	glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) Load_Function("glProvokingVertex"); 
	if(glProvokingVertex != nullptr) count++;
	glFenceSync = (PFNGLFENCESYNCPROC) Load_Function("glFenceSync"); 
	if(glFenceSync != nullptr) count++;
	glIsSync = (PFNGLISSYNCPROC) Load_Function("glIsSync"); 
	if(glIsSync != nullptr) count++;
	glDeleteSync = (PFNGLDELETESYNCPROC) Load_Function("glDeleteSync"); 
	if(glDeleteSync != nullptr) count++;
	glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) Load_Function("glClientWaitSync"); 
	if(glClientWaitSync != nullptr) count++;
	glWaitSync = (PFNGLWAITSYNCPROC) Load_Function("glWaitSync"); 
	if(glWaitSync != nullptr) count++;
	glGetInteger64v = (PFNGLGETINTEGER64VPROC) Load_Function("glGetInteger64v"); 
	if(glGetInteger64v != nullptr) count++;
	glGetSynciv = (PFNGLGETSYNCIVPROC) Load_Function("glGetSynciv"); 
	if(glGetSynciv != nullptr) count++;
	glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) Load_Function("glGetInteger64i_v"); 
	if(glGetInteger64i_v != nullptr) count++;
	glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) Load_Function("glGetBufferParameteri64v"); 
	if(glGetBufferParameteri64v != nullptr) count++;
	glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC) Load_Function("glFramebufferTexture"); 
	if(glFramebufferTexture != nullptr) count++;
	glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) Load_Function("glTexImage2DMultisample"); 
	if(glTexImage2DMultisample != nullptr) count++;
	glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) Load_Function("glTexImage3DMultisample"); 
	if(glTexImage3DMultisample != nullptr) count++;
	glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) Load_Function("glGetMultisamplefv"); 
	if(glGetMultisamplefv != nullptr) count++;
	glSampleMaski = (PFNGLSAMPLEMASKIPROC) Load_Function("glSampleMaski"); 
	if(glSampleMaski != nullptr) count++;
	glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) Load_Function("glBindFragDataLocationIndexed"); 
	if(glBindFragDataLocationIndexed != nullptr) count++;
	glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) Load_Function("glGetFragDataIndex"); 
	if(glGetFragDataIndex != nullptr) count++;
	glGenSamplers = (PFNGLGENSAMPLERSPROC) Load_Function("glGenSamplers"); 
	if(glGenSamplers != nullptr) count++;
	glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) Load_Function("glDeleteSamplers"); 
	if(glDeleteSamplers != nullptr) count++;
	glIsSampler = (PFNGLISSAMPLERPROC) Load_Function("glIsSampler"); 
	if(glIsSampler != nullptr) count++;
	glBindSampler = (PFNGLBINDSAMPLERPROC) Load_Function("glBindSampler"); 
	if(glBindSampler != nullptr) count++;
	glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) Load_Function("glSamplerParameteri"); 
	if(glSamplerParameteri != nullptr) count++;
	glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) Load_Function("glSamplerParameteriv"); 
	if(glSamplerParameteriv != nullptr) count++;
	glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) Load_Function("glSamplerParameterf"); 
	if(glSamplerParameterf != nullptr) count++;
	glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) Load_Function("glSamplerParameterfv"); 
	if(glSamplerParameterfv != nullptr) count++;
	glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) Load_Function("glSamplerParameterIiv"); 
	if(glSamplerParameterIiv != nullptr) count++;
	glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) Load_Function("glSamplerParameterIuiv"); 
	if(glSamplerParameterIuiv != nullptr) count++;
	glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) Load_Function("glGetSamplerParameteriv"); 
	if(glGetSamplerParameteriv != nullptr) count++;
	glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) Load_Function("glGetSamplerParameterIiv"); 
	if(glGetSamplerParameterIiv != nullptr) count++;
	glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) Load_Function("glGetSamplerParameterfv"); 
	if(glGetSamplerParameterfv != nullptr) count++;
	glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) Load_Function("glGetSamplerParameterIuiv"); 
	if(glGetSamplerParameterIuiv != nullptr) count++;
	glQueryCounter = (PFNGLQUERYCOUNTERPROC) Load_Function("glQueryCounter"); 
	if(glQueryCounter != nullptr) count++;
	glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) Load_Function("glGetQueryObjecti64v"); 
	if(glGetQueryObjecti64v != nullptr) count++;
	glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) Load_Function("glGetQueryObjectui64v"); 
	if(glGetQueryObjectui64v != nullptr) count++;
	glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) Load_Function("glVertexAttribDivisor"); 
	if(glVertexAttribDivisor != nullptr) count++;
	glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) Load_Function("glVertexAttribP1ui"); 
	if(glVertexAttribP1ui != nullptr) count++;
	glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) Load_Function("glVertexAttribP1uiv"); 
	if(glVertexAttribP1uiv != nullptr) count++;
	glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) Load_Function("glVertexAttribP2ui"); 
	if(glVertexAttribP2ui != nullptr) count++;
	glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) Load_Function("glVertexAttribP2uiv"); 
	if(glVertexAttribP2uiv != nullptr) count++;
	glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) Load_Function("glVertexAttribP3ui"); 
	if(glVertexAttribP3ui != nullptr) count++;
	glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) Load_Function("glVertexAttribP3uiv"); 
	if(glVertexAttribP3uiv != nullptr) count++;
	glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) Load_Function("glVertexAttribP4ui"); 
	if(glVertexAttribP4ui != nullptr) count++;
	glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) Load_Function("glVertexAttribP4uiv"); 
	if(glVertexAttribP4uiv != nullptr) count++;
	glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC) Load_Function("glMinSampleShading"); 
	if(glMinSampleShading != nullptr) count++;
	glBlendEquationi = (PFNGLBLENDEQUATIONIPROC) Load_Function("glBlendEquationi"); 
	if(glBlendEquationi != nullptr) count++;
	glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC) Load_Function("glBlendEquationSeparatei"); 
	if(glBlendEquationSeparatei != nullptr) count++;
	glBlendFunci = (PFNGLBLENDFUNCIPROC) Load_Function("glBlendFunci"); 
	if(glBlendFunci != nullptr) count++;
	glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC) Load_Function("glBlendFuncSeparatei"); 
	if(glBlendFuncSeparatei != nullptr) count++;
	glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) Load_Function("glDrawArraysIndirect"); 
	if(glDrawArraysIndirect != nullptr) count++;
	glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) Load_Function("glDrawElementsIndirect"); 
	if(glDrawElementsIndirect != nullptr) count++;
	glUniform1d = (PFNGLUNIFORM1DPROC) Load_Function("glUniform1d"); 
	if(glUniform1d != nullptr) count++;
	glUniform2d = (PFNGLUNIFORM2DPROC) Load_Function("glUniform2d"); 
	if(glUniform2d != nullptr) count++;
	glUniform3d = (PFNGLUNIFORM3DPROC) Load_Function("glUniform3d"); 
	if(glUniform3d != nullptr) count++;
	glUniform4d = (PFNGLUNIFORM4DPROC) Load_Function("glUniform4d"); 
	if(glUniform4d != nullptr) count++;
	glUniform1dv = (PFNGLUNIFORM1DVPROC) Load_Function("glUniform1dv"); 
	if(glUniform1dv != nullptr) count++;
	glUniform2dv = (PFNGLUNIFORM2DVPROC) Load_Function("glUniform2dv"); 
	if(glUniform2dv != nullptr) count++;
	glUniform3dv = (PFNGLUNIFORM3DVPROC) Load_Function("glUniform3dv"); 
	if(glUniform3dv != nullptr) count++;
	glUniform4dv = (PFNGLUNIFORM4DVPROC) Load_Function("glUniform4dv"); 
	if(glUniform4dv != nullptr) count++;
	glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) Load_Function("glUniformMatrix2dv"); 
	if(glUniformMatrix2dv != nullptr) count++;
	glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) Load_Function("glUniformMatrix3dv"); 
	if(glUniformMatrix3dv != nullptr) count++;
	glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) Load_Function("glUniformMatrix4dv"); 
	if(glUniformMatrix4dv != nullptr) count++;
	glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) Load_Function("glUniformMatrix2x3dv"); 
	if(glUniformMatrix2x3dv != nullptr) count++;
	glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) Load_Function("glUniformMatrix2x4dv"); 
	if(glUniformMatrix2x4dv != nullptr) count++;
	glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) Load_Function("glUniformMatrix3x2dv"); 
	if(glUniformMatrix3x2dv != nullptr) count++;
	glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) Load_Function("glUniformMatrix3x4dv"); 
	if(glUniformMatrix3x4dv != nullptr) count++;
	glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) Load_Function("glUniformMatrix4x2dv"); 
	if(glUniformMatrix4x2dv != nullptr) count++;
	glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) Load_Function("glUniformMatrix4x3dv"); 
	if(glUniformMatrix4x3dv != nullptr) count++;
	glGetUniformdv = (PFNGLGETUNIFORMDVPROC) Load_Function("glGetUniformdv"); 
	if(glGetUniformdv != nullptr) count++;
	glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) Load_Function("glGetSubroutineUniformLocation"); 
	if(glGetSubroutineUniformLocation != nullptr) count++;
	glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) Load_Function("glGetSubroutineIndex"); 
	if(glGetSubroutineIndex != nullptr) count++;
	glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) Load_Function("glGetActiveSubroutineUniformiv"); 
	if(glGetActiveSubroutineUniformiv != nullptr) count++;
	glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) Load_Function("glGetActiveSubroutineUniformName"); 
	if(glGetActiveSubroutineUniformName != nullptr) count++;
	glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) Load_Function("glGetActiveSubroutineName"); 
	if(glGetActiveSubroutineName != nullptr) count++;
	glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) Load_Function("glUniformSubroutinesuiv"); 
	if(glUniformSubroutinesuiv != nullptr) count++;
	glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) Load_Function("glGetUniformSubroutineuiv"); 
	if(glGetUniformSubroutineuiv != nullptr) count++;
	glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) Load_Function("glGetProgramStageiv"); 
	if(glGetProgramStageiv != nullptr) count++;
	glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) Load_Function("glPatchParameteri"); 
	if(glPatchParameteri != nullptr) count++;
	glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) Load_Function("glPatchParameterfv"); 
	if(glPatchParameterfv != nullptr) count++;
	glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) Load_Function("glBindTransformFeedback"); 
	if(glBindTransformFeedback != nullptr) count++;
	glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) Load_Function("glDeleteTransformFeedbacks"); 
	if(glDeleteTransformFeedbacks != nullptr) count++;
	glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) Load_Function("glGenTransformFeedbacks"); 
	if(glGenTransformFeedbacks != nullptr) count++;
	glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) Load_Function("glIsTransformFeedback"); 
	if(glIsTransformFeedback != nullptr) count++;
	glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) Load_Function("glPauseTransformFeedback"); 
	if(glPauseTransformFeedback != nullptr) count++;
	glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) Load_Function("glResumeTransformFeedback"); 
	if(glResumeTransformFeedback != nullptr) count++;
	glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) Load_Function("glDrawTransformFeedback"); 
	if(glDrawTransformFeedback != nullptr) count++;
	glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) Load_Function("glDrawTransformFeedbackStream"); 
	if(glDrawTransformFeedbackStream != nullptr) count++;
	glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) Load_Function("glBeginQueryIndexed"); 
	if(glBeginQueryIndexed != nullptr) count++;
	glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) Load_Function("glEndQueryIndexed"); 
	if(glEndQueryIndexed != nullptr) count++;
	glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) Load_Function("glGetQueryIndexediv"); 
	if(glGetQueryIndexediv != nullptr) count++;
	glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) Load_Function("glReleaseShaderCompiler"); 
	if(glReleaseShaderCompiler != nullptr) count++;
	glShaderBinary = (PFNGLSHADERBINARYPROC) Load_Function("glShaderBinary"); 
	if(glShaderBinary != nullptr) count++;
	glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) Load_Function("glGetShaderPrecisionFormat"); 
	if(glGetShaderPrecisionFormat != nullptr) count++;
	glDepthRangef = (PFNGLDEPTHRANGEFPROC) Load_Function("glDepthRangef"); 
	if(glDepthRangef != nullptr) count++;
	glClearDepthf = (PFNGLCLEARDEPTHFPROC) Load_Function("glClearDepthf"); 
	if(glClearDepthf != nullptr) count++;
	glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) Load_Function("glGetProgramBinary"); 
	if(glGetProgramBinary != nullptr) count++;
	glProgramBinary = (PFNGLPROGRAMBINARYPROC) Load_Function("glProgramBinary"); 
	if(glProgramBinary != nullptr) count++;
	glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) Load_Function("glProgramParameteri"); 
	if(glProgramParameteri != nullptr) count++;
	glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) Load_Function("glUseProgramStages"); 
	if(glUseProgramStages != nullptr) count++;
	glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) Load_Function("glActiveShaderProgram"); 
	if(glActiveShaderProgram != nullptr) count++;
	glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) Load_Function("glCreateShaderProgramv"); 
	if(glCreateShaderProgramv != nullptr) count++;
	glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) Load_Function("glBindProgramPipeline"); 
	if(glBindProgramPipeline != nullptr) count++;
	glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) Load_Function("glDeleteProgramPipelines"); 
	if(glDeleteProgramPipelines != nullptr) count++;
	glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) Load_Function("glGenProgramPipelines"); 
	if(glGenProgramPipelines != nullptr) count++;
	glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) Load_Function("glIsProgramPipeline"); 
	if(glIsProgramPipeline != nullptr) count++;
	glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) Load_Function("glGetProgramPipelineiv"); 
	if(glGetProgramPipelineiv != nullptr) count++;
	glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) Load_Function("glProgramUniform1i"); 
	if(glProgramUniform1i != nullptr) count++;
	glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) Load_Function("glProgramUniform1iv"); 
	if(glProgramUniform1iv != nullptr) count++;
	glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) Load_Function("glProgramUniform1f"); 
	if(glProgramUniform1f != nullptr) count++;
	glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) Load_Function("glProgramUniform1fv"); 
	if(glProgramUniform1fv != nullptr) count++;
	glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) Load_Function("glProgramUniform1d"); 
	if(glProgramUniform1d != nullptr) count++;
	glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) Load_Function("glProgramUniform1dv"); 
	if(glProgramUniform1dv != nullptr) count++;
	glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) Load_Function("glProgramUniform1ui"); 
	if(glProgramUniform1ui != nullptr) count++;
	glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) Load_Function("glProgramUniform1uiv"); 
	if(glProgramUniform1uiv != nullptr) count++;
	glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) Load_Function("glProgramUniform2i"); 
	if(glProgramUniform2i != nullptr) count++;
	glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) Load_Function("glProgramUniform2iv"); 
	if(glProgramUniform2iv != nullptr) count++;
	glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) Load_Function("glProgramUniform2f"); 
	if(glProgramUniform2f != nullptr) count++;
	glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) Load_Function("glProgramUniform2fv"); 
	if(glProgramUniform2fv != nullptr) count++;
	glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) Load_Function("glProgramUniform2d"); 
	if(glProgramUniform2d != nullptr) count++;
	glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) Load_Function("glProgramUniform2dv"); 
	if(glProgramUniform2dv != nullptr) count++;
	glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) Load_Function("glProgramUniform2ui"); 
	if(glProgramUniform2ui != nullptr) count++;
	glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) Load_Function("glProgramUniform2uiv"); 
	if(glProgramUniform2uiv != nullptr) count++;
	glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) Load_Function("glProgramUniform3i"); 
	if(glProgramUniform3i != nullptr) count++;
	glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) Load_Function("glProgramUniform3iv"); 
	if(glProgramUniform3iv != nullptr) count++;
	glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) Load_Function("glProgramUniform3f"); 
	if(glProgramUniform3f != nullptr) count++;
	glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) Load_Function("glProgramUniform3fv"); 
	if(glProgramUniform3fv != nullptr) count++;
	glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) Load_Function("glProgramUniform3d"); 
	if(glProgramUniform3d != nullptr) count++;
	glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) Load_Function("glProgramUniform3dv"); 
	if(glProgramUniform3dv != nullptr) count++;
	glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) Load_Function("glProgramUniform3ui"); 
	if(glProgramUniform3ui != nullptr) count++;
	glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) Load_Function("glProgramUniform3uiv"); 
	if(glProgramUniform3uiv != nullptr) count++;
	glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) Load_Function("glProgramUniform4i"); 
	if(glProgramUniform4i != nullptr) count++;
	glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) Load_Function("glProgramUniform4iv"); 
	if(glProgramUniform4iv != nullptr) count++;
	glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) Load_Function("glProgramUniform4f"); 
	if(glProgramUniform4f != nullptr) count++;
	glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) Load_Function("glProgramUniform4fv"); 
	if(glProgramUniform4fv != nullptr) count++;
	glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) Load_Function("glProgramUniform4d"); 
	if(glProgramUniform4d != nullptr) count++;
	glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) Load_Function("glProgramUniform4dv"); 
	if(glProgramUniform4dv != nullptr) count++;
	glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) Load_Function("glProgramUniform4ui"); 
	if(glProgramUniform4ui != nullptr) count++;
	glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) Load_Function("glProgramUniform4uiv"); 
	if(glProgramUniform4uiv != nullptr) count++;
	glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) Load_Function("glProgramUniformMatrix2fv"); 
	if(glProgramUniformMatrix2fv != nullptr) count++;
	glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) Load_Function("glProgramUniformMatrix3fv"); 
	if(glProgramUniformMatrix3fv != nullptr) count++;
	glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) Load_Function("glProgramUniformMatrix4fv"); 
	if(glProgramUniformMatrix4fv != nullptr) count++;
	glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) Load_Function("glProgramUniformMatrix2dv"); 
	if(glProgramUniformMatrix2dv != nullptr) count++;
	glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) Load_Function("glProgramUniformMatrix3dv"); 
	if(glProgramUniformMatrix3dv != nullptr) count++;
	glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) Load_Function("glProgramUniformMatrix4dv"); 
	if(glProgramUniformMatrix4dv != nullptr) count++;
	glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) Load_Function("glProgramUniformMatrix2x3fv"); 
	if(glProgramUniformMatrix2x3fv != nullptr) count++;
	glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) Load_Function("glProgramUniformMatrix3x2fv"); 
	if(glProgramUniformMatrix3x2fv != nullptr) count++;
	glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) Load_Function("glProgramUniformMatrix2x4fv"); 
	if(glProgramUniformMatrix2x4fv != nullptr) count++;
	glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) Load_Function("glProgramUniformMatrix4x2fv"); 
	if(glProgramUniformMatrix4x2fv != nullptr) count++;
	glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) Load_Function("glProgramUniformMatrix3x4fv"); 
	if(glProgramUniformMatrix3x4fv != nullptr) count++;
	glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) Load_Function("glProgramUniformMatrix4x3fv"); 
	if(glProgramUniformMatrix4x3fv != nullptr) count++;
	glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) Load_Function("glProgramUniformMatrix2x3dv"); 
	if(glProgramUniformMatrix2x3dv != nullptr) count++;
	glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) Load_Function("glProgramUniformMatrix3x2dv"); 
	if(glProgramUniformMatrix3x2dv != nullptr) count++;
	glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) Load_Function("glProgramUniformMatrix2x4dv"); 
	if(glProgramUniformMatrix2x4dv != nullptr) count++;
	glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) Load_Function("glProgramUniformMatrix4x2dv"); 
	if(glProgramUniformMatrix4x2dv != nullptr) count++;
	glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) Load_Function("glProgramUniformMatrix3x4dv"); 
	if(glProgramUniformMatrix3x4dv != nullptr) count++;
	glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) Load_Function("glProgramUniformMatrix4x3dv"); 
	if(glProgramUniformMatrix4x3dv != nullptr) count++;
	glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) Load_Function("glValidateProgramPipeline"); 
	if(glValidateProgramPipeline != nullptr) count++;
	glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) Load_Function("glGetProgramPipelineInfoLog"); 
	if(glGetProgramPipelineInfoLog != nullptr) count++;
	glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) Load_Function("glVertexAttribL1d"); 
	if(glVertexAttribL1d != nullptr) count++;
	glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) Load_Function("glVertexAttribL2d"); 
	if(glVertexAttribL2d != nullptr) count++;
	glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) Load_Function("glVertexAttribL3d"); 
	if(glVertexAttribL3d != nullptr) count++;
	glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) Load_Function("glVertexAttribL4d"); 
	if(glVertexAttribL4d != nullptr) count++;
	glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) Load_Function("glVertexAttribL1dv"); 
	if(glVertexAttribL1dv != nullptr) count++;
	glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) Load_Function("glVertexAttribL2dv"); 
	if(glVertexAttribL2dv != nullptr) count++;
	glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) Load_Function("glVertexAttribL3dv"); 
	if(glVertexAttribL3dv != nullptr) count++;
	glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) Load_Function("glVertexAttribL4dv"); 
	if(glVertexAttribL4dv != nullptr) count++;
	glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) Load_Function("glVertexAttribLPointer"); 
	if(glVertexAttribLPointer != nullptr) count++;
	glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) Load_Function("glGetVertexAttribLdv"); 
	if(glGetVertexAttribLdv != nullptr) count++;
	glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) Load_Function("glViewportArrayv"); 
	if(glViewportArrayv != nullptr) count++;
	glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) Load_Function("glViewportIndexedf"); 
	if(glViewportIndexedf != nullptr) count++;
	glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) Load_Function("glViewportIndexedfv"); 
	if(glViewportIndexedfv != nullptr) count++;
	glScissorArrayv = (PFNGLSCISSORARRAYVPROC) Load_Function("glScissorArrayv"); 
	if(glScissorArrayv != nullptr) count++;
	glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) Load_Function("glScissorIndexed"); 
	if(glScissorIndexed != nullptr) count++;
	glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) Load_Function("glScissorIndexedv"); 
	if(glScissorIndexedv != nullptr) count++;
	glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) Load_Function("glDepthRangeArrayv"); 
	if(glDepthRangeArrayv != nullptr) count++;
	glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) Load_Function("glDepthRangeIndexed"); 
	if(glDepthRangeIndexed != nullptr) count++;
	glGetFloati_v = (PFNGLGETFLOATI_VPROC) Load_Function("glGetFloati_v"); 
	if(glGetFloati_v != nullptr) count++;
	glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) Load_Function("glGetDoublei_v"); 
	if(glGetDoublei_v != nullptr) count++;
	glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) Load_Function("glDrawArraysInstancedBaseInstance"); 
	if(glDrawArraysInstancedBaseInstance != nullptr) count++;
	glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) Load_Function("glDrawElementsInstancedBaseInstance"); 
	if(glDrawElementsInstancedBaseInstance != nullptr) count++;
	glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) Load_Function("glDrawElementsInstancedBaseVertexBaseInstance"); 
	if(glDrawElementsInstancedBaseVertexBaseInstance != nullptr) count++;
	glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) Load_Function("glGetInternalformativ"); 
	if(glGetInternalformativ != nullptr) count++;
	glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) Load_Function("glGetActiveAtomicCounterBufferiv"); 
	if(glGetActiveAtomicCounterBufferiv != nullptr) count++;
	glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) Load_Function("glBindImageTexture"); 
	if(glBindImageTexture != nullptr) count++;
	glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) Load_Function("glMemoryBarrier"); 
	if(glMemoryBarrier != nullptr) count++;
	glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) Load_Function("glTexStorage1D"); 
	if(glTexStorage1D != nullptr) count++;
	glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) Load_Function("glTexStorage2D"); 
	if(glTexStorage2D != nullptr) count++;
	glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) Load_Function("glTexStorage3D"); 
	if(glTexStorage3D != nullptr) count++;
	glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) Load_Function("glDrawTransformFeedbackInstanced"); 
	if(glDrawTransformFeedbackInstanced != nullptr) count++;
	glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) Load_Function("glDrawTransformFeedbackStreamInstanced"); 
	if(glDrawTransformFeedbackStreamInstanced != nullptr) count++;
	glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) Load_Function("glClearBufferData"); 
	if(glClearBufferData != nullptr) count++;
	glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) Load_Function("glClearBufferSubData"); 
	if(glClearBufferSubData != nullptr) count++;
	glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) Load_Function("glDispatchCompute"); 
	if(glDispatchCompute != nullptr) count++;
	glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) Load_Function("glDispatchComputeIndirect"); 
	if(glDispatchComputeIndirect != nullptr) count++;
	glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) Load_Function("glCopyImageSubData"); 
	if(glCopyImageSubData != nullptr) count++;
	glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) Load_Function("glFramebufferParameteri"); 
	if(glFramebufferParameteri != nullptr) count++;
	glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) Load_Function("glGetFramebufferParameteriv"); 
	if(glGetFramebufferParameteriv != nullptr) count++;
	glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) Load_Function("glGetInternalformati64v"); 
	if(glGetInternalformati64v != nullptr) count++;
	glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) Load_Function("glInvalidateTexSubImage"); 
	if(glInvalidateTexSubImage != nullptr) count++;
	glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) Load_Function("glInvalidateTexImage"); 
	if(glInvalidateTexImage != nullptr) count++;
	glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) Load_Function("glInvalidateBufferSubData"); 
	if(glInvalidateBufferSubData != nullptr) count++;
	glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) Load_Function("glInvalidateBufferData"); 
	if(glInvalidateBufferData != nullptr) count++;
	glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) Load_Function("glInvalidateFramebuffer"); 
	if(glInvalidateFramebuffer != nullptr) count++;
	glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) Load_Function("glInvalidateSubFramebuffer"); 
	if(glInvalidateSubFramebuffer != nullptr) count++;
	glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) Load_Function("glMultiDrawArraysIndirect"); 
	if(glMultiDrawArraysIndirect != nullptr) count++;
	glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) Load_Function("glMultiDrawElementsIndirect"); 
	if(glMultiDrawElementsIndirect != nullptr) count++;
	glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) Load_Function("glGetProgramInterfaceiv"); 
	if(glGetProgramInterfaceiv != nullptr) count++;
	glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) Load_Function("glGetProgramResourceIndex"); 
	if(glGetProgramResourceIndex != nullptr) count++;
	glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) Load_Function("glGetProgramResourceName"); 
	if(glGetProgramResourceName != nullptr) count++;
	glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) Load_Function("glGetProgramResourceiv"); 
	if(glGetProgramResourceiv != nullptr) count++;
	glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) Load_Function("glGetProgramResourceLocation"); 
	if(glGetProgramResourceLocation != nullptr) count++;
	glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) Load_Function("glGetProgramResourceLocationIndex"); 
	if(glGetProgramResourceLocationIndex != nullptr) count++;
	glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) Load_Function("glShaderStorageBlockBinding"); 
	if(glShaderStorageBlockBinding != nullptr) count++;
	glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) Load_Function("glTexBufferRange"); 
	if(glTexBufferRange != nullptr) count++;
	glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) Load_Function("glTexStorage2DMultisample"); 
	if(glTexStorage2DMultisample != nullptr) count++;
	glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) Load_Function("glTexStorage3DMultisample"); 
	if(glTexStorage3DMultisample != nullptr) count++;
	glTextureView = (PFNGLTEXTUREVIEWPROC) Load_Function("glTextureView"); 
	if(glTextureView != nullptr) count++;
	glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) Load_Function("glBindVertexBuffer"); 
	if(glBindVertexBuffer != nullptr) count++;
	glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) Load_Function("glVertexAttribFormat"); 
	if(glVertexAttribFormat != nullptr) count++;
	glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) Load_Function("glVertexAttribIFormat"); 
	if(glVertexAttribIFormat != nullptr) count++;
	glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) Load_Function("glVertexAttribLFormat"); 
	if(glVertexAttribLFormat != nullptr) count++;
	glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) Load_Function("glVertexAttribBinding"); 
	if(glVertexAttribBinding != nullptr) count++;
	glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) Load_Function("glVertexBindingDivisor"); 
	if(glVertexBindingDivisor != nullptr) count++;
	glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC) Load_Function("glDebugMessageControl"); 
	if(glDebugMessageControl != nullptr) count++;
	glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC) Load_Function("glDebugMessageInsert"); 
	if(glDebugMessageInsert != nullptr) count++;
	glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC) Load_Function("glDebugMessageCallback"); 
	if(glDebugMessageCallback != nullptr) count++;
	glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC) Load_Function("glGetDebugMessageLog"); 
	if(glGetDebugMessageLog != nullptr) count++;
	glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC) Load_Function("glPushDebugGroup"); 
	if(glPushDebugGroup != nullptr) count++;
	glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC) Load_Function("glPopDebugGroup"); 
	if(glPopDebugGroup != nullptr) count++;
	glObjectLabel = (PFNGLOBJECTLABELPROC) Load_Function("glObjectLabel"); 
	if(glObjectLabel != nullptr) count++;
	glGetObjectLabel = (PFNGLGETOBJECTLABELPROC) Load_Function("glGetObjectLabel"); 
	if(glGetObjectLabel != nullptr) count++;
	glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC) Load_Function("glObjectPtrLabel"); 
	if(glObjectPtrLabel != nullptr) count++;
	glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC) Load_Function("glGetObjectPtrLabel"); 
	if(glGetObjectPtrLabel != nullptr) count++;
	glBufferStorage = (PFNGLBUFFERSTORAGEPROC) Load_Function("glBufferStorage"); 
	if(glBufferStorage != nullptr) count++;
	glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) Load_Function("glClearTexImage"); 
	if(glClearTexImage != nullptr) count++;
	glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) Load_Function("glClearTexSubImage"); 
	if(glClearTexSubImage != nullptr) count++;
	glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) Load_Function("glBindBuffersBase"); 
	if(glBindBuffersBase != nullptr) count++;
	glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) Load_Function("glBindBuffersRange"); 
	if(glBindBuffersRange != nullptr) count++;
	glBindTextures = (PFNGLBINDTEXTURESPROC) Load_Function("glBindTextures"); 
	if(glBindTextures != nullptr) count++;
	glBindSamplers = (PFNGLBINDSAMPLERSPROC) Load_Function("glBindSamplers"); 
	if(glBindSamplers != nullptr) count++;
	glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) Load_Function("glBindImageTextures"); 
	if(glBindImageTextures != nullptr) count++;
	glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) Load_Function("glBindVertexBuffers"); 
	if(glBindVertexBuffers != nullptr) count++;
	glClipControl = (PFNGLCLIPCONTROLPROC) Load_Function("glClipControl"); 
	if(glClipControl != nullptr) count++;
	glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) Load_Function("glCreateTransformFeedbacks"); 
	if(glCreateTransformFeedbacks != nullptr) count++;
	glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) Load_Function("glTransformFeedbackBufferBase"); 
	if(glTransformFeedbackBufferBase != nullptr) count++;
	glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) Load_Function("glTransformFeedbackBufferRange"); 
	if(glTransformFeedbackBufferRange != nullptr) count++;
	glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) Load_Function("glGetTransformFeedbackiv"); 
	if(glGetTransformFeedbackiv != nullptr) count++;
	glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) Load_Function("glGetTransformFeedbacki_v"); 
	if(glGetTransformFeedbacki_v != nullptr) count++;
	glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) Load_Function("glGetTransformFeedbacki64_v"); 
	if(glGetTransformFeedbacki64_v != nullptr) count++;
	glCreateBuffers = (PFNGLCREATEBUFFERSPROC) Load_Function("glCreateBuffers"); 
	if(glCreateBuffers != nullptr) count++;
	glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) Load_Function("glNamedBufferStorage"); 
	if(glNamedBufferStorage != nullptr) count++;
	glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) Load_Function("glNamedBufferData"); 
	if(glNamedBufferData != nullptr) count++;
	glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) Load_Function("glNamedBufferSubData"); 
	if(glNamedBufferSubData != nullptr) count++;
	glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) Load_Function("glCopyNamedBufferSubData"); 
	if(glCopyNamedBufferSubData != nullptr) count++;
	glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) Load_Function("glClearNamedBufferData"); 
	if(glClearNamedBufferData != nullptr) count++;
	glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) Load_Function("glClearNamedBufferSubData"); 
	if(glClearNamedBufferSubData != nullptr) count++;
	glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) Load_Function("glMapNamedBuffer"); 
	if(glMapNamedBuffer != nullptr) count++;
	glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) Load_Function("glMapNamedBufferRange"); 
	if(glMapNamedBufferRange != nullptr) count++;
	glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) Load_Function("glUnmapNamedBuffer"); 
	if(glUnmapNamedBuffer != nullptr) count++;
	glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) Load_Function("glFlushMappedNamedBufferRange"); 
	if(glFlushMappedNamedBufferRange != nullptr) count++;
	glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) Load_Function("glGetNamedBufferParameteriv"); 
	if(glGetNamedBufferParameteriv != nullptr) count++;
	glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) Load_Function("glGetNamedBufferParameteri64v"); 
	if(glGetNamedBufferParameteri64v != nullptr) count++;
	glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) Load_Function("glGetNamedBufferPointerv"); 
	if(glGetNamedBufferPointerv != nullptr) count++;
	glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) Load_Function("glGetNamedBufferSubData"); 
	if(glGetNamedBufferSubData != nullptr) count++;
	glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) Load_Function("glCreateFramebuffers"); 
	if(glCreateFramebuffers != nullptr) count++;
	glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) Load_Function("glNamedFramebufferRenderbuffer"); 
	if(glNamedFramebufferRenderbuffer != nullptr) count++;
	glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) Load_Function("glNamedFramebufferParameteri"); 
	if(glNamedFramebufferParameteri != nullptr) count++;
	glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) Load_Function("glNamedFramebufferTexture"); 
	if(glNamedFramebufferTexture != nullptr) count++;
	glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) Load_Function("glNamedFramebufferTextureLayer"); 
	if(glNamedFramebufferTextureLayer != nullptr) count++;
	glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) Load_Function("glNamedFramebufferDrawBuffer"); 
	if(glNamedFramebufferDrawBuffer != nullptr) count++;
	glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) Load_Function("glNamedFramebufferDrawBuffers"); 
	if(glNamedFramebufferDrawBuffers != nullptr) count++;
	glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) Load_Function("glNamedFramebufferReadBuffer"); 
	if(glNamedFramebufferReadBuffer != nullptr) count++;
	glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) Load_Function("glInvalidateNamedFramebufferData"); 
	if(glInvalidateNamedFramebufferData != nullptr) count++;
	glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) Load_Function("glInvalidateNamedFramebufferSubData"); 
	if(glInvalidateNamedFramebufferSubData != nullptr) count++;
	glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) Load_Function("glClearNamedFramebufferiv"); 
	if(glClearNamedFramebufferiv != nullptr) count++;
	glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) Load_Function("glClearNamedFramebufferuiv"); 
	if(glClearNamedFramebufferuiv != nullptr) count++;
	glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) Load_Function("glClearNamedFramebufferfv"); 
	if(glClearNamedFramebufferfv != nullptr) count++;
	glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) Load_Function("glClearNamedFramebufferfi"); 
	if(glClearNamedFramebufferfi != nullptr) count++;
	glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) Load_Function("glBlitNamedFramebuffer"); 
	if(glBlitNamedFramebuffer != nullptr) count++;
	glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) Load_Function("glCheckNamedFramebufferStatus"); 
	if(glCheckNamedFramebufferStatus != nullptr) count++;
	glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) Load_Function("glGetNamedFramebufferParameteriv"); 
	if(glGetNamedFramebufferParameteriv != nullptr) count++;
	glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) Load_Function("glGetNamedFramebufferAttachmentParameteriv"); 
	if(glGetNamedFramebufferAttachmentParameteriv != nullptr) count++;
	glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) Load_Function("glCreateRenderbuffers"); 
	if(glCreateRenderbuffers != nullptr) count++;
	glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) Load_Function("glNamedRenderbufferStorage"); 
	if(glNamedRenderbufferStorage != nullptr) count++;
	glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) Load_Function("glNamedRenderbufferStorageMultisample"); 
	if(glNamedRenderbufferStorageMultisample != nullptr) count++;
	glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) Load_Function("glGetNamedRenderbufferParameteriv"); 
	if(glGetNamedRenderbufferParameteriv != nullptr) count++;
	glCreateTextures = (PFNGLCREATETEXTURESPROC) Load_Function("glCreateTextures"); 
	if(glCreateTextures != nullptr) count++;
	glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) Load_Function("glTextureBuffer"); 
	if(glTextureBuffer != nullptr) count++;
	glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) Load_Function("glTextureBufferRange"); 
	if(glTextureBufferRange != nullptr) count++;
	glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) Load_Function("glTextureStorage1D"); 
	if(glTextureStorage1D != nullptr) count++;
	glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) Load_Function("glTextureStorage2D"); 
	if(glTextureStorage2D != nullptr) count++;
	glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) Load_Function("glTextureStorage3D"); 
	if(glTextureStorage3D != nullptr) count++;
	glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) Load_Function("glTextureStorage2DMultisample"); 
	if(glTextureStorage2DMultisample != nullptr) count++;
	glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) Load_Function("glTextureStorage3DMultisample"); 
	if(glTextureStorage3DMultisample != nullptr) count++;
	glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) Load_Function("glTextureSubImage1D"); 
	if(glTextureSubImage1D != nullptr) count++;
	glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) Load_Function("glTextureSubImage2D"); 
	if(glTextureSubImage2D != nullptr) count++;
	glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) Load_Function("glTextureSubImage3D"); 
	if(glTextureSubImage3D != nullptr) count++;
	glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) Load_Function("glCompressedTextureSubImage1D"); 
	if(glCompressedTextureSubImage1D != nullptr) count++;
	glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) Load_Function("glCompressedTextureSubImage2D"); 
	if(glCompressedTextureSubImage2D != nullptr) count++;
	glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) Load_Function("glCompressedTextureSubImage3D"); 
	if(glCompressedTextureSubImage3D != nullptr) count++;
	glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) Load_Function("glCopyTextureSubImage1D"); 
	if(glCopyTextureSubImage1D != nullptr) count++;
	glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) Load_Function("glCopyTextureSubImage2D"); 
	if(glCopyTextureSubImage2D != nullptr) count++;
	glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) Load_Function("glCopyTextureSubImage3D"); 
	if(glCopyTextureSubImage3D != nullptr) count++;
	glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) Load_Function("glTextureParameterf"); 
	if(glTextureParameterf != nullptr) count++;
	glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) Load_Function("glTextureParameterfv"); 
	if(glTextureParameterfv != nullptr) count++;
	glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) Load_Function("glTextureParameteri"); 
	if(glTextureParameteri != nullptr) count++;
	glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) Load_Function("glTextureParameterIiv"); 
	if(glTextureParameterIiv != nullptr) count++;
	glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) Load_Function("glTextureParameterIuiv"); 
	if(glTextureParameterIuiv != nullptr) count++;
	glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) Load_Function("glTextureParameteriv"); 
	if(glTextureParameteriv != nullptr) count++;
	glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) Load_Function("glGenerateTextureMipmap"); 
	if(glGenerateTextureMipmap != nullptr) count++;
	glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) Load_Function("glBindTextureUnit"); 
	if(glBindTextureUnit != nullptr) count++;
	glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) Load_Function("glGetTextureImage"); 
	if(glGetTextureImage != nullptr) count++;
	glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) Load_Function("glGetCompressedTextureImage"); 
	if(glGetCompressedTextureImage != nullptr) count++;
	glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) Load_Function("glGetTextureLevelParameterfv"); 
	if(glGetTextureLevelParameterfv != nullptr) count++;
	glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) Load_Function("glGetTextureLevelParameteriv"); 
	if(glGetTextureLevelParameteriv != nullptr) count++;
	glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) Load_Function("glGetTextureParameterfv"); 
	if(glGetTextureParameterfv != nullptr) count++;
	glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) Load_Function("glGetTextureParameterIiv"); 
	if(glGetTextureParameterIiv != nullptr) count++;
	glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) Load_Function("glGetTextureParameterIuiv"); 
	if(glGetTextureParameterIuiv != nullptr) count++;
	glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) Load_Function("glGetTextureParameteriv"); 
	if(glGetTextureParameteriv != nullptr) count++;
	glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) Load_Function("glCreateVertexArrays"); 
	if(glCreateVertexArrays != nullptr) count++;
	glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) Load_Function("glDisableVertexArrayAttrib"); 
	if(glDisableVertexArrayAttrib != nullptr) count++;
	glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) Load_Function("glEnableVertexArrayAttrib"); 
	if(glEnableVertexArrayAttrib != nullptr) count++;
	glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) Load_Function("glVertexArrayElementBuffer"); 
	if(glVertexArrayElementBuffer != nullptr) count++;
	glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) Load_Function("glVertexArrayVertexBuffer"); 
	if(glVertexArrayVertexBuffer != nullptr) count++;
	glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) Load_Function("glVertexArrayVertexBuffers"); 
	if(glVertexArrayVertexBuffers != nullptr) count++;
	glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) Load_Function("glVertexArrayAttribBinding"); 
	if(glVertexArrayAttribBinding != nullptr) count++;
	glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) Load_Function("glVertexArrayAttribFormat"); 
	if(glVertexArrayAttribFormat != nullptr) count++;
	glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) Load_Function("glVertexArrayAttribIFormat"); 
	if(glVertexArrayAttribIFormat != nullptr) count++;
	glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) Load_Function("glVertexArrayAttribLFormat"); 
	if(glVertexArrayAttribLFormat != nullptr) count++;
	glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) Load_Function("glVertexArrayBindingDivisor"); 
	if(glVertexArrayBindingDivisor != nullptr) count++;
	glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) Load_Function("glGetVertexArrayiv"); 
	if(glGetVertexArrayiv != nullptr) count++;
	glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) Load_Function("glGetVertexArrayIndexediv"); 
	if(glGetVertexArrayIndexediv != nullptr) count++;
	glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) Load_Function("glGetVertexArrayIndexed64iv"); 
	if(glGetVertexArrayIndexed64iv != nullptr) count++;
	glCreateSamplers = (PFNGLCREATESAMPLERSPROC) Load_Function("glCreateSamplers"); 
	if(glCreateSamplers != nullptr) count++;
	glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) Load_Function("glCreateProgramPipelines"); 
	if(glCreateProgramPipelines != nullptr) count++;
	glCreateQueries = (PFNGLCREATEQUERIESPROC) Load_Function("glCreateQueries"); 
	if(glCreateQueries != nullptr) count++;
	glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) Load_Function("glGetQueryBufferObjecti64v"); 
	if(glGetQueryBufferObjecti64v != nullptr) count++;
	glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) Load_Function("glGetQueryBufferObjectiv"); 
	if(glGetQueryBufferObjectiv != nullptr) count++;
	glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) Load_Function("glGetQueryBufferObjectui64v"); 
	if(glGetQueryBufferObjectui64v != nullptr) count++;
	glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) Load_Function("glGetQueryBufferObjectuiv"); 
	if(glGetQueryBufferObjectuiv != nullptr) count++;
	glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) Load_Function("glMemoryBarrierByRegion"); 
	if(glMemoryBarrierByRegion != nullptr) count++;
	glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) Load_Function("glGetTextureSubImage"); 
	if(glGetTextureSubImage != nullptr) count++;
	glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) Load_Function("glGetCompressedTextureSubImage"); 
	if(glGetCompressedTextureSubImage != nullptr) count++;
	glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) Load_Function("glGetGraphicsResetStatus"); 
	if(glGetGraphicsResetStatus != nullptr) count++;
	glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC) Load_Function("glGetnCompressedTexImage"); 
	if(glGetnCompressedTexImage != nullptr) count++;
	glGetnTexImage = (PFNGLGETNTEXIMAGEPROC) Load_Function("glGetnTexImage"); 
	if(glGetnTexImage != nullptr) count++;
	glGetnUniformdv = (PFNGLGETNUNIFORMDVPROC) Load_Function("glGetnUniformdv"); 
	if(glGetnUniformdv != nullptr) count++;
	glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) Load_Function("glGetnUniformfv"); 
	if(glGetnUniformfv != nullptr) count++;
	glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) Load_Function("glGetnUniformiv"); 
	if(glGetnUniformiv != nullptr) count++;
	glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) Load_Function("glGetnUniformuiv"); 
	if(glGetnUniformuiv != nullptr) count++;
	glReadnPixels = (PFNGLREADNPIXELSPROC) Load_Function("glReadnPixels"); 
	if(glReadnPixels != nullptr) count++;
	glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) Load_Function("glTextureBarrier"); 
	if(glTextureBarrier != nullptr) count++;
	glSpecializeShader = (PFNGLSPECIALIZESHADERPROC) Load_Function("glSpecializeShader"); 
	if(glSpecializeShader != nullptr) count++;
	glMultiDrawArraysIndirectCount = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) Load_Function("glMultiDrawArraysIndirectCount"); 
	if(glMultiDrawArraysIndirectCount != nullptr) count++;
	glMultiDrawElementsIndirectCount = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) Load_Function("glMultiDrawElementsIndirectCount"); 
	if(glMultiDrawElementsIndirectCount != nullptr) count++;
	glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC) Load_Function("glPolygonOffsetClamp"); 
	if(glPolygonOffsetClamp != nullptr) count++;
	glPrimitiveBoundingBoxARB = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) Load_Function("glPrimitiveBoundingBoxARB"); 
	if(glPrimitiveBoundingBoxARB != nullptr) count++;
	glGetTextureHandleARB = (PFNGLGETTEXTUREHANDLEARBPROC) Load_Function("glGetTextureHandleARB"); 
	if(glGetTextureHandleARB != nullptr) count++;
	glGetTextureSamplerHandleARB = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) Load_Function("glGetTextureSamplerHandleARB"); 
	if(glGetTextureSamplerHandleARB != nullptr) count++;
	glMakeTextureHandleResidentARB = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) Load_Function("glMakeTextureHandleResidentARB"); 
	if(glMakeTextureHandleResidentARB != nullptr) count++;
	glMakeTextureHandleNonResidentARB = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) Load_Function("glMakeTextureHandleNonResidentARB"); 
	if(glMakeTextureHandleNonResidentARB != nullptr) count++;
	glGetImageHandleARB = (PFNGLGETIMAGEHANDLEARBPROC) Load_Function("glGetImageHandleARB"); 
	if(glGetImageHandleARB != nullptr) count++;
	glMakeImageHandleResidentARB = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) Load_Function("glMakeImageHandleResidentARB"); 
	if(glMakeImageHandleResidentARB != nullptr) count++;
	glMakeImageHandleNonResidentARB = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) Load_Function("glMakeImageHandleNonResidentARB"); 
	if(glMakeImageHandleNonResidentARB != nullptr) count++;
	glUniformHandleui64ARB = (PFNGLUNIFORMHANDLEUI64ARBPROC) Load_Function("glUniformHandleui64ARB"); 
	if(glUniformHandleui64ARB != nullptr) count++;
	glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC) Load_Function("glUniformHandleui64vARB"); 
	if(glUniformHandleui64vARB != nullptr) count++;
	glProgramUniformHandleui64ARB = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) Load_Function("glProgramUniformHandleui64ARB"); 
	if(glProgramUniformHandleui64ARB != nullptr) count++;
	glProgramUniformHandleui64vARB = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) Load_Function("glProgramUniformHandleui64vARB"); 
	if(glProgramUniformHandleui64vARB != nullptr) count++;
	glIsTextureHandleResidentARB = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) Load_Function("glIsTextureHandleResidentARB"); 
	if(glIsTextureHandleResidentARB != nullptr) count++;
	glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC) Load_Function("glIsImageHandleResidentARB"); 
	if(glIsImageHandleResidentARB != nullptr) count++;
	glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC) Load_Function("glVertexAttribL1ui64ARB"); 
	if(glVertexAttribL1ui64ARB != nullptr) count++;
	glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC) Load_Function("glVertexAttribL1ui64vARB"); 
	if(glVertexAttribL1ui64vARB != nullptr) count++;
	glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) Load_Function("glGetVertexAttribLui64vARB"); 
	if(glGetVertexAttribLui64vARB != nullptr) count++;
	glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC) Load_Function("glCreateSyncFromCLeventARB"); 
	if(glCreateSyncFromCLeventARB != nullptr) count++;
	glDispatchComputeGroupSizeARB = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) Load_Function("glDispatchComputeGroupSizeARB"); 
	if(glDispatchComputeGroupSizeARB != nullptr) count++;
	glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC) Load_Function("glDebugMessageControlARB"); 
	if(glDebugMessageControlARB != nullptr) count++;
	glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC) Load_Function("glDebugMessageInsertARB"); 
	if(glDebugMessageInsertARB != nullptr) count++;
	glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC) Load_Function("glDebugMessageCallbackARB"); 
	if(glDebugMessageCallbackARB != nullptr) count++;
	glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC) Load_Function("glGetDebugMessageLogARB"); 
	if(glGetDebugMessageLogARB != nullptr) count++;
	glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC) Load_Function("glBlendEquationiARB"); 
	if(glBlendEquationiARB != nullptr) count++;
	glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) Load_Function("glBlendEquationSeparateiARB"); 
	if(glBlendEquationSeparateiARB != nullptr) count++;
	glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC) Load_Function("glBlendFunciARB"); 
	if(glBlendFunciARB != nullptr) count++;
	glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC) Load_Function("glBlendFuncSeparateiARB"); 
	if(glBlendFuncSeparateiARB != nullptr) count++;
	glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC) Load_Function("glDrawArraysInstancedARB"); 
	if(glDrawArraysInstancedARB != nullptr) count++;
	glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) Load_Function("glDrawElementsInstancedARB"); 
	if(glDrawElementsInstancedARB != nullptr) count++;
	glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC) Load_Function("glProgramParameteriARB"); 
	if(glProgramParameteriARB != nullptr) count++;
	glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC) Load_Function("glFramebufferTextureARB"); 
	if(glFramebufferTextureARB != nullptr) count++;
	glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) Load_Function("glFramebufferTextureLayerARB"); 
	if(glFramebufferTextureLayerARB != nullptr) count++;
	glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) Load_Function("glFramebufferTextureFaceARB"); 
	if(glFramebufferTextureFaceARB != nullptr) count++;
	glSpecializeShaderARB = (PFNGLSPECIALIZESHADERARBPROC) Load_Function("glSpecializeShaderARB"); 
	if(glSpecializeShaderARB != nullptr) count++;
	glUniform1i64ARB = (PFNGLUNIFORM1I64ARBPROC) Load_Function("glUniform1i64ARB"); 
	if(glUniform1i64ARB != nullptr) count++;
	glUniform2i64ARB = (PFNGLUNIFORM2I64ARBPROC) Load_Function("glUniform2i64ARB"); 
	if(glUniform2i64ARB != nullptr) count++;
	glUniform3i64ARB = (PFNGLUNIFORM3I64ARBPROC) Load_Function("glUniform3i64ARB"); 
	if(glUniform3i64ARB != nullptr) count++;
	glUniform4i64ARB = (PFNGLUNIFORM4I64ARBPROC) Load_Function("glUniform4i64ARB"); 
	if(glUniform4i64ARB != nullptr) count++;
	glUniform1i64vARB = (PFNGLUNIFORM1I64VARBPROC) Load_Function("glUniform1i64vARB"); 
	if(glUniform1i64vARB != nullptr) count++;
	glUniform2i64vARB = (PFNGLUNIFORM2I64VARBPROC) Load_Function("glUniform2i64vARB"); 
	if(glUniform2i64vARB != nullptr) count++;
	glUniform3i64vARB = (PFNGLUNIFORM3I64VARBPROC) Load_Function("glUniform3i64vARB"); 
	if(glUniform3i64vARB != nullptr) count++;
	glUniform4i64vARB = (PFNGLUNIFORM4I64VARBPROC) Load_Function("glUniform4i64vARB"); 
	if(glUniform4i64vARB != nullptr) count++;
	glUniform1ui64ARB = (PFNGLUNIFORM1UI64ARBPROC) Load_Function("glUniform1ui64ARB"); 
	if(glUniform1ui64ARB != nullptr) count++;
	glUniform2ui64ARB = (PFNGLUNIFORM2UI64ARBPROC) Load_Function("glUniform2ui64ARB"); 
	if(glUniform2ui64ARB != nullptr) count++;
	glUniform3ui64ARB = (PFNGLUNIFORM3UI64ARBPROC) Load_Function("glUniform3ui64ARB"); 
	if(glUniform3ui64ARB != nullptr) count++;
	glUniform4ui64ARB = (PFNGLUNIFORM4UI64ARBPROC) Load_Function("glUniform4ui64ARB"); 
	if(glUniform4ui64ARB != nullptr) count++;
	glUniform1ui64vARB = (PFNGLUNIFORM1UI64VARBPROC) Load_Function("glUniform1ui64vARB"); 
	if(glUniform1ui64vARB != nullptr) count++;
	glUniform2ui64vARB = (PFNGLUNIFORM2UI64VARBPROC) Load_Function("glUniform2ui64vARB"); 
	if(glUniform2ui64vARB != nullptr) count++;
	glUniform3ui64vARB = (PFNGLUNIFORM3UI64VARBPROC) Load_Function("glUniform3ui64vARB"); 
	if(glUniform3ui64vARB != nullptr) count++;
	glUniform4ui64vARB = (PFNGLUNIFORM4UI64VARBPROC) Load_Function("glUniform4ui64vARB"); 
	if(glUniform4ui64vARB != nullptr) count++;
	glGetUniformi64vARB = (PFNGLGETUNIFORMI64VARBPROC) Load_Function("glGetUniformi64vARB"); 
	if(glGetUniformi64vARB != nullptr) count++;
	glGetUniformui64vARB = (PFNGLGETUNIFORMUI64VARBPROC) Load_Function("glGetUniformui64vARB"); 
	if(glGetUniformui64vARB != nullptr) count++;
	glGetnUniformi64vARB = (PFNGLGETNUNIFORMI64VARBPROC) Load_Function("glGetnUniformi64vARB"); 
	if(glGetnUniformi64vARB != nullptr) count++;
	glGetnUniformui64vARB = (PFNGLGETNUNIFORMUI64VARBPROC) Load_Function("glGetnUniformui64vARB"); 
	if(glGetnUniformui64vARB != nullptr) count++;
	glProgramUniform1i64ARB = (PFNGLPROGRAMUNIFORM1I64ARBPROC) Load_Function("glProgramUniform1i64ARB"); 
	if(glProgramUniform1i64ARB != nullptr) count++;
	glProgramUniform2i64ARB = (PFNGLPROGRAMUNIFORM2I64ARBPROC) Load_Function("glProgramUniform2i64ARB"); 
	if(glProgramUniform2i64ARB != nullptr) count++;
	glProgramUniform3i64ARB = (PFNGLPROGRAMUNIFORM3I64ARBPROC) Load_Function("glProgramUniform3i64ARB"); 
	if(glProgramUniform3i64ARB != nullptr) count++;
	glProgramUniform4i64ARB = (PFNGLPROGRAMUNIFORM4I64ARBPROC) Load_Function("glProgramUniform4i64ARB"); 
	if(glProgramUniform4i64ARB != nullptr) count++;
	glProgramUniform1i64vARB = (PFNGLPROGRAMUNIFORM1I64VARBPROC) Load_Function("glProgramUniform1i64vARB"); 
	if(glProgramUniform1i64vARB != nullptr) count++;
	glProgramUniform2i64vARB = (PFNGLPROGRAMUNIFORM2I64VARBPROC) Load_Function("glProgramUniform2i64vARB"); 
	if(glProgramUniform2i64vARB != nullptr) count++;
	glProgramUniform3i64vARB = (PFNGLPROGRAMUNIFORM3I64VARBPROC) Load_Function("glProgramUniform3i64vARB"); 
	if(glProgramUniform3i64vARB != nullptr) count++;
	glProgramUniform4i64vARB = (PFNGLPROGRAMUNIFORM4I64VARBPROC) Load_Function("glProgramUniform4i64vARB"); 
	if(glProgramUniform4i64vARB != nullptr) count++;
	glProgramUniform1ui64ARB = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) Load_Function("glProgramUniform1ui64ARB"); 
	if(glProgramUniform1ui64ARB != nullptr) count++;
	glProgramUniform2ui64ARB = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) Load_Function("glProgramUniform2ui64ARB"); 
	if(glProgramUniform2ui64ARB != nullptr) count++;
	glProgramUniform3ui64ARB = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) Load_Function("glProgramUniform3ui64ARB"); 
	if(glProgramUniform3ui64ARB != nullptr) count++;
	glProgramUniform4ui64ARB = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) Load_Function("glProgramUniform4ui64ARB"); 
	if(glProgramUniform4ui64ARB != nullptr) count++;
	glProgramUniform1ui64vARB = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) Load_Function("glProgramUniform1ui64vARB"); 
	if(glProgramUniform1ui64vARB != nullptr) count++;
	glProgramUniform2ui64vARB = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) Load_Function("glProgramUniform2ui64vARB"); 
	if(glProgramUniform2ui64vARB != nullptr) count++;
	glProgramUniform3ui64vARB = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) Load_Function("glProgramUniform3ui64vARB"); 
	if(glProgramUniform3ui64vARB != nullptr) count++;
	glProgramUniform4ui64vARB = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) Load_Function("glProgramUniform4ui64vARB"); 
	if(glProgramUniform4ui64vARB != nullptr) count++;
	glMultiDrawArraysIndirectCountARB = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) Load_Function("glMultiDrawArraysIndirectCountARB"); 
	if(glMultiDrawArraysIndirectCountARB != nullptr) count++;
	glMultiDrawElementsIndirectCountARB = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) Load_Function("glMultiDrawElementsIndirectCountARB"); 
	if(glMultiDrawElementsIndirectCountARB != nullptr) count++;
	glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC) Load_Function("glVertexAttribDivisorARB"); 
	if(glVertexAttribDivisorARB != nullptr) count++;
	glMaxShaderCompilerThreadsARB = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) Load_Function("glMaxShaderCompilerThreadsARB"); 
	if(glMaxShaderCompilerThreadsARB != nullptr) count++;
	glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) Load_Function("glGetGraphicsResetStatusARB"); 
	if(glGetGraphicsResetStatusARB != nullptr) count++;
	glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC) Load_Function("glGetnTexImageARB"); 
	if(glGetnTexImageARB != nullptr) count++;
	glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC) Load_Function("glReadnPixelsARB"); 
	if(glReadnPixelsARB != nullptr) count++;
	glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) Load_Function("glGetnCompressedTexImageARB"); 
	if(glGetnCompressedTexImageARB != nullptr) count++;
	glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC) Load_Function("glGetnUniformfvARB"); 
	if(glGetnUniformfvARB != nullptr) count++;
	glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC) Load_Function("glGetnUniformivARB"); 
	if(glGetnUniformivARB != nullptr) count++;
	glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC) Load_Function("glGetnUniformuivARB"); 
	if(glGetnUniformuivARB != nullptr) count++;
	glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC) Load_Function("glGetnUniformdvARB"); 
	if(glGetnUniformdvARB != nullptr) count++;
	glFramebufferSampleLocationsfvARB = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) Load_Function("glFramebufferSampleLocationsfvARB"); 
	if(glFramebufferSampleLocationsfvARB != nullptr) count++;
	glNamedFramebufferSampleLocationsfvARB = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) Load_Function("glNamedFramebufferSampleLocationsfvARB"); 
	if(glNamedFramebufferSampleLocationsfvARB != nullptr) count++;
	glEvaluateDepthValuesARB = (PFNGLEVALUATEDEPTHVALUESARBPROC) Load_Function("glEvaluateDepthValuesARB"); 
	if(glEvaluateDepthValuesARB != nullptr) count++;
	glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC) Load_Function("glMinSampleShadingARB"); 
	if(glMinSampleShadingARB != nullptr) count++;
	glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC) Load_Function("glNamedStringARB"); 
	if(glNamedStringARB != nullptr) count++;
	glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC) Load_Function("glDeleteNamedStringARB"); 
	if(glDeleteNamedStringARB != nullptr) count++;
	glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC) Load_Function("glCompileShaderIncludeARB"); 
	if(glCompileShaderIncludeARB != nullptr) count++;
	glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC) Load_Function("glIsNamedStringARB"); 
	if(glIsNamedStringARB != nullptr) count++;
	glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC) Load_Function("glGetNamedStringARB"); 
	if(glGetNamedStringARB != nullptr) count++;
	glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC) Load_Function("glGetNamedStringivARB"); 
	if(glGetNamedStringivARB != nullptr) count++;
	glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC) Load_Function("glBufferPageCommitmentARB"); 
	if(glBufferPageCommitmentARB != nullptr) count++;
	glNamedBufferPageCommitmentEXT = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) Load_Function("glNamedBufferPageCommitmentEXT"); 
	if(glNamedBufferPageCommitmentEXT != nullptr) count++;
	glNamedBufferPageCommitmentARB = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) Load_Function("glNamedBufferPageCommitmentARB"); 
	if(glNamedBufferPageCommitmentARB != nullptr) count++;
	glTexPageCommitmentARB = (PFNGLTEXPAGECOMMITMENTARBPROC) Load_Function("glTexPageCommitmentARB"); 
	if(glTexPageCommitmentARB != nullptr) count++;
	glTexBufferARB = (PFNGLTEXBUFFERARBPROC) Load_Function("glTexBufferARB"); 
	if(glTexBufferARB != nullptr) count++;
	glDepthRangeArraydvNV = (PFNGLDEPTHRANGEARRAYDVNVPROC) Load_Function("glDepthRangeArraydvNV"); 
	if(glDepthRangeArraydvNV != nullptr) count++;
	glDepthRangeIndexeddNV = (PFNGLDEPTHRANGEINDEXEDDNVPROC) Load_Function("glDepthRangeIndexeddNV"); 
	if(glDepthRangeIndexeddNV != nullptr) count++;
	glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC) Load_Function("glBlendBarrierKHR"); 
	if(glBlendBarrierKHR != nullptr) count++;
	glMaxShaderCompilerThreadsKHR = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) Load_Function("glMaxShaderCompilerThreadsKHR"); 
	if(glMaxShaderCompilerThreadsKHR != nullptr) count++;
	glRenderbufferStorageMultisampleAdvancedAMD = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) Load_Function("glRenderbufferStorageMultisampleAdvancedAMD"); 
	if(glRenderbufferStorageMultisampleAdvancedAMD != nullptr) count++;
	glNamedRenderbufferStorageMultisampleAdvancedAMD = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) Load_Function("glNamedRenderbufferStorageMultisampleAdvancedAMD"); 
	if(glNamedRenderbufferStorageMultisampleAdvancedAMD != nullptr) count++;
	glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC) Load_Function("glGetPerfMonitorGroupsAMD"); 
	if(glGetPerfMonitorGroupsAMD != nullptr) count++;
	glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) Load_Function("glGetPerfMonitorCountersAMD"); 
	if(glGetPerfMonitorCountersAMD != nullptr) count++;
	glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) Load_Function("glGetPerfMonitorGroupStringAMD"); 
	if(glGetPerfMonitorGroupStringAMD != nullptr) count++;
	glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) Load_Function("glGetPerfMonitorCounterStringAMD"); 
	if(glGetPerfMonitorCounterStringAMD != nullptr) count++;
	glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) Load_Function("glGetPerfMonitorCounterInfoAMD"); 
	if(glGetPerfMonitorCounterInfoAMD != nullptr) count++;
	glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC) Load_Function("glGenPerfMonitorsAMD"); 
	if(glGenPerfMonitorsAMD != nullptr) count++;
	glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC) Load_Function("glDeletePerfMonitorsAMD"); 
	if(glDeletePerfMonitorsAMD != nullptr) count++;
	glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) Load_Function("glSelectPerfMonitorCountersAMD"); 
	if(glSelectPerfMonitorCountersAMD != nullptr) count++;
	glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC) Load_Function("glBeginPerfMonitorAMD"); 
	if(glBeginPerfMonitorAMD != nullptr) count++;
	glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC) Load_Function("glEndPerfMonitorAMD"); 
	if(glEndPerfMonitorAMD != nullptr) count++;
	glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) Load_Function("glGetPerfMonitorCounterDataAMD"); 
	if(glGetPerfMonitorCounterDataAMD != nullptr) count++;
	glEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) Load_Function("glEGLImageTargetTexStorageEXT"); 
	if(glEGLImageTargetTexStorageEXT != nullptr) count++;
	glEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) Load_Function("glEGLImageTargetTextureStorageEXT"); 
	if(glEGLImageTargetTextureStorageEXT != nullptr) count++;
	glLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC) Load_Function("glLabelObjectEXT"); 
	if(glLabelObjectEXT != nullptr) count++;
	glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC) Load_Function("glGetObjectLabelEXT"); 
	if(glGetObjectLabelEXT != nullptr) count++;
	glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC) Load_Function("glInsertEventMarkerEXT"); 
	if(glInsertEventMarkerEXT != nullptr) count++;
	glPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC) Load_Function("glPushGroupMarkerEXT"); 
	if(glPushGroupMarkerEXT != nullptr) count++;
	glPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC) Load_Function("glPopGroupMarkerEXT"); 
	if(glPopGroupMarkerEXT != nullptr) count++;
	glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) Load_Function("glMatrixLoadfEXT"); 
	if(glMatrixLoadfEXT != nullptr) count++;
	glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) Load_Function("glMatrixLoaddEXT"); 
	if(glMatrixLoaddEXT != nullptr) count++;
	glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) Load_Function("glMatrixMultfEXT"); 
	if(glMatrixMultfEXT != nullptr) count++;
	glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) Load_Function("glMatrixMultdEXT"); 
	if(glMatrixMultdEXT != nullptr) count++;
	glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) Load_Function("glMatrixLoadIdentityEXT"); 
	if(glMatrixLoadIdentityEXT != nullptr) count++;
	glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) Load_Function("glMatrixRotatefEXT"); 
	if(glMatrixRotatefEXT != nullptr) count++;
	glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) Load_Function("glMatrixRotatedEXT"); 
	if(glMatrixRotatedEXT != nullptr) count++;
	glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) Load_Function("glMatrixScalefEXT"); 
	if(glMatrixScalefEXT != nullptr) count++;
	glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) Load_Function("glMatrixScaledEXT"); 
	if(glMatrixScaledEXT != nullptr) count++;
	glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) Load_Function("glMatrixTranslatefEXT"); 
	if(glMatrixTranslatefEXT != nullptr) count++;
	glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) Load_Function("glMatrixTranslatedEXT"); 
	if(glMatrixTranslatedEXT != nullptr) count++;
	glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) Load_Function("glMatrixFrustumEXT"); 
	if(glMatrixFrustumEXT != nullptr) count++;
	glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) Load_Function("glMatrixOrthoEXT"); 
	if(glMatrixOrthoEXT != nullptr) count++;
	glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) Load_Function("glMatrixPopEXT"); 
	if(glMatrixPopEXT != nullptr) count++;
	glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) Load_Function("glMatrixPushEXT"); 
	if(glMatrixPushEXT != nullptr) count++;
	glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) Load_Function("glClientAttribDefaultEXT"); 
	if(glClientAttribDefaultEXT != nullptr) count++;
	glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) Load_Function("glPushClientAttribDefaultEXT"); 
	if(glPushClientAttribDefaultEXT != nullptr) count++;
	glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC) Load_Function("glTextureParameterfEXT"); 
	if(glTextureParameterfEXT != nullptr) count++;
	glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC) Load_Function("glTextureParameterfvEXT"); 
	if(glTextureParameterfvEXT != nullptr) count++;
	glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC) Load_Function("glTextureParameteriEXT"); 
	if(glTextureParameteriEXT != nullptr) count++;
	glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC) Load_Function("glTextureParameterivEXT"); 
	if(glTextureParameterivEXT != nullptr) count++;
	glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC) Load_Function("glTextureImage1DEXT"); 
	if(glTextureImage1DEXT != nullptr) count++;
	glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC) Load_Function("glTextureImage2DEXT"); 
	if(glTextureImage2DEXT != nullptr) count++;
	glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC) Load_Function("glTextureSubImage1DEXT"); 
	if(glTextureSubImage1DEXT != nullptr) count++;
	glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC) Load_Function("glTextureSubImage2DEXT"); 
	if(glTextureSubImage2DEXT != nullptr) count++;
	glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) Load_Function("glCopyTextureImage1DEXT"); 
	if(glCopyTextureImage1DEXT != nullptr) count++;
	glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) Load_Function("glCopyTextureImage2DEXT"); 
	if(glCopyTextureImage2DEXT != nullptr) count++;
	glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) Load_Function("glCopyTextureSubImage1DEXT"); 
	if(glCopyTextureSubImage1DEXT != nullptr) count++;
	glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) Load_Function("glCopyTextureSubImage2DEXT"); 
	if(glCopyTextureSubImage2DEXT != nullptr) count++;
	glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC) Load_Function("glGetTextureImageEXT"); 
	if(glGetTextureImageEXT != nullptr) count++;
	glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) Load_Function("glGetTextureParameterfvEXT"); 
	if(glGetTextureParameterfvEXT != nullptr) count++;
	glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) Load_Function("glGetTextureParameterivEXT"); 
	if(glGetTextureParameterivEXT != nullptr) count++;
	glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) Load_Function("glGetTextureLevelParameterfvEXT"); 
	if(glGetTextureLevelParameterfvEXT != nullptr) count++;
	glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) Load_Function("glGetTextureLevelParameterivEXT"); 
	if(glGetTextureLevelParameterivEXT != nullptr) count++;
	glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC) Load_Function("glTextureImage3DEXT"); 
	if(glTextureImage3DEXT != nullptr) count++;
	glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC) Load_Function("glTextureSubImage3DEXT"); 
	if(glTextureSubImage3DEXT != nullptr) count++;
	glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) Load_Function("glCopyTextureSubImage3DEXT"); 
	if(glCopyTextureSubImage3DEXT != nullptr) count++;
	glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC) Load_Function("glBindMultiTextureEXT"); 
	if(glBindMultiTextureEXT != nullptr) count++;
	glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC) Load_Function("glMultiTexCoordPointerEXT"); 
	if(glMultiTexCoordPointerEXT != nullptr) count++;
	glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC) Load_Function("glMultiTexEnvfEXT"); 
	if(glMultiTexEnvfEXT != nullptr) count++;
	glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC) Load_Function("glMultiTexEnvfvEXT"); 
	if(glMultiTexEnvfvEXT != nullptr) count++;
	glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC) Load_Function("glMultiTexEnviEXT"); 
	if(glMultiTexEnviEXT != nullptr) count++;
	glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC) Load_Function("glMultiTexEnvivEXT"); 
	if(glMultiTexEnvivEXT != nullptr) count++;
	glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC) Load_Function("glMultiTexGendEXT"); 
	if(glMultiTexGendEXT != nullptr) count++;
	glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC) Load_Function("glMultiTexGendvEXT"); 
	if(glMultiTexGendvEXT != nullptr) count++;
	glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC) Load_Function("glMultiTexGenfEXT"); 
	if(glMultiTexGenfEXT != nullptr) count++;
	glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC) Load_Function("glMultiTexGenfvEXT"); 
	if(glMultiTexGenfvEXT != nullptr) count++;
	glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC) Load_Function("glMultiTexGeniEXT"); 
	if(glMultiTexGeniEXT != nullptr) count++;
	glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC) Load_Function("glMultiTexGenivEXT"); 
	if(glMultiTexGenivEXT != nullptr) count++;
	glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC) Load_Function("glGetMultiTexEnvfvEXT"); 
	if(glGetMultiTexEnvfvEXT != nullptr) count++;
	glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC) Load_Function("glGetMultiTexEnvivEXT"); 
	if(glGetMultiTexEnvivEXT != nullptr) count++;
	glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC) Load_Function("glGetMultiTexGendvEXT"); 
	if(glGetMultiTexGendvEXT != nullptr) count++;
	glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC) Load_Function("glGetMultiTexGenfvEXT"); 
	if(glGetMultiTexGenfvEXT != nullptr) count++;
	glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC) Load_Function("glGetMultiTexGenivEXT"); 
	if(glGetMultiTexGenivEXT != nullptr) count++;
	glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC) Load_Function("glMultiTexParameteriEXT"); 
	if(glMultiTexParameteriEXT != nullptr) count++;
	glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC) Load_Function("glMultiTexParameterivEXT"); 
	if(glMultiTexParameterivEXT != nullptr) count++;
	glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC) Load_Function("glMultiTexParameterfEXT"); 
	if(glMultiTexParameterfEXT != nullptr) count++;
	glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC) Load_Function("glMultiTexParameterfvEXT"); 
	if(glMultiTexParameterfvEXT != nullptr) count++;
	glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC) Load_Function("glMultiTexImage1DEXT"); 
	if(glMultiTexImage1DEXT != nullptr) count++;
	glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC) Load_Function("glMultiTexImage2DEXT"); 
	if(glMultiTexImage2DEXT != nullptr) count++;
	glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) Load_Function("glMultiTexSubImage1DEXT"); 
	if(glMultiTexSubImage1DEXT != nullptr) count++;
	glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) Load_Function("glMultiTexSubImage2DEXT"); 
	if(glMultiTexSubImage2DEXT != nullptr) count++;
	glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) Load_Function("glCopyMultiTexImage1DEXT"); 
	if(glCopyMultiTexImage1DEXT != nullptr) count++;
	glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) Load_Function("glCopyMultiTexImage2DEXT"); 
	if(glCopyMultiTexImage2DEXT != nullptr) count++;
	glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) Load_Function("glCopyMultiTexSubImage1DEXT"); 
	if(glCopyMultiTexSubImage1DEXT != nullptr) count++;
	glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) Load_Function("glCopyMultiTexSubImage2DEXT"); 
	if(glCopyMultiTexSubImage2DEXT != nullptr) count++;
	glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC) Load_Function("glGetMultiTexImageEXT"); 
	if(glGetMultiTexImageEXT != nullptr) count++;
	glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) Load_Function("glGetMultiTexParameterfvEXT"); 
	if(glGetMultiTexParameterfvEXT != nullptr) count++;
	glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) Load_Function("glGetMultiTexParameterivEXT"); 
	if(glGetMultiTexParameterivEXT != nullptr) count++;
	glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) Load_Function("glGetMultiTexLevelParameterfvEXT"); 
	if(glGetMultiTexLevelParameterfvEXT != nullptr) count++;
	glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) Load_Function("glGetMultiTexLevelParameterivEXT"); 
	if(glGetMultiTexLevelParameterivEXT != nullptr) count++;
	glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC) Load_Function("glMultiTexImage3DEXT"); 
	if(glMultiTexImage3DEXT != nullptr) count++;
	glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) Load_Function("glMultiTexSubImage3DEXT"); 
	if(glMultiTexSubImage3DEXT != nullptr) count++;
	glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) Load_Function("glCopyMultiTexSubImage3DEXT"); 
	if(glCopyMultiTexSubImage3DEXT != nullptr) count++;
	glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) Load_Function("glEnableClientStateIndexedEXT"); 
	if(glEnableClientStateIndexedEXT != nullptr) count++;
	glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) Load_Function("glDisableClientStateIndexedEXT"); 
	if(glDisableClientStateIndexedEXT != nullptr) count++;
	glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC) Load_Function("glGetFloatIndexedvEXT"); 
	if(glGetFloatIndexedvEXT != nullptr) count++;
	glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC) Load_Function("glGetDoubleIndexedvEXT"); 
	if(glGetDoubleIndexedvEXT != nullptr) count++;
	glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC) Load_Function("glGetPointerIndexedvEXT"); 
	if(glGetPointerIndexedvEXT != nullptr) count++;
	glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) Load_Function("glEnableIndexedEXT"); 
	if(glEnableIndexedEXT != nullptr) count++;
	glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) Load_Function("glDisableIndexedEXT"); 
	if(glDisableIndexedEXT != nullptr) count++;
	glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) Load_Function("glIsEnabledIndexedEXT"); 
	if(glIsEnabledIndexedEXT != nullptr) count++;
	glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) Load_Function("glGetIntegerIndexedvEXT"); 
	if(glGetIntegerIndexedvEXT != nullptr) count++;
	glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) Load_Function("glGetBooleanIndexedvEXT"); 
	if(glGetBooleanIndexedvEXT != nullptr) count++;
	glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) Load_Function("glCompressedTextureImage3DEXT"); 
	if(glCompressedTextureImage3DEXT != nullptr) count++;
	glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) Load_Function("glCompressedTextureImage2DEXT"); 
	if(glCompressedTextureImage2DEXT != nullptr) count++;
	glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) Load_Function("glCompressedTextureImage1DEXT"); 
	if(glCompressedTextureImage1DEXT != nullptr) count++;
	glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) Load_Function("glCompressedTextureSubImage3DEXT"); 
	if(glCompressedTextureSubImage3DEXT != nullptr) count++;
	glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) Load_Function("glCompressedTextureSubImage2DEXT"); 
	if(glCompressedTextureSubImage2DEXT != nullptr) count++;
	glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) Load_Function("glCompressedTextureSubImage1DEXT"); 
	if(glCompressedTextureSubImage1DEXT != nullptr) count++;
	glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) Load_Function("glGetCompressedTextureImageEXT"); 
	if(glGetCompressedTextureImageEXT != nullptr) count++;
	glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) Load_Function("glCompressedMultiTexImage3DEXT"); 
	if(glCompressedMultiTexImage3DEXT != nullptr) count++;
	glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) Load_Function("glCompressedMultiTexImage2DEXT"); 
	if(glCompressedMultiTexImage2DEXT != nullptr) count++;
	glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) Load_Function("glCompressedMultiTexImage1DEXT"); 
	if(glCompressedMultiTexImage1DEXT != nullptr) count++;
	glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) Load_Function("glCompressedMultiTexSubImage3DEXT"); 
	if(glCompressedMultiTexSubImage3DEXT != nullptr) count++;
	glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) Load_Function("glCompressedMultiTexSubImage2DEXT"); 
	if(glCompressedMultiTexSubImage2DEXT != nullptr) count++;
	glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) Load_Function("glCompressedMultiTexSubImage1DEXT"); 
	if(glCompressedMultiTexSubImage1DEXT != nullptr) count++;
	glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) Load_Function("glGetCompressedMultiTexImageEXT"); 
	if(glGetCompressedMultiTexImageEXT != nullptr) count++;
	glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) Load_Function("glMatrixLoadTransposefEXT"); 
	if(glMatrixLoadTransposefEXT != nullptr) count++;
	glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) Load_Function("glMatrixLoadTransposedEXT"); 
	if(glMatrixLoadTransposedEXT != nullptr) count++;
	glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) Load_Function("glMatrixMultTransposefEXT"); 
	if(glMatrixMultTransposefEXT != nullptr) count++;
	glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) Load_Function("glMatrixMultTransposedEXT"); 
	if(glMatrixMultTransposedEXT != nullptr) count++;
	glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC) Load_Function("glNamedBufferDataEXT"); 
	if(glNamedBufferDataEXT != nullptr) count++;
	glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) Load_Function("glNamedBufferSubDataEXT"); 
	if(glNamedBufferSubDataEXT != nullptr) count++;
	glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC) Load_Function("glMapNamedBufferEXT"); 
	if(glMapNamedBufferEXT != nullptr) count++;
	glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC) Load_Function("glUnmapNamedBufferEXT"); 
	if(glUnmapNamedBufferEXT != nullptr) count++;
	glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) Load_Function("glGetNamedBufferParameterivEXT"); 
	if(glGetNamedBufferParameterivEXT != nullptr) count++;
	glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) Load_Function("glGetNamedBufferPointervEXT"); 
	if(glGetNamedBufferPointervEXT != nullptr) count++;
	glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) Load_Function("glGetNamedBufferSubDataEXT"); 
	if(glGetNamedBufferSubDataEXT != nullptr) count++;
	glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC) Load_Function("glProgramUniform1fEXT"); 
	if(glProgramUniform1fEXT != nullptr) count++;
	glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC) Load_Function("glProgramUniform2fEXT"); 
	if(glProgramUniform2fEXT != nullptr) count++;
	glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC) Load_Function("glProgramUniform3fEXT"); 
	if(glProgramUniform3fEXT != nullptr) count++;
	glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC) Load_Function("glProgramUniform4fEXT"); 
	if(glProgramUniform4fEXT != nullptr) count++;
	glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC) Load_Function("glProgramUniform1iEXT"); 
	if(glProgramUniform1iEXT != nullptr) count++;
	glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC) Load_Function("glProgramUniform2iEXT"); 
	if(glProgramUniform2iEXT != nullptr) count++;
	glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC) Load_Function("glProgramUniform3iEXT"); 
	if(glProgramUniform3iEXT != nullptr) count++;
	glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC) Load_Function("glProgramUniform4iEXT"); 
	if(glProgramUniform4iEXT != nullptr) count++;
	glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC) Load_Function("glProgramUniform1fvEXT"); 
	if(glProgramUniform1fvEXT != nullptr) count++;
	glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC) Load_Function("glProgramUniform2fvEXT"); 
	if(glProgramUniform2fvEXT != nullptr) count++;
	glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC) Load_Function("glProgramUniform3fvEXT"); 
	if(glProgramUniform3fvEXT != nullptr) count++;
	glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC) Load_Function("glProgramUniform4fvEXT"); 
	if(glProgramUniform4fvEXT != nullptr) count++;
	glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC) Load_Function("glProgramUniform1ivEXT"); 
	if(glProgramUniform1ivEXT != nullptr) count++;
	glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC) Load_Function("glProgramUniform2ivEXT"); 
	if(glProgramUniform2ivEXT != nullptr) count++;
	glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC) Load_Function("glProgramUniform3ivEXT"); 
	if(glProgramUniform3ivEXT != nullptr) count++;
	glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC) Load_Function("glProgramUniform4ivEXT"); 
	if(glProgramUniform4ivEXT != nullptr) count++;
	glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) Load_Function("glProgramUniformMatrix2fvEXT"); 
	if(glProgramUniformMatrix2fvEXT != nullptr) count++;
	glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) Load_Function("glProgramUniformMatrix3fvEXT"); 
	if(glProgramUniformMatrix3fvEXT != nullptr) count++;
	glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) Load_Function("glProgramUniformMatrix4fvEXT"); 
	if(glProgramUniformMatrix4fvEXT != nullptr) count++;
	glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) Load_Function("glProgramUniformMatrix2x3fvEXT"); 
	if(glProgramUniformMatrix2x3fvEXT != nullptr) count++;
	glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) Load_Function("glProgramUniformMatrix3x2fvEXT"); 
	if(glProgramUniformMatrix3x2fvEXT != nullptr) count++;
	glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) Load_Function("glProgramUniformMatrix2x4fvEXT"); 
	if(glProgramUniformMatrix2x4fvEXT != nullptr) count++;
	glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) Load_Function("glProgramUniformMatrix4x2fvEXT"); 
	if(glProgramUniformMatrix4x2fvEXT != nullptr) count++;
	glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) Load_Function("glProgramUniformMatrix3x4fvEXT"); 
	if(glProgramUniformMatrix3x4fvEXT != nullptr) count++;
	glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) Load_Function("glProgramUniformMatrix4x3fvEXT"); 
	if(glProgramUniformMatrix4x3fvEXT != nullptr) count++;
	glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC) Load_Function("glTextureBufferEXT"); 
	if(glTextureBufferEXT != nullptr) count++;
	glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC) Load_Function("glMultiTexBufferEXT"); 
	if(glMultiTexBufferEXT != nullptr) count++;
	glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC) Load_Function("glTextureParameterIivEXT"); 
	if(glTextureParameterIivEXT != nullptr) count++;
	glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) Load_Function("glTextureParameterIuivEXT"); 
	if(glTextureParameterIuivEXT != nullptr) count++;
	glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) Load_Function("glGetTextureParameterIivEXT"); 
	if(glGetTextureParameterIivEXT != nullptr) count++;
	glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) Load_Function("glGetTextureParameterIuivEXT"); 
	if(glGetTextureParameterIuivEXT != nullptr) count++;
	glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC) Load_Function("glMultiTexParameterIivEXT"); 
	if(glMultiTexParameterIivEXT != nullptr) count++;
	glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) Load_Function("glMultiTexParameterIuivEXT"); 
	if(glMultiTexParameterIuivEXT != nullptr) count++;
	glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) Load_Function("glGetMultiTexParameterIivEXT"); 
	if(glGetMultiTexParameterIivEXT != nullptr) count++;
	glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) Load_Function("glGetMultiTexParameterIuivEXT"); 
	if(glGetMultiTexParameterIuivEXT != nullptr) count++;
	glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC) Load_Function("glProgramUniform1uiEXT"); 
	if(glProgramUniform1uiEXT != nullptr) count++;
	glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC) Load_Function("glProgramUniform2uiEXT"); 
	if(glProgramUniform2uiEXT != nullptr) count++;
	glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC) Load_Function("glProgramUniform3uiEXT"); 
	if(glProgramUniform3uiEXT != nullptr) count++;
	glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC) Load_Function("glProgramUniform4uiEXT"); 
	if(glProgramUniform4uiEXT != nullptr) count++;
	glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) Load_Function("glProgramUniform1uivEXT"); 
	if(glProgramUniform1uivEXT != nullptr) count++;
	glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) Load_Function("glProgramUniform2uivEXT"); 
	if(glProgramUniform2uivEXT != nullptr) count++;
	glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) Load_Function("glProgramUniform3uivEXT"); 
	if(glProgramUniform3uivEXT != nullptr) count++;
	glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) Load_Function("glProgramUniform4uivEXT"); 
	if(glProgramUniform4uivEXT != nullptr) count++;
	glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) Load_Function("glNamedProgramLocalParameters4fvEXT"); 
	if(glNamedProgramLocalParameters4fvEXT != nullptr) count++;
	glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) Load_Function("glNamedProgramLocalParameterI4iEXT"); 
	if(glNamedProgramLocalParameterI4iEXT != nullptr) count++;
	glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) Load_Function("glNamedProgramLocalParameterI4ivEXT"); 
	if(glNamedProgramLocalParameterI4ivEXT != nullptr) count++;
	glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) Load_Function("glNamedProgramLocalParametersI4ivEXT"); 
	if(glNamedProgramLocalParametersI4ivEXT != nullptr) count++;
	glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) Load_Function("glNamedProgramLocalParameterI4uiEXT"); 
	if(glNamedProgramLocalParameterI4uiEXT != nullptr) count++;
	glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) Load_Function("glNamedProgramLocalParameterI4uivEXT"); 
	if(glNamedProgramLocalParameterI4uivEXT != nullptr) count++;
	glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) Load_Function("glNamedProgramLocalParametersI4uivEXT"); 
	if(glNamedProgramLocalParametersI4uivEXT != nullptr) count++;
	glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) Load_Function("glGetNamedProgramLocalParameterIivEXT"); 
	if(glGetNamedProgramLocalParameterIivEXT != nullptr) count++;
	glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) Load_Function("glGetNamedProgramLocalParameterIuivEXT"); 
	if(glGetNamedProgramLocalParameterIuivEXT != nullptr) count++;
	glEnableClientStateiEXT = (PFNGLENABLECLIENTSTATEIEXTPROC) Load_Function("glEnableClientStateiEXT"); 
	if(glEnableClientStateiEXT != nullptr) count++;
	glDisableClientStateiEXT = (PFNGLDISABLECLIENTSTATEIEXTPROC) Load_Function("glDisableClientStateiEXT"); 
	if(glDisableClientStateiEXT != nullptr) count++;
	glGetFloati_vEXT = (PFNGLGETFLOATI_VEXTPROC) Load_Function("glGetFloati_vEXT"); 
	if(glGetFloati_vEXT != nullptr) count++;
	glGetDoublei_vEXT = (PFNGLGETDOUBLEI_VEXTPROC) Load_Function("glGetDoublei_vEXT"); 
	if(glGetDoublei_vEXT != nullptr) count++;
	glGetPointeri_vEXT = (PFNGLGETPOINTERI_VEXTPROC) Load_Function("glGetPointeri_vEXT"); 
	if(glGetPointeri_vEXT != nullptr) count++;
	glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) Load_Function("glNamedProgramStringEXT"); 
	if(glNamedProgramStringEXT != nullptr) count++;
	glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) Load_Function("glNamedProgramLocalParameter4dEXT"); 
	if(glNamedProgramLocalParameter4dEXT != nullptr) count++;
	glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) Load_Function("glNamedProgramLocalParameter4dvEXT"); 
	if(glNamedProgramLocalParameter4dvEXT != nullptr) count++;
	glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) Load_Function("glNamedProgramLocalParameter4fEXT"); 
	if(glNamedProgramLocalParameter4fEXT != nullptr) count++;
	glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) Load_Function("glNamedProgramLocalParameter4fvEXT"); 
	if(glNamedProgramLocalParameter4fvEXT != nullptr) count++;
	glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) Load_Function("glGetNamedProgramLocalParameterdvEXT"); 
	if(glGetNamedProgramLocalParameterdvEXT != nullptr) count++;
	glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) Load_Function("glGetNamedProgramLocalParameterfvEXT"); 
	if(glGetNamedProgramLocalParameterfvEXT != nullptr) count++;
	glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC) Load_Function("glGetNamedProgramivEXT"); 
	if(glGetNamedProgramivEXT != nullptr) count++;
	glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) Load_Function("glGetNamedProgramStringEXT"); 
	if(glGetNamedProgramStringEXT != nullptr) count++;
	glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) Load_Function("glNamedRenderbufferStorageEXT"); 
	if(glNamedRenderbufferStorageEXT != nullptr) count++;
	glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) Load_Function("glGetNamedRenderbufferParameterivEXT"); 
	if(glGetNamedRenderbufferParameterivEXT != nullptr) count++;
	glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) Load_Function("glNamedRenderbufferStorageMultisampleEXT"); 
	if(glNamedRenderbufferStorageMultisampleEXT != nullptr) count++;
	glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) Load_Function("glNamedRenderbufferStorageMultisampleCoverageEXT"); 
	if(glNamedRenderbufferStorageMultisampleCoverageEXT != nullptr) count++;
	glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) Load_Function("glCheckNamedFramebufferStatusEXT"); 
	if(glCheckNamedFramebufferStatusEXT != nullptr) count++;
	glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) Load_Function("glNamedFramebufferTexture1DEXT"); 
	if(glNamedFramebufferTexture1DEXT != nullptr) count++;
	glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) Load_Function("glNamedFramebufferTexture2DEXT"); 
	if(glNamedFramebufferTexture2DEXT != nullptr) count++;
	glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) Load_Function("glNamedFramebufferTexture3DEXT"); 
	if(glNamedFramebufferTexture3DEXT != nullptr) count++;
	glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) Load_Function("glNamedFramebufferRenderbufferEXT"); 
	if(glNamedFramebufferRenderbufferEXT != nullptr) count++;
	glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) Load_Function("glGetNamedFramebufferAttachmentParameterivEXT"); 
	if(glGetNamedFramebufferAttachmentParameterivEXT != nullptr) count++;
	glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) Load_Function("glGenerateTextureMipmapEXT"); 
	if(glGenerateTextureMipmapEXT != nullptr) count++;
	glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) Load_Function("glGenerateMultiTexMipmapEXT"); 
	if(glGenerateMultiTexMipmapEXT != nullptr) count++;
	glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) Load_Function("glFramebufferDrawBufferEXT"); 
	if(glFramebufferDrawBufferEXT != nullptr) count++;
	glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) Load_Function("glFramebufferDrawBuffersEXT"); 
	if(glFramebufferDrawBuffersEXT != nullptr) count++;
	glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) Load_Function("glFramebufferReadBufferEXT"); 
	if(glFramebufferReadBufferEXT != nullptr) count++;
	glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) Load_Function("glGetFramebufferParameterivEXT"); 
	if(glGetFramebufferParameterivEXT != nullptr) count++;
	glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) Load_Function("glNamedCopyBufferSubDataEXT"); 
	if(glNamedCopyBufferSubDataEXT != nullptr) count++;
	glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) Load_Function("glNamedFramebufferTextureEXT"); 
	if(glNamedFramebufferTextureEXT != nullptr) count++;
	glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) Load_Function("glNamedFramebufferTextureLayerEXT"); 
	if(glNamedFramebufferTextureLayerEXT != nullptr) count++;
	glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) Load_Function("glNamedFramebufferTextureFaceEXT"); 
	if(glNamedFramebufferTextureFaceEXT != nullptr) count++;
	glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC) Load_Function("glTextureRenderbufferEXT"); 
	if(glTextureRenderbufferEXT != nullptr) count++;
	glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC) Load_Function("glMultiTexRenderbufferEXT"); 
	if(glMultiTexRenderbufferEXT != nullptr) count++;
	glVertexArrayVertexOffsetEXT = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) Load_Function("glVertexArrayVertexOffsetEXT"); 
	if(glVertexArrayVertexOffsetEXT != nullptr) count++;
	glVertexArrayColorOffsetEXT = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) Load_Function("glVertexArrayColorOffsetEXT"); 
	if(glVertexArrayColorOffsetEXT != nullptr) count++;
	glVertexArrayEdgeFlagOffsetEXT = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) Load_Function("glVertexArrayEdgeFlagOffsetEXT"); 
	if(glVertexArrayEdgeFlagOffsetEXT != nullptr) count++;
	glVertexArrayIndexOffsetEXT = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) Load_Function("glVertexArrayIndexOffsetEXT"); 
	if(glVertexArrayIndexOffsetEXT != nullptr) count++;
	glVertexArrayNormalOffsetEXT = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) Load_Function("glVertexArrayNormalOffsetEXT"); 
	if(glVertexArrayNormalOffsetEXT != nullptr) count++;
	glVertexArrayTexCoordOffsetEXT = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) Load_Function("glVertexArrayTexCoordOffsetEXT"); 
	if(glVertexArrayTexCoordOffsetEXT != nullptr) count++;
	glVertexArrayMultiTexCoordOffsetEXT = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) Load_Function("glVertexArrayMultiTexCoordOffsetEXT"); 
	if(glVertexArrayMultiTexCoordOffsetEXT != nullptr) count++;
	glVertexArrayFogCoordOffsetEXT = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) Load_Function("glVertexArrayFogCoordOffsetEXT"); 
	if(glVertexArrayFogCoordOffsetEXT != nullptr) count++;
	glVertexArraySecondaryColorOffsetEXT = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) Load_Function("glVertexArraySecondaryColorOffsetEXT"); 
	if(glVertexArraySecondaryColorOffsetEXT != nullptr) count++;
	glVertexArrayVertexAttribOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) Load_Function("glVertexArrayVertexAttribOffsetEXT"); 
	if(glVertexArrayVertexAttribOffsetEXT != nullptr) count++;
	glVertexArrayVertexAttribIOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) Load_Function("glVertexArrayVertexAttribIOffsetEXT"); 
	if(glVertexArrayVertexAttribIOffsetEXT != nullptr) count++;
	glEnableVertexArrayEXT = (PFNGLENABLEVERTEXARRAYEXTPROC) Load_Function("glEnableVertexArrayEXT"); 
	if(glEnableVertexArrayEXT != nullptr) count++;
	glDisableVertexArrayEXT = (PFNGLDISABLEVERTEXARRAYEXTPROC) Load_Function("glDisableVertexArrayEXT"); 
	if(glDisableVertexArrayEXT != nullptr) count++;
	glEnableVertexArrayAttribEXT = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) Load_Function("glEnableVertexArrayAttribEXT"); 
	if(glEnableVertexArrayAttribEXT != nullptr) count++;
	glDisableVertexArrayAttribEXT = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) Load_Function("glDisableVertexArrayAttribEXT"); 
	if(glDisableVertexArrayAttribEXT != nullptr) count++;
	glGetVertexArrayIntegervEXT = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) Load_Function("glGetVertexArrayIntegervEXT"); 
	if(glGetVertexArrayIntegervEXT != nullptr) count++;
	glGetVertexArrayPointervEXT = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) Load_Function("glGetVertexArrayPointervEXT"); 
	if(glGetVertexArrayPointervEXT != nullptr) count++;
	glGetVertexArrayIntegeri_vEXT = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) Load_Function("glGetVertexArrayIntegeri_vEXT"); 
	if(glGetVertexArrayIntegeri_vEXT != nullptr) count++;
	glGetVertexArrayPointeri_vEXT = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) Load_Function("glGetVertexArrayPointeri_vEXT"); 
	if(glGetVertexArrayPointeri_vEXT != nullptr) count++;
	glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) Load_Function("glMapNamedBufferRangeEXT"); 
	if(glMapNamedBufferRangeEXT != nullptr) count++;
	glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) Load_Function("glFlushMappedNamedBufferRangeEXT"); 
	if(glFlushMappedNamedBufferRangeEXT != nullptr) count++;
	glNamedBufferStorageEXT = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) Load_Function("glNamedBufferStorageEXT"); 
	if(glNamedBufferStorageEXT != nullptr) count++;
	glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) Load_Function("glClearNamedBufferDataEXT"); 
	if(glClearNamedBufferDataEXT != nullptr) count++;
	glClearNamedBufferSubDataEXT = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) Load_Function("glClearNamedBufferSubDataEXT"); 
	if(glClearNamedBufferSubDataEXT != nullptr) count++;
	glNamedFramebufferParameteriEXT = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) Load_Function("glNamedFramebufferParameteriEXT"); 
	if(glNamedFramebufferParameteriEXT != nullptr) count++;
	glGetNamedFramebufferParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) Load_Function("glGetNamedFramebufferParameterivEXT"); 
	if(glGetNamedFramebufferParameterivEXT != nullptr) count++;
	glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC) Load_Function("glProgramUniform1dEXT"); 
	if(glProgramUniform1dEXT != nullptr) count++;
	glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC) Load_Function("glProgramUniform2dEXT"); 
	if(glProgramUniform2dEXT != nullptr) count++;
	glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC) Load_Function("glProgramUniform3dEXT"); 
	if(glProgramUniform3dEXT != nullptr) count++;
	glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC) Load_Function("glProgramUniform4dEXT"); 
	if(glProgramUniform4dEXT != nullptr) count++;
	glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC) Load_Function("glProgramUniform1dvEXT"); 
	if(glProgramUniform1dvEXT != nullptr) count++;
	glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC) Load_Function("glProgramUniform2dvEXT"); 
	if(glProgramUniform2dvEXT != nullptr) count++;
	glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC) Load_Function("glProgramUniform3dvEXT"); 
	if(glProgramUniform3dvEXT != nullptr) count++;
	glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC) Load_Function("glProgramUniform4dvEXT"); 
	if(glProgramUniform4dvEXT != nullptr) count++;
	glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) Load_Function("glProgramUniformMatrix2dvEXT"); 
	if(glProgramUniformMatrix2dvEXT != nullptr) count++;
	glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) Load_Function("glProgramUniformMatrix3dvEXT"); 
	if(glProgramUniformMatrix3dvEXT != nullptr) count++;
	glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) Load_Function("glProgramUniformMatrix4dvEXT"); 
	if(glProgramUniformMatrix4dvEXT != nullptr) count++;
	glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) Load_Function("glProgramUniformMatrix2x3dvEXT"); 
	if(glProgramUniformMatrix2x3dvEXT != nullptr) count++;
	glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) Load_Function("glProgramUniformMatrix2x4dvEXT"); 
	if(glProgramUniformMatrix2x4dvEXT != nullptr) count++;
	glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) Load_Function("glProgramUniformMatrix3x2dvEXT"); 
	if(glProgramUniformMatrix3x2dvEXT != nullptr) count++;
	glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) Load_Function("glProgramUniformMatrix3x4dvEXT"); 
	if(glProgramUniformMatrix3x4dvEXT != nullptr) count++;
	glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) Load_Function("glProgramUniformMatrix4x2dvEXT"); 
	if(glProgramUniformMatrix4x2dvEXT != nullptr) count++;
	glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) Load_Function("glProgramUniformMatrix4x3dvEXT"); 
	if(glProgramUniformMatrix4x3dvEXT != nullptr) count++;
	glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC) Load_Function("glTextureBufferRangeEXT"); 
	if(glTextureBufferRangeEXT != nullptr) count++;
	glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) Load_Function("glTextureStorage1DEXT"); 
	if(glTextureStorage1DEXT != nullptr) count++;
	glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) Load_Function("glTextureStorage2DEXT"); 
	if(glTextureStorage2DEXT != nullptr) count++;
	glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) Load_Function("glTextureStorage3DEXT"); 
	if(glTextureStorage3DEXT != nullptr) count++;
	glTextureStorage2DMultisampleEXT = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) Load_Function("glTextureStorage2DMultisampleEXT"); 
	if(glTextureStorage2DMultisampleEXT != nullptr) count++;
	glTextureStorage3DMultisampleEXT = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) Load_Function("glTextureStorage3DMultisampleEXT"); 
	if(glTextureStorage3DMultisampleEXT != nullptr) count++;
	glVertexArrayBindVertexBufferEXT = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) Load_Function("glVertexArrayBindVertexBufferEXT"); 
	if(glVertexArrayBindVertexBufferEXT != nullptr) count++;
	glVertexArrayVertexAttribFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) Load_Function("glVertexArrayVertexAttribFormatEXT"); 
	if(glVertexArrayVertexAttribFormatEXT != nullptr) count++;
	glVertexArrayVertexAttribIFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) Load_Function("glVertexArrayVertexAttribIFormatEXT"); 
	if(glVertexArrayVertexAttribIFormatEXT != nullptr) count++;
	glVertexArrayVertexAttribLFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) Load_Function("glVertexArrayVertexAttribLFormatEXT"); 
	if(glVertexArrayVertexAttribLFormatEXT != nullptr) count++;
	glVertexArrayVertexAttribBindingEXT = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) Load_Function("glVertexArrayVertexAttribBindingEXT"); 
	if(glVertexArrayVertexAttribBindingEXT != nullptr) count++;
	glVertexArrayVertexBindingDivisorEXT = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) Load_Function("glVertexArrayVertexBindingDivisorEXT"); 
	if(glVertexArrayVertexBindingDivisorEXT != nullptr) count++;
	glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) Load_Function("glVertexArrayVertexAttribLOffsetEXT"); 
	if(glVertexArrayVertexAttribLOffsetEXT != nullptr) count++;
	glTexturePageCommitmentEXT = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) Load_Function("glTexturePageCommitmentEXT"); 
	if(glTexturePageCommitmentEXT != nullptr) count++;
	glVertexArrayVertexAttribDivisorEXT = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) Load_Function("glVertexArrayVertexAttribDivisorEXT"); 
	if(glVertexArrayVertexAttribDivisorEXT != nullptr) count++;
	glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) Load_Function("glDrawArraysInstancedEXT"); 
	if(glDrawArraysInstancedEXT != nullptr) count++;
	glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) Load_Function("glDrawElementsInstancedEXT"); 
	if(glDrawElementsInstancedEXT != nullptr) count++;
	glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) Load_Function("glPolygonOffsetClampEXT"); 
	if(glPolygonOffsetClampEXT != nullptr) count++;
	glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) Load_Function("glRasterSamplesEXT"); 
	if(glRasterSamplesEXT != nullptr) count++;
	glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC) Load_Function("glUseShaderProgramEXT"); 
	if(glUseShaderProgramEXT != nullptr) count++;
	glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC) Load_Function("glActiveProgramEXT"); 
	if(glActiveProgramEXT != nullptr) count++;
	glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC) Load_Function("glCreateShaderProgramEXT"); 
	if(glCreateShaderProgramEXT != nullptr) count++;
	glFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) Load_Function("glFramebufferFetchBarrierEXT"); 
	if(glFramebufferFetchBarrierEXT != nullptr) count++;
	glTexStorage1DEXT = (PFNGLTEXSTORAGE1DEXTPROC) Load_Function("glTexStorage1DEXT"); 
	if(glTexStorage1DEXT != nullptr) count++;
	glTexStorage2DEXT = (PFNGLTEXSTORAGE2DEXTPROC) Load_Function("glTexStorage2DEXT"); 
	if(glTexStorage2DEXT != nullptr) count++;
	glTexStorage3DEXT = (PFNGLTEXSTORAGE3DEXTPROC) Load_Function("glTexStorage3DEXT"); 
	if(glTexStorage3DEXT != nullptr) count++;
	glWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC) Load_Function("glWindowRectanglesEXT"); 
	if(glWindowRectanglesEXT != nullptr) count++;
	glApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) Load_Function("glApplyFramebufferAttachmentCMAAINTEL"); 
	if(glApplyFramebufferAttachmentCMAAINTEL != nullptr) count++;
	glBeginPerfQueryINTEL = (PFNGLBEGINPERFQUERYINTELPROC) Load_Function("glBeginPerfQueryINTEL"); 
	if(glBeginPerfQueryINTEL != nullptr) count++;
	glCreatePerfQueryINTEL = (PFNGLCREATEPERFQUERYINTELPROC) Load_Function("glCreatePerfQueryINTEL"); 
	if(glCreatePerfQueryINTEL != nullptr) count++;
	glDeletePerfQueryINTEL = (PFNGLDELETEPERFQUERYINTELPROC) Load_Function("glDeletePerfQueryINTEL"); 
	if(glDeletePerfQueryINTEL != nullptr) count++;
	glEndPerfQueryINTEL = (PFNGLENDPERFQUERYINTELPROC) Load_Function("glEndPerfQueryINTEL"); 
	if(glEndPerfQueryINTEL != nullptr) count++;
	glGetFirstPerfQueryIdINTEL = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) Load_Function("glGetFirstPerfQueryIdINTEL"); 
	if(glGetFirstPerfQueryIdINTEL != nullptr) count++;
	glGetNextPerfQueryIdINTEL = (PFNGLGETNEXTPERFQUERYIDINTELPROC) Load_Function("glGetNextPerfQueryIdINTEL"); 
	if(glGetNextPerfQueryIdINTEL != nullptr) count++;
	glGetPerfCounterInfoINTEL = (PFNGLGETPERFCOUNTERINFOINTELPROC) Load_Function("glGetPerfCounterInfoINTEL"); 
	if(glGetPerfCounterInfoINTEL != nullptr) count++;
	glGetPerfQueryDataINTEL = (PFNGLGETPERFQUERYDATAINTELPROC) Load_Function("glGetPerfQueryDataINTEL"); 
	if(glGetPerfQueryDataINTEL != nullptr) count++;
	glGetPerfQueryIdByNameINTEL = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) Load_Function("glGetPerfQueryIdByNameINTEL"); 
	if(glGetPerfQueryIdByNameINTEL != nullptr) count++;
	glGetPerfQueryInfoINTEL = (PFNGLGETPERFQUERYINFOINTELPROC) Load_Function("glGetPerfQueryInfoINTEL"); 
	if(glGetPerfQueryInfoINTEL != nullptr) count++;
	glFramebufferParameteriMESA = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) Load_Function("glFramebufferParameteriMESA"); 
	if(glFramebufferParameteriMESA != nullptr) count++;
	glGetFramebufferParameterivMESA = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) Load_Function("glGetFramebufferParameterivMESA"); 
	if(glGetFramebufferParameterivMESA != nullptr) count++;
	glMultiDrawArraysIndirectBindlessNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) Load_Function("glMultiDrawArraysIndirectBindlessNV"); 
	if(glMultiDrawArraysIndirectBindlessNV != nullptr) count++;
	glMultiDrawElementsIndirectBindlessNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) Load_Function("glMultiDrawElementsIndirectBindlessNV"); 
	if(glMultiDrawElementsIndirectBindlessNV != nullptr) count++;
	glMultiDrawArraysIndirectBindlessCountNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) Load_Function("glMultiDrawArraysIndirectBindlessCountNV"); 
	if(glMultiDrawArraysIndirectBindlessCountNV != nullptr) count++;
	glMultiDrawElementsIndirectBindlessCountNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) Load_Function("glMultiDrawElementsIndirectBindlessCountNV"); 
	if(glMultiDrawElementsIndirectBindlessCountNV != nullptr) count++;
	glGetTextureHandleNV = (PFNGLGETTEXTUREHANDLENVPROC) Load_Function("glGetTextureHandleNV"); 
	if(glGetTextureHandleNV != nullptr) count++;
	glGetTextureSamplerHandleNV = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) Load_Function("glGetTextureSamplerHandleNV"); 
	if(glGetTextureSamplerHandleNV != nullptr) count++;
	glMakeTextureHandleResidentNV = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) Load_Function("glMakeTextureHandleResidentNV"); 
	if(glMakeTextureHandleResidentNV != nullptr) count++;
	glMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) Load_Function("glMakeTextureHandleNonResidentNV"); 
	if(glMakeTextureHandleNonResidentNV != nullptr) count++;
	glGetImageHandleNV = (PFNGLGETIMAGEHANDLENVPROC) Load_Function("glGetImageHandleNV"); 
	if(glGetImageHandleNV != nullptr) count++;
	glMakeImageHandleResidentNV = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) Load_Function("glMakeImageHandleResidentNV"); 
	if(glMakeImageHandleResidentNV != nullptr) count++;
	glMakeImageHandleNonResidentNV = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) Load_Function("glMakeImageHandleNonResidentNV"); 
	if(glMakeImageHandleNonResidentNV != nullptr) count++;
	glUniformHandleui64NV = (PFNGLUNIFORMHANDLEUI64NVPROC) Load_Function("glUniformHandleui64NV"); 
	if(glUniformHandleui64NV != nullptr) count++;
	glUniformHandleui64vNV = (PFNGLUNIFORMHANDLEUI64VNVPROC) Load_Function("glUniformHandleui64vNV"); 
	if(glUniformHandleui64vNV != nullptr) count++;
	glProgramUniformHandleui64NV = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) Load_Function("glProgramUniformHandleui64NV"); 
	if(glProgramUniformHandleui64NV != nullptr) count++;
	glProgramUniformHandleui64vNV = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) Load_Function("glProgramUniformHandleui64vNV"); 
	if(glProgramUniformHandleui64vNV != nullptr) count++;
	glIsTextureHandleResidentNV = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) Load_Function("glIsTextureHandleResidentNV"); 
	if(glIsTextureHandleResidentNV != nullptr) count++;
	glIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC) Load_Function("glIsImageHandleResidentNV"); 
	if(glIsImageHandleResidentNV != nullptr) count++;
	glBlendParameteriNV = (PFNGLBLENDPARAMETERINVPROC) Load_Function("glBlendParameteriNV"); 
	if(glBlendParameteriNV != nullptr) count++;
	glBlendBarrierNV = (PFNGLBLENDBARRIERNVPROC) Load_Function("glBlendBarrierNV"); 
	if(glBlendBarrierNV != nullptr) count++;
	glViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) Load_Function("glViewportPositionWScaleNV"); 
	if(glViewportPositionWScaleNV != nullptr) count++;
	glCreateStatesNV = (PFNGLCREATESTATESNVPROC) Load_Function("glCreateStatesNV"); 
	if(glCreateStatesNV != nullptr) count++;
	glDeleteStatesNV = (PFNGLDELETESTATESNVPROC) Load_Function("glDeleteStatesNV"); 
	if(glDeleteStatesNV != nullptr) count++;
	glIsStateNV = (PFNGLISSTATENVPROC) Load_Function("glIsStateNV"); 
	if(glIsStateNV != nullptr) count++;
	glStateCaptureNV = (PFNGLSTATECAPTURENVPROC) Load_Function("glStateCaptureNV"); 
	if(glStateCaptureNV != nullptr) count++;
	glGetCommandHeaderNV = (PFNGLGETCOMMANDHEADERNVPROC) Load_Function("glGetCommandHeaderNV"); 
	if(glGetCommandHeaderNV != nullptr) count++;
	glGetStageIndexNV = (PFNGLGETSTAGEINDEXNVPROC) Load_Function("glGetStageIndexNV"); 
	if(glGetStageIndexNV != nullptr) count++;
	glDrawCommandsNV = (PFNGLDRAWCOMMANDSNVPROC) Load_Function("glDrawCommandsNV"); 
	if(glDrawCommandsNV != nullptr) count++;
	glDrawCommandsAddressNV = (PFNGLDRAWCOMMANDSADDRESSNVPROC) Load_Function("glDrawCommandsAddressNV"); 
	if(glDrawCommandsAddressNV != nullptr) count++;
	glDrawCommandsStatesNV = (PFNGLDRAWCOMMANDSSTATESNVPROC) Load_Function("glDrawCommandsStatesNV"); 
	if(glDrawCommandsStatesNV != nullptr) count++;
	glDrawCommandsStatesAddressNV = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) Load_Function("glDrawCommandsStatesAddressNV"); 
	if(glDrawCommandsStatesAddressNV != nullptr) count++;
	glCreateCommandListsNV = (PFNGLCREATECOMMANDLISTSNVPROC) Load_Function("glCreateCommandListsNV"); 
	if(glCreateCommandListsNV != nullptr) count++;
	glDeleteCommandListsNV = (PFNGLDELETECOMMANDLISTSNVPROC) Load_Function("glDeleteCommandListsNV"); 
	if(glDeleteCommandListsNV != nullptr) count++;
	glIsCommandListNV = (PFNGLISCOMMANDLISTNVPROC) Load_Function("glIsCommandListNV"); 
	if(glIsCommandListNV != nullptr) count++;
	glListDrawCommandsStatesClientNV = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) Load_Function("glListDrawCommandsStatesClientNV"); 
	if(glListDrawCommandsStatesClientNV != nullptr) count++;
	glCommandListSegmentsNV = (PFNGLCOMMANDLISTSEGMENTSNVPROC) Load_Function("glCommandListSegmentsNV"); 
	if(glCommandListSegmentsNV != nullptr) count++;
	glCompileCommandListNV = (PFNGLCOMPILECOMMANDLISTNVPROC) Load_Function("glCompileCommandListNV"); 
	if(glCompileCommandListNV != nullptr) count++;
	glCallCommandListNV = (PFNGLCALLCOMMANDLISTNVPROC) Load_Function("glCallCommandListNV"); 
	if(glCallCommandListNV != nullptr) count++;
	glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC) Load_Function("glBeginConditionalRenderNV"); 
	if(glBeginConditionalRenderNV != nullptr) count++;
	glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC) Load_Function("glEndConditionalRenderNV"); 
	if(glEndConditionalRenderNV != nullptr) count++;
	glSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC) Load_Function("glSubpixelPrecisionBiasNV"); 
	if(glSubpixelPrecisionBiasNV != nullptr) count++;
	glConservativeRasterParameterfNV = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) Load_Function("glConservativeRasterParameterfNV"); 
	if(glConservativeRasterParameterfNV != nullptr) count++;
	glConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) Load_Function("glConservativeRasterParameteriNV"); 
	if(glConservativeRasterParameteriNV != nullptr) count++;
	glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC) Load_Function("glDepthRangedNV"); 
	if(glDepthRangedNV != nullptr) count++;
	glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC) Load_Function("glClearDepthdNV"); 
	if(glClearDepthdNV != nullptr) count++;
	glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC) Load_Function("glDepthBoundsdNV"); 
	if(glDepthBoundsdNV != nullptr) count++;
	glDrawVkImageNV = (PFNGLDRAWVKIMAGENVPROC) Load_Function("glDrawVkImageNV"); 
	if(glDrawVkImageNV != nullptr) count++;
	glGetVkProcAddrNV = (PFNGLGETVKPROCADDRNVPROC) Load_Function("glGetVkProcAddrNV"); 
	if(glGetVkProcAddrNV != nullptr) count++;
	glWaitVkSemaphoreNV = (PFNGLWAITVKSEMAPHORENVPROC) Load_Function("glWaitVkSemaphoreNV"); 
	if(glWaitVkSemaphoreNV != nullptr) count++;
	glSignalVkSemaphoreNV = (PFNGLSIGNALVKSEMAPHORENVPROC) Load_Function("glSignalVkSemaphoreNV"); 
	if(glSignalVkSemaphoreNV != nullptr) count++;
	glSignalVkFenceNV = (PFNGLSIGNALVKFENCENVPROC) Load_Function("glSignalVkFenceNV"); 
	if(glSignalVkFenceNV != nullptr) count++;
	glFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) Load_Function("glFragmentCoverageColorNV"); 
	if(glFragmentCoverageColorNV != nullptr) count++;
	glCoverageModulationTableNV = (PFNGLCOVERAGEMODULATIONTABLENVPROC) Load_Function("glCoverageModulationTableNV"); 
	if(glCoverageModulationTableNV != nullptr) count++;
	glGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) Load_Function("glGetCoverageModulationTableNV"); 
	if(glGetCoverageModulationTableNV != nullptr) count++;
	glCoverageModulationNV = (PFNGLCOVERAGEMODULATIONNVPROC) Load_Function("glCoverageModulationNV"); 
	if(glCoverageModulationNV != nullptr) count++;
	glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) Load_Function("glRenderbufferStorageMultisampleCoverageNV"); 
	if(glRenderbufferStorageMultisampleCoverageNV != nullptr) count++;
	glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC) Load_Function("glUniform1i64NV"); 
	if(glUniform1i64NV != nullptr) count++;
	glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC) Load_Function("glUniform2i64NV"); 
	if(glUniform2i64NV != nullptr) count++;
	glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC) Load_Function("glUniform3i64NV"); 
	if(glUniform3i64NV != nullptr) count++;
	glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC) Load_Function("glUniform4i64NV"); 
	if(glUniform4i64NV != nullptr) count++;
	glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC) Load_Function("glUniform1i64vNV"); 
	if(glUniform1i64vNV != nullptr) count++;
	glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC) Load_Function("glUniform2i64vNV"); 
	if(glUniform2i64vNV != nullptr) count++;
	glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC) Load_Function("glUniform3i64vNV"); 
	if(glUniform3i64vNV != nullptr) count++;
	glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC) Load_Function("glUniform4i64vNV"); 
	if(glUniform4i64vNV != nullptr) count++;
	glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC) Load_Function("glUniform1ui64NV"); 
	if(glUniform1ui64NV != nullptr) count++;
	glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC) Load_Function("glUniform2ui64NV"); 
	if(glUniform2ui64NV != nullptr) count++;
	glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC) Load_Function("glUniform3ui64NV"); 
	if(glUniform3ui64NV != nullptr) count++;
	glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC) Load_Function("glUniform4ui64NV"); 
	if(glUniform4ui64NV != nullptr) count++;
	glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC) Load_Function("glUniform1ui64vNV"); 
	if(glUniform1ui64vNV != nullptr) count++;
	glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC) Load_Function("glUniform2ui64vNV"); 
	if(glUniform2ui64vNV != nullptr) count++;
	glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC) Load_Function("glUniform3ui64vNV"); 
	if(glUniform3ui64vNV != nullptr) count++;
	glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC) Load_Function("glUniform4ui64vNV"); 
	if(glUniform4ui64vNV != nullptr) count++;
	glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC) Load_Function("glGetUniformi64vNV"); 
	if(glGetUniformi64vNV != nullptr) count++;
	glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC) Load_Function("glProgramUniform1i64NV"); 
	if(glProgramUniform1i64NV != nullptr) count++;
	glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC) Load_Function("glProgramUniform2i64NV"); 
	if(glProgramUniform2i64NV != nullptr) count++;
	glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC) Load_Function("glProgramUniform3i64NV"); 
	if(glProgramUniform3i64NV != nullptr) count++;
	glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC) Load_Function("glProgramUniform4i64NV"); 
	if(glProgramUniform4i64NV != nullptr) count++;
	glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC) Load_Function("glProgramUniform1i64vNV"); 
	if(glProgramUniform1i64vNV != nullptr) count++;
	glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC) Load_Function("glProgramUniform2i64vNV"); 
	if(glProgramUniform2i64vNV != nullptr) count++;
	glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC) Load_Function("glProgramUniform3i64vNV"); 
	if(glProgramUniform3i64vNV != nullptr) count++;
	glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC) Load_Function("glProgramUniform4i64vNV"); 
	if(glProgramUniform4i64vNV != nullptr) count++;
	glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC) Load_Function("glProgramUniform1ui64NV"); 
	if(glProgramUniform1ui64NV != nullptr) count++;
	glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC) Load_Function("glProgramUniform2ui64NV"); 
	if(glProgramUniform2ui64NV != nullptr) count++;
	glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC) Load_Function("glProgramUniform3ui64NV"); 
	if(glProgramUniform3ui64NV != nullptr) count++;
	glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC) Load_Function("glProgramUniform4ui64NV"); 
	if(glProgramUniform4ui64NV != nullptr) count++;
	glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) Load_Function("glProgramUniform1ui64vNV"); 
	if(glProgramUniform1ui64vNV != nullptr) count++;
	glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) Load_Function("glProgramUniform2ui64vNV"); 
	if(glProgramUniform2ui64vNV != nullptr) count++;
	glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) Load_Function("glProgramUniform3ui64vNV"); 
	if(glProgramUniform3ui64vNV != nullptr) count++;
	glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) Load_Function("glProgramUniform4ui64vNV"); 
	if(glProgramUniform4ui64vNV != nullptr) count++;
	glGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) Load_Function("glGetInternalformatSampleivNV"); 
	if(glGetInternalformatSampleivNV != nullptr) count++;
	glGetMemoryObjectDetachedResourcesuivNV = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) Load_Function("glGetMemoryObjectDetachedResourcesuivNV"); 
	if(glGetMemoryObjectDetachedResourcesuivNV != nullptr) count++;
	glResetMemoryObjectParameterNV = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) Load_Function("glResetMemoryObjectParameterNV"); 
	if(glResetMemoryObjectParameterNV != nullptr) count++;
	glTexAttachMemoryNV = (PFNGLTEXATTACHMEMORYNVPROC) Load_Function("glTexAttachMemoryNV"); 
	if(glTexAttachMemoryNV != nullptr) count++;
	glBufferAttachMemoryNV = (PFNGLBUFFERATTACHMEMORYNVPROC) Load_Function("glBufferAttachMemoryNV"); 
	if(glBufferAttachMemoryNV != nullptr) count++;
	glTextureAttachMemoryNV = (PFNGLTEXTUREATTACHMEMORYNVPROC) Load_Function("glTextureAttachMemoryNV"); 
	if(glTextureAttachMemoryNV != nullptr) count++;
	glNamedBufferAttachMemoryNV = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) Load_Function("glNamedBufferAttachMemoryNV"); 
	if(glNamedBufferAttachMemoryNV != nullptr) count++;
	glBufferPageCommitmentMemNV = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) Load_Function("glBufferPageCommitmentMemNV"); 
	if(glBufferPageCommitmentMemNV != nullptr) count++;
	glTexPageCommitmentMemNV = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) Load_Function("glTexPageCommitmentMemNV"); 
	if(glTexPageCommitmentMemNV != nullptr) count++;
	glNamedBufferPageCommitmentMemNV = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) Load_Function("glNamedBufferPageCommitmentMemNV"); 
	if(glNamedBufferPageCommitmentMemNV != nullptr) count++;
	glTexturePageCommitmentMemNV = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) Load_Function("glTexturePageCommitmentMemNV"); 
	if(glTexturePageCommitmentMemNV != nullptr) count++;
	glDrawMeshTasksNV = (PFNGLDRAWMESHTASKSNVPROC) Load_Function("glDrawMeshTasksNV"); 
	if(glDrawMeshTasksNV != nullptr) count++;
	glDrawMeshTasksIndirectNV = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) Load_Function("glDrawMeshTasksIndirectNV"); 
	if(glDrawMeshTasksIndirectNV != nullptr) count++;
	glMultiDrawMeshTasksIndirectNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) Load_Function("glMultiDrawMeshTasksIndirectNV"); 
	if(glMultiDrawMeshTasksIndirectNV != nullptr) count++;
	glMultiDrawMeshTasksIndirectCountNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) Load_Function("glMultiDrawMeshTasksIndirectCountNV"); 
	if(glMultiDrawMeshTasksIndirectCountNV != nullptr) count++;
	glGenPathsNV = (PFNGLGENPATHSNVPROC) Load_Function("glGenPathsNV"); 
	if(glGenPathsNV != nullptr) count++;
	glDeletePathsNV = (PFNGLDELETEPATHSNVPROC) Load_Function("glDeletePathsNV"); 
	if(glDeletePathsNV != nullptr) count++;
	glIsPathNV = (PFNGLISPATHNVPROC) Load_Function("glIsPathNV"); 
	if(glIsPathNV != nullptr) count++;
	glPathCommandsNV = (PFNGLPATHCOMMANDSNVPROC) Load_Function("glPathCommandsNV"); 
	if(glPathCommandsNV != nullptr) count++;
	glPathCoordsNV = (PFNGLPATHCOORDSNVPROC) Load_Function("glPathCoordsNV"); 
	if(glPathCoordsNV != nullptr) count++;
	glPathSubCommandsNV = (PFNGLPATHSUBCOMMANDSNVPROC) Load_Function("glPathSubCommandsNV"); 
	if(glPathSubCommandsNV != nullptr) count++;
	glPathSubCoordsNV = (PFNGLPATHSUBCOORDSNVPROC) Load_Function("glPathSubCoordsNV"); 
	if(glPathSubCoordsNV != nullptr) count++;
	glPathStringNV = (PFNGLPATHSTRINGNVPROC) Load_Function("glPathStringNV"); 
	if(glPathStringNV != nullptr) count++;
	glPathGlyphsNV = (PFNGLPATHGLYPHSNVPROC) Load_Function("glPathGlyphsNV"); 
	if(glPathGlyphsNV != nullptr) count++;
	glPathGlyphRangeNV = (PFNGLPATHGLYPHRANGENVPROC) Load_Function("glPathGlyphRangeNV"); 
	if(glPathGlyphRangeNV != nullptr) count++;
	glWeightPathsNV = (PFNGLWEIGHTPATHSNVPROC) Load_Function("glWeightPathsNV"); 
	if(glWeightPathsNV != nullptr) count++;
	glCopyPathNV = (PFNGLCOPYPATHNVPROC) Load_Function("glCopyPathNV"); 
	if(glCopyPathNV != nullptr) count++;
	glInterpolatePathsNV = (PFNGLINTERPOLATEPATHSNVPROC) Load_Function("glInterpolatePathsNV"); 
	if(glInterpolatePathsNV != nullptr) count++;
	glTransformPathNV = (PFNGLTRANSFORMPATHNVPROC) Load_Function("glTransformPathNV"); 
	if(glTransformPathNV != nullptr) count++;
	glPathParameterivNV = (PFNGLPATHPARAMETERIVNVPROC) Load_Function("glPathParameterivNV"); 
	if(glPathParameterivNV != nullptr) count++;
	glPathParameteriNV = (PFNGLPATHPARAMETERINVPROC) Load_Function("glPathParameteriNV"); 
	if(glPathParameteriNV != nullptr) count++;
	glPathParameterfvNV = (PFNGLPATHPARAMETERFVNVPROC) Load_Function("glPathParameterfvNV"); 
	if(glPathParameterfvNV != nullptr) count++;
	glPathParameterfNV = (PFNGLPATHPARAMETERFNVPROC) Load_Function("glPathParameterfNV"); 
	if(glPathParameterfNV != nullptr) count++;
	glPathDashArrayNV = (PFNGLPATHDASHARRAYNVPROC) Load_Function("glPathDashArrayNV"); 
	if(glPathDashArrayNV != nullptr) count++;
	glPathStencilFuncNV = (PFNGLPATHSTENCILFUNCNVPROC) Load_Function("glPathStencilFuncNV"); 
	if(glPathStencilFuncNV != nullptr) count++;
	glPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) Load_Function("glPathStencilDepthOffsetNV"); 
	if(glPathStencilDepthOffsetNV != nullptr) count++;
	glStencilFillPathNV = (PFNGLSTENCILFILLPATHNVPROC) Load_Function("glStencilFillPathNV"); 
	if(glStencilFillPathNV != nullptr) count++;
	glStencilStrokePathNV = (PFNGLSTENCILSTROKEPATHNVPROC) Load_Function("glStencilStrokePathNV"); 
	if(glStencilStrokePathNV != nullptr) count++;
	glStencilFillPathInstancedNV = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) Load_Function("glStencilFillPathInstancedNV"); 
	if(glStencilFillPathInstancedNV != nullptr) count++;
	glStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) Load_Function("glStencilStrokePathInstancedNV"); 
	if(glStencilStrokePathInstancedNV != nullptr) count++;
	glPathCoverDepthFuncNV = (PFNGLPATHCOVERDEPTHFUNCNVPROC) Load_Function("glPathCoverDepthFuncNV"); 
	if(glPathCoverDepthFuncNV != nullptr) count++;
	glCoverFillPathNV = (PFNGLCOVERFILLPATHNVPROC) Load_Function("glCoverFillPathNV"); 
	if(glCoverFillPathNV != nullptr) count++;
	glCoverStrokePathNV = (PFNGLCOVERSTROKEPATHNVPROC) Load_Function("glCoverStrokePathNV"); 
	if(glCoverStrokePathNV != nullptr) count++;
	glCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) Load_Function("glCoverFillPathInstancedNV"); 
	if(glCoverFillPathInstancedNV != nullptr) count++;
	glCoverStrokePathInstancedNV = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) Load_Function("glCoverStrokePathInstancedNV"); 
	if(glCoverStrokePathInstancedNV != nullptr) count++;
	glGetPathParameterivNV = (PFNGLGETPATHPARAMETERIVNVPROC) Load_Function("glGetPathParameterivNV"); 
	if(glGetPathParameterivNV != nullptr) count++;
	glGetPathParameterfvNV = (PFNGLGETPATHPARAMETERFVNVPROC) Load_Function("glGetPathParameterfvNV"); 
	if(glGetPathParameterfvNV != nullptr) count++;
	glGetPathCommandsNV = (PFNGLGETPATHCOMMANDSNVPROC) Load_Function("glGetPathCommandsNV"); 
	if(glGetPathCommandsNV != nullptr) count++;
	glGetPathCoordsNV = (PFNGLGETPATHCOORDSNVPROC) Load_Function("glGetPathCoordsNV"); 
	if(glGetPathCoordsNV != nullptr) count++;
	glGetPathDashArrayNV = (PFNGLGETPATHDASHARRAYNVPROC) Load_Function("glGetPathDashArrayNV"); 
	if(glGetPathDashArrayNV != nullptr) count++;
	glGetPathMetricsNV = (PFNGLGETPATHMETRICSNVPROC) Load_Function("glGetPathMetricsNV"); 
	if(glGetPathMetricsNV != nullptr) count++;
	glGetPathMetricRangeNV = (PFNGLGETPATHMETRICRANGENVPROC) Load_Function("glGetPathMetricRangeNV"); 
	if(glGetPathMetricRangeNV != nullptr) count++;
	glGetPathSpacingNV = (PFNGLGETPATHSPACINGNVPROC) Load_Function("glGetPathSpacingNV"); 
	if(glGetPathSpacingNV != nullptr) count++;
	glIsPointInFillPathNV = (PFNGLISPOINTINFILLPATHNVPROC) Load_Function("glIsPointInFillPathNV"); 
	if(glIsPointInFillPathNV != nullptr) count++;
	glIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC) Load_Function("glIsPointInStrokePathNV"); 
	if(glIsPointInStrokePathNV != nullptr) count++;
	glGetPathLengthNV = (PFNGLGETPATHLENGTHNVPROC) Load_Function("glGetPathLengthNV"); 
	if(glGetPathLengthNV != nullptr) count++;
	glPointAlongPathNV = (PFNGLPOINTALONGPATHNVPROC) Load_Function("glPointAlongPathNV"); 
	if(glPointAlongPathNV != nullptr) count++;
	glMatrixLoad3x2fNV = (PFNGLMATRIXLOAD3X2FNVPROC) Load_Function("glMatrixLoad3x2fNV"); 
	if(glMatrixLoad3x2fNV != nullptr) count++;
	glMatrixLoad3x3fNV = (PFNGLMATRIXLOAD3X3FNVPROC) Load_Function("glMatrixLoad3x3fNV"); 
	if(glMatrixLoad3x3fNV != nullptr) count++;
	glMatrixLoadTranspose3x3fNV = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) Load_Function("glMatrixLoadTranspose3x3fNV"); 
	if(glMatrixLoadTranspose3x3fNV != nullptr) count++;
	glMatrixMult3x2fNV = (PFNGLMATRIXMULT3X2FNVPROC) Load_Function("glMatrixMult3x2fNV"); 
	if(glMatrixMult3x2fNV != nullptr) count++;
	glMatrixMult3x3fNV = (PFNGLMATRIXMULT3X3FNVPROC) Load_Function("glMatrixMult3x3fNV"); 
	if(glMatrixMult3x3fNV != nullptr) count++;
	glMatrixMultTranspose3x3fNV = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) Load_Function("glMatrixMultTranspose3x3fNV"); 
	if(glMatrixMultTranspose3x3fNV != nullptr) count++;
	glStencilThenCoverFillPathNV = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) Load_Function("glStencilThenCoverFillPathNV"); 
	if(glStencilThenCoverFillPathNV != nullptr) count++;
	glStencilThenCoverStrokePathNV = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) Load_Function("glStencilThenCoverStrokePathNV"); 
	if(glStencilThenCoverStrokePathNV != nullptr) count++;
	glStencilThenCoverFillPathInstancedNV = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) Load_Function("glStencilThenCoverFillPathInstancedNV"); 
	if(glStencilThenCoverFillPathInstancedNV != nullptr) count++;
	glStencilThenCoverStrokePathInstancedNV = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) Load_Function("glStencilThenCoverStrokePathInstancedNV"); 
	if(glStencilThenCoverStrokePathInstancedNV != nullptr) count++;
	glPathGlyphIndexRangeNV = (PFNGLPATHGLYPHINDEXRANGENVPROC) Load_Function("glPathGlyphIndexRangeNV"); 
	if(glPathGlyphIndexRangeNV != nullptr) count++;
	glPathGlyphIndexArrayNV = (PFNGLPATHGLYPHINDEXARRAYNVPROC) Load_Function("glPathGlyphIndexArrayNV"); 
	if(glPathGlyphIndexArrayNV != nullptr) count++;
	glPathMemoryGlyphIndexArrayNV = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) Load_Function("glPathMemoryGlyphIndexArrayNV"); 
	if(glPathMemoryGlyphIndexArrayNV != nullptr) count++;
	glProgramPathFragmentInputGenNV = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) Load_Function("glProgramPathFragmentInputGenNV"); 
	if(glProgramPathFragmentInputGenNV != nullptr) count++;
	glGetProgramResourcefvNV = (PFNGLGETPROGRAMRESOURCEFVNVPROC) Load_Function("glGetProgramResourcefvNV"); 
	if(glGetProgramResourcefvNV != nullptr) count++;
	glFramebufferSampleLocationsfvNV = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) Load_Function("glFramebufferSampleLocationsfvNV"); 
	if(glFramebufferSampleLocationsfvNV != nullptr) count++;
	glNamedFramebufferSampleLocationsfvNV = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) Load_Function("glNamedFramebufferSampleLocationsfvNV"); 
	if(glNamedFramebufferSampleLocationsfvNV != nullptr) count++;
	glResolveDepthValuesNV = (PFNGLRESOLVEDEPTHVALUESNVPROC) Load_Function("glResolveDepthValuesNV"); 
	if(glResolveDepthValuesNV != nullptr) count++;
	glScissorExclusiveNV = (PFNGLSCISSOREXCLUSIVENVPROC) Load_Function("glScissorExclusiveNV"); 
	if(glScissorExclusiveNV != nullptr) count++;
	glScissorExclusiveArrayvNV = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) Load_Function("glScissorExclusiveArrayvNV"); 
	if(glScissorExclusiveArrayvNV != nullptr) count++;
	glMakeBufferResidentNV = (PFNGLMAKEBUFFERRESIDENTNVPROC) Load_Function("glMakeBufferResidentNV"); 
	if(glMakeBufferResidentNV != nullptr) count++;
	glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC) Load_Function("glMakeBufferNonResidentNV"); 
	if(glMakeBufferNonResidentNV != nullptr) count++;
	glIsBufferResidentNV = (PFNGLISBUFFERRESIDENTNVPROC) Load_Function("glIsBufferResidentNV"); 
	if(glIsBufferResidentNV != nullptr) count++;
	glMakeNamedBufferResidentNV = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) Load_Function("glMakeNamedBufferResidentNV"); 
	if(glMakeNamedBufferResidentNV != nullptr) count++;
	glMakeNamedBufferNonResidentNV = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) Load_Function("glMakeNamedBufferNonResidentNV"); 
	if(glMakeNamedBufferNonResidentNV != nullptr) count++;
	glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC) Load_Function("glIsNamedBufferResidentNV"); 
	if(glIsNamedBufferResidentNV != nullptr) count++;
	glGetBufferParameterui64vNV = (PFNGLGETBUFFERPARAMETERUI64VNVPROC) Load_Function("glGetBufferParameterui64vNV"); 
	if(glGetBufferParameterui64vNV != nullptr) count++;
	glGetNamedBufferParameterui64vNV = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) Load_Function("glGetNamedBufferParameterui64vNV"); 
	if(glGetNamedBufferParameterui64vNV != nullptr) count++;
	glGetIntegerui64vNV = (PFNGLGETINTEGERUI64VNVPROC) Load_Function("glGetIntegerui64vNV"); 
	if(glGetIntegerui64vNV != nullptr) count++;
	glUniformui64NV = (PFNGLUNIFORMUI64NVPROC) Load_Function("glUniformui64NV"); 
	if(glUniformui64NV != nullptr) count++;
	glUniformui64vNV = (PFNGLUNIFORMUI64VNVPROC) Load_Function("glUniformui64vNV"); 
	if(glUniformui64vNV != nullptr) count++;
	glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC) Load_Function("glGetUniformui64vNV"); 
	if(glGetUniformui64vNV != nullptr) count++;
	glProgramUniformui64NV = (PFNGLPROGRAMUNIFORMUI64NVPROC) Load_Function("glProgramUniformui64NV"); 
	if(glProgramUniformui64NV != nullptr) count++;
	glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC) Load_Function("glProgramUniformui64vNV"); 
	if(glProgramUniformui64vNV != nullptr) count++;
	glBindShadingRateImageNV = (PFNGLBINDSHADINGRATEIMAGENVPROC) Load_Function("glBindShadingRateImageNV"); 
	if(glBindShadingRateImageNV != nullptr) count++;
	glGetShadingRateImagePaletteNV = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) Load_Function("glGetShadingRateImagePaletteNV"); 
	if(glGetShadingRateImagePaletteNV != nullptr) count++;
	glGetShadingRateSampleLocationivNV = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) Load_Function("glGetShadingRateSampleLocationivNV"); 
	if(glGetShadingRateSampleLocationivNV != nullptr) count++;
	glShadingRateImageBarrierNV = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) Load_Function("glShadingRateImageBarrierNV"); 
	if(glShadingRateImageBarrierNV != nullptr) count++;
	glShadingRateImagePaletteNV = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) Load_Function("glShadingRateImagePaletteNV"); 
	if(glShadingRateImagePaletteNV != nullptr) count++;
	glShadingRateSampleOrderNV = (PFNGLSHADINGRATESAMPLEORDERNVPROC) Load_Function("glShadingRateSampleOrderNV"); 
	if(glShadingRateSampleOrderNV != nullptr) count++;
	glShadingRateSampleOrderCustomNV = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) Load_Function("glShadingRateSampleOrderCustomNV"); 
	if(glShadingRateSampleOrderCustomNV != nullptr) count++;
	glTextureBarrierNV = (PFNGLTEXTUREBARRIERNVPROC) Load_Function("glTextureBarrierNV"); 
	if(glTextureBarrierNV != nullptr) count++;
	glVertexAttribL1i64NV = (PFNGLVERTEXATTRIBL1I64NVPROC) Load_Function("glVertexAttribL1i64NV"); 
	if(glVertexAttribL1i64NV != nullptr) count++;
	glVertexAttribL2i64NV = (PFNGLVERTEXATTRIBL2I64NVPROC) Load_Function("glVertexAttribL2i64NV"); 
	if(glVertexAttribL2i64NV != nullptr) count++;
	glVertexAttribL3i64NV = (PFNGLVERTEXATTRIBL3I64NVPROC) Load_Function("glVertexAttribL3i64NV"); 
	if(glVertexAttribL3i64NV != nullptr) count++;
	glVertexAttribL4i64NV = (PFNGLVERTEXATTRIBL4I64NVPROC) Load_Function("glVertexAttribL4i64NV"); 
	if(glVertexAttribL4i64NV != nullptr) count++;
	glVertexAttribL1i64vNV = (PFNGLVERTEXATTRIBL1I64VNVPROC) Load_Function("glVertexAttribL1i64vNV"); 
	if(glVertexAttribL1i64vNV != nullptr) count++;
	glVertexAttribL2i64vNV = (PFNGLVERTEXATTRIBL2I64VNVPROC) Load_Function("glVertexAttribL2i64vNV"); 
	if(glVertexAttribL2i64vNV != nullptr) count++;
	glVertexAttribL3i64vNV = (PFNGLVERTEXATTRIBL3I64VNVPROC) Load_Function("glVertexAttribL3i64vNV"); 
	if(glVertexAttribL3i64vNV != nullptr) count++;
	glVertexAttribL4i64vNV = (PFNGLVERTEXATTRIBL4I64VNVPROC) Load_Function("glVertexAttribL4i64vNV"); 
	if(glVertexAttribL4i64vNV != nullptr) count++;
	glVertexAttribL1ui64NV = (PFNGLVERTEXATTRIBL1UI64NVPROC) Load_Function("glVertexAttribL1ui64NV"); 
	if(glVertexAttribL1ui64NV != nullptr) count++;
	glVertexAttribL2ui64NV = (PFNGLVERTEXATTRIBL2UI64NVPROC) Load_Function("glVertexAttribL2ui64NV"); 
	if(glVertexAttribL2ui64NV != nullptr) count++;
	glVertexAttribL3ui64NV = (PFNGLVERTEXATTRIBL3UI64NVPROC) Load_Function("glVertexAttribL3ui64NV"); 
	if(glVertexAttribL3ui64NV != nullptr) count++;
	glVertexAttribL4ui64NV = (PFNGLVERTEXATTRIBL4UI64NVPROC) Load_Function("glVertexAttribL4ui64NV"); 
	if(glVertexAttribL4ui64NV != nullptr) count++;
	glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC) Load_Function("glVertexAttribL1ui64vNV"); 
	if(glVertexAttribL1ui64vNV != nullptr) count++;
	glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC) Load_Function("glVertexAttribL2ui64vNV"); 
	if(glVertexAttribL2ui64vNV != nullptr) count++;
	glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC) Load_Function("glVertexAttribL3ui64vNV"); 
	if(glVertexAttribL3ui64vNV != nullptr) count++;
	glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC) Load_Function("glVertexAttribL4ui64vNV"); 
	if(glVertexAttribL4ui64vNV != nullptr) count++;
	glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC) Load_Function("glGetVertexAttribLi64vNV"); 
	if(glGetVertexAttribLi64vNV != nullptr) count++;
	glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC) Load_Function("glGetVertexAttribLui64vNV"); 
	if(glGetVertexAttribLui64vNV != nullptr) count++;
	glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC) Load_Function("glVertexAttribLFormatNV"); 
	if(glVertexAttribLFormatNV != nullptr) count++;
	glBufferAddressRangeNV = (PFNGLBUFFERADDRESSRANGENVPROC) Load_Function("glBufferAddressRangeNV"); 
	if(glBufferAddressRangeNV != nullptr) count++;
	glVertexFormatNV = (PFNGLVERTEXFORMATNVPROC) Load_Function("glVertexFormatNV"); 
	if(glVertexFormatNV != nullptr) count++;
	glNormalFormatNV = (PFNGLNORMALFORMATNVPROC) Load_Function("glNormalFormatNV"); 
	if(glNormalFormatNV != nullptr) count++;
	glColorFormatNV = (PFNGLCOLORFORMATNVPROC) Load_Function("glColorFormatNV"); 
	if(glColorFormatNV != nullptr) count++;
	glIndexFormatNV = (PFNGLINDEXFORMATNVPROC) Load_Function("glIndexFormatNV"); 
	if(glIndexFormatNV != nullptr) count++;
	glTexCoordFormatNV = (PFNGLTEXCOORDFORMATNVPROC) Load_Function("glTexCoordFormatNV"); 
	if(glTexCoordFormatNV != nullptr) count++;
	glEdgeFlagFormatNV = (PFNGLEDGEFLAGFORMATNVPROC) Load_Function("glEdgeFlagFormatNV"); 
	if(glEdgeFlagFormatNV != nullptr) count++;
	glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC) Load_Function("glSecondaryColorFormatNV"); 
	if(glSecondaryColorFormatNV != nullptr) count++;
	glFogCoordFormatNV = (PFNGLFOGCOORDFORMATNVPROC) Load_Function("glFogCoordFormatNV"); 
	if(glFogCoordFormatNV != nullptr) count++;
	glVertexAttribFormatNV = (PFNGLVERTEXATTRIBFORMATNVPROC) Load_Function("glVertexAttribFormatNV"); 
	if(glVertexAttribFormatNV != nullptr) count++;
	glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC) Load_Function("glVertexAttribIFormatNV"); 
	if(glVertexAttribIFormatNV != nullptr) count++;
	glGetIntegerui64i_vNV = (PFNGLGETINTEGERUI64I_VNVPROC) Load_Function("glGetIntegerui64i_vNV"); 
	if(glGetIntegerui64i_vNV != nullptr) count++;
	glViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC) Load_Function("glViewportSwizzleNV"); 
	if(glViewportSwizzleNV != nullptr) count++;
	glFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) Load_Function("glFramebufferTextureMultiviewOVR"); 
	if(glFramebufferTextureMultiviewOVR != nullptr) count++;

	return count; 
}

};

#endif