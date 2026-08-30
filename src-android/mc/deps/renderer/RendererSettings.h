#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/SampleDescription.h"
#include "mc/deps/renderer/hal/enums/SwapEffect.h"
#include "mc/deps/renderer/hal/enums/VerticalSync.h"

namespace mce {

class RendererSettings : public ::mce::Singleton<mce::RendererSettings> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                    mBufferCount;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                    mBackBufferTextureFormat;
    ::ll::TypedStorage<1, 1, ::mce::SwapEffect>                       mSwapEffect;
    ::ll::TypedStorage<8, 16, ::mce::SampleDescription>               mBackBufferSampleDescription;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mOutputSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mLogicalSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCompositionScale;
    ::ll::TypedStorage<4, 4, float>                                   mDPI;
    ::ll::TypedStorage<1, 1, ::mce::VerticalSync>                     mVSync;
    ::ll::TypedStorage<1, 1, bool>                                    mTexelAA;
    ::ll::TypedStorage<8, 8, void*>                                   mHWND;
    ::ll::TypedStorage<1, 1, bool>                                    mRenderDragonRenderPath;
    ::ll::TypedStorage<1, 1, uchar>                                   mMsaaLevel;
    ::ll::TypedStorage<1, 1, bool>                                    mGpuValidationEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mLoadRenderDocDll;
    ::ll::TypedStorage<1, 1, bool>                                    mGpuValidationVerbose;
    ::ll::TypedStorage<1, 1, bool>                                    mGpuValidationManagerEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mGpuValidationDisableErrorSupress;
    ::ll::TypedStorage<1, 1, bool>                                    mBgfxDebugTraceEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    RendererSettings& operator=(RendererSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RendererSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce
