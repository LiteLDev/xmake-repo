#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/external/render_dragon/materials/definition/ShaderCodePlatform.h"
#include "mc/external/render_dragon/platform/FramePacingStatistics.h"
#include "mc/external/render_dragon/platform/RegistryStatistics.h"
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/platform/ViewStatistics.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::platform {

struct Statistics {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                                           mCpuTimeFrame;
    ::ll::TypedStorage<8, 8, long>                                           mCpuTimeBegin;
    ::ll::TypedStorage<8, 8, long>                                           mCpuTimeEnd;
    ::ll::TypedStorage<8, 8, long>                                           mCpuTimerFreq;
    ::ll::TypedStorage<8, 8, long>                                           mGpuTimeBegin;
    ::ll::TypedStorage<8, 8, long>                                           mGpuTimeEnd;
    ::ll::TypedStorage<8, 8, long>                                           mGpuTimerFreq;
    ::ll::TypedStorage<8, 8, long>                                           mWaitRender;
    ::ll::TypedStorage<8, 8, long>                                           mWaitSubmit;
    ::ll::TypedStorage<4, 4, uint>                                           mNumDraw;
    ::ll::TypedStorage<4, 4, uint>                                           mNumCompute;
    ::ll::TypedStorage<4, 4, uint>                                           mMaxGpuLatency;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumDynamicIndexBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumDynamicVertexBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumFrameBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumIndexBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumOcclusionQueries;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumPrograms;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumShaders;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumTextures;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumUniforms;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumVertexBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                         mNumVertexDecls;
    ::ll::TypedStorage<8, 8, long>                                           mTextureMemoryUsed;
    ::ll::TypedStorage<8, 8, long>                                           mRtMemoryUsed;
    ::ll::TypedStorage<4, 4, int>                                            mTransientVbUsed;
    ::ll::TypedStorage<4, 4, int>                                            mTransientIbUsed;
    ::ll::TypedStorage<8, 8, ulong>                                          mGpuMemoryMax;
    ::ll::TypedStorage<8, 8, ulong>                                          mGpuMemoryUsed;
    ::ll::TypedStorage<4, 12, ::dragon::platform::RegistryStatistics>        mRegistryStats;
    ::ll::TypedStorage<8, 24, ::dragon::platform::FramePacingStatistics>     mFramePacingStats;
    ::ll::UntypedStorage<8, 24>                                              mSupportedMSAALevels;
    ::ll::TypedStorage<1, 1, ::dragon::platform::RenderAPI>                  mRenderApi;
    ::ll::TypedStorage<1, 1, ::dragon::materials::ShaderCodePlatform>        mShaderPlatform;
    ::ll::TypedStorage<8, 24, std::vector<dragon::platform::ViewStatistics>> mViewStatistics;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnke57382;
    ::ll::UntypedStorage<8, 8>  mUnk626d4f;
    ::ll::UntypedStorage<8, 8>  mUnk4f1dff;
    ::ll::UntypedStorage<8, 8>  mUnk1a08b2;
    ::ll::UntypedStorage<8, 8>  mUnkcd0cda;
    ::ll::UntypedStorage<8, 8>  mUnk26bd4f;
    ::ll::UntypedStorage<8, 8>  mUnk8fdbec;
    ::ll::UntypedStorage<8, 8>  mUnk662f43;
    ::ll::UntypedStorage<8, 8>  mUnk6d93e9;
    ::ll::UntypedStorage<4, 4>  mUnk9b2cb9;
    ::ll::UntypedStorage<4, 4>  mUnk595b07;
    ::ll::UntypedStorage<4, 4>  mUnk833afb;
    ::ll::UntypedStorage<2, 2>  mUnk6ceab2;
    ::ll::UntypedStorage<2, 2>  mUnkeb6d64;
    ::ll::UntypedStorage<2, 2>  mUnk714fb1;
    ::ll::UntypedStorage<2, 2>  mUnk8880c6;
    ::ll::UntypedStorage<2, 2>  mUnke39f29;
    ::ll::UntypedStorage<2, 2>  mUnk4486b9;
    ::ll::UntypedStorage<2, 2>  mUnk5cc075;
    ::ll::UntypedStorage<2, 2>  mUnk7a8027;
    ::ll::UntypedStorage<2, 2>  mUnkf8ad03;
    ::ll::UntypedStorage<2, 2>  mUnkef2183;
    ::ll::UntypedStorage<2, 2>  mUnk9142f0;
    ::ll::UntypedStorage<8, 8>  mUnk4eed41;
    ::ll::UntypedStorage<8, 8>  mUnk15e4da;
    ::ll::UntypedStorage<4, 4>  mUnk116d14;
    ::ll::UntypedStorage<4, 4>  mUnkce0086;
    ::ll::UntypedStorage<8, 8>  mUnkdeb1ad;
    ::ll::UntypedStorage<8, 8>  mUnkf2f7ed;
    ::ll::UntypedStorage<4, 12> mUnkc242b8;
    ::ll::UntypedStorage<8, 24> mUnkf80d4e;
    ::ll::UntypedStorage<8, 24> mUnk1abc13;
    ::ll::UntypedStorage<1, 1>  mUnk4ef8fd;
    ::ll::UntypedStorage<1, 1>  mUnk9a3963;
    ::ll::UntypedStorage<8, 24> mUnk61e274;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Statistics& operator=(Statistics const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Statistics(Statistics const&);
#endif // @header-generator platform
    Statistics();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Statistics();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace dragon::platform
