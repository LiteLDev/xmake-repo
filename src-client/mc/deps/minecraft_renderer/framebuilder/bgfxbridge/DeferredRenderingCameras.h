#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/PassCamera.h"

namespace mce::framebuilder::bgfxbridge {

struct DeferredRenderingCameras {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mPlayerScreenViewports;
    ::ll::UntypedStorage<8, 24> mPlayerRenderTargetViewports;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mJitteredPlayerSceneRenderCameras;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mUnjitteredPlayerSceneRenderCameras;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mPlayerSceneDisplayCameras;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mPlayerShadowCascadeCameras;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mPlayerFirstPersonShadowCameras;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mPlayerCloudShadowCameras;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mPlayerItemInHandCameras;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PassCamera>> mPlayerUICameras;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeferredRenderingCameras();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
