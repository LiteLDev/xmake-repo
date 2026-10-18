#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/SampleDescription.h"
#include "mc/deps/renderer/hal/enums/SwapEffect.h"
#include "mc/deps/renderer/hal/enums/VerticalSync.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RendererSettings : public ::mce::Singleton<::mce::RendererSettings> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb37afb;
    ::ll::UntypedStorage<4, 4> mUnk6abb3c;
    ::ll::UntypedStorage<1, 1> mUnkee5f7a;
    ::ll::UntypedStorage<4, 8> mUnkb59522;
    ::ll::UntypedStorage<4, 8> mUnkccb84d;
    ::ll::UntypedStorage<4, 8> mUnk8893f0;
    ::ll::UntypedStorage<4, 8> mUnk6c10ba;
    ::ll::UntypedStorage<4, 4> mUnk8730ae;
    ::ll::UntypedStorage<1, 1> mUnk93d103;
    ::ll::UntypedStorage<1, 1> mUnkd6c706;
    ::ll::UntypedStorage<8, 8> mUnkfb98e9;
    ::ll::UntypedStorage<1, 1> mUnk264043;
    ::ll::UntypedStorage<1, 1> mUnk24751b;
    ::ll::UntypedStorage<1, 1> mUnk93690f;
    ::ll::UntypedStorage<1, 1> mUnk131db1;
    ::ll::UntypedStorage<1, 1> mUnk852238;
    ::ll::UntypedStorage<1, 1> mUnka0d79d;
    ::ll::UntypedStorage<1, 1> mUnk8ae95b;
    ::ll::UntypedStorage<1, 1> mUnk581585;
    // NOLINTEND

public:
    // prevent constructor by default
    RendererSettings& operator=(RendererSettings const&);
    RendererSettings(RendererSettings const&);
    RendererSettings();
};
#else // @header-generator platform
class RendererSettings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
