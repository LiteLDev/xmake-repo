#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "android/native_window.h"
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/texture_streaming/TextureStreamingConfiguration.h"

// auto generated forward declare list
// clang-format off
struct AndroidSurfaceParameters;
namespace dragon { class ResolvedTextureResource; }
namespace dragon::atlas { class IAtlasRenderOperations; }
namespace dragon::framerenderer { struct DebugParameters; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct FrameBuilderInitDependencies {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> const&> mSurfaceParams;
    ::ll::TypedStorage<4, 4, uint const> mScreenWidth;
    ::ll::TypedStorage<4, 4, uint const> mScreenHeight;
    ::ll::UntypedStorage<8, 16> mDebugParameters;
    ::ll::TypedStorage<8, 160, ::dragon::texturestreaming::TextureStreamingConfiguration> mTextureStreamingConfig;
    ::ll::TypedStorage<8, 8, std::function<mce::ServerResourcePointer<dragon::ResolvedTextureResource> (const std::string&, const std::string&)> const&> mTextureLoadCallback;
    ::ll::TypedStorage<8, 8, std::function<bool (const std::string&, std::string&)> const&> mMaterialLoadCallback;
    ::ll::TypedStorage<1, 1, ::dragon::platform::RenderAPI> mPreferredRenderer;
    ::ll::UntypedStorage<8, 24> mAtlas;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBuilderInitDependencies& operator=(FrameBuilderInitDependencies const&);
    FrameBuilderInitDependencies(FrameBuilderInitDependencies const&);
    FrameBuilderInitDependencies();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FrameBuilderInitDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk2dde99;
    ::ll::UntypedStorage<4, 4>   mUnk5b574e;
    ::ll::UntypedStorage<4, 4>   mUnk733503;
    ::ll::UntypedStorage<8, 8>   mUnk9c5971;
    ::ll::UntypedStorage<8, 176> mUnkf5aa5c;
    ::ll::UntypedStorage<8, 8>   mUnkbd877e;
    ::ll::UntypedStorage<8, 8>   mUnke9bae3;
    ::ll::UntypedStorage<1, 1>   mUnk6308e7;
    ::ll::UntypedStorage<8, 16>  mUnk7eb84e;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBuilderInitDependencies& operator=(FrameBuilderInitDependencies const&);
    FrameBuilderInitDependencies(FrameBuilderInitDependencies const&);
    FrameBuilderInitDependencies();
};
#else // @header-generator platform
struct FrameBuilderInitDependencies {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce::framebuilder
