#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/external/render_dragon/materials/definition/ShaderCodePlatform.h"
#include "mc/external/render_dragon/platform/FramePacingStatistics.h"
#include "mc/external/render_dragon/platform/RegistryStatistics.h"
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/platform/ViewStatistics.h"

namespace dragon::platform {

struct Statistics {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    Statistics& operator=(Statistics const&);
    Statistics();

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
};

} // namespace dragon::platform
