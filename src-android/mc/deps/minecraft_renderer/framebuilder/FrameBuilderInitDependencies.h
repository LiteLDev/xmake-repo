#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace mce::framebuilder {

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

} // namespace mce::framebuilder
