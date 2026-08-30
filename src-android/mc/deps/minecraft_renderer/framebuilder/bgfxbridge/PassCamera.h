#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/ViewSet.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"
#include "mc/external/render_dragon/rendering/Camera.h"

namespace mce::framebuilder::bgfxbridge {

struct PassCamera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 280, ::dragon::rendering::Camera const>                               mCamera;
    ::ll::TypedStorage<8, 24, ::dragon::framerenderer::ViewSet const>                           mViewSet;
    ::ll::TypedStorage<8, 64, std::optional<dragon::materials::MaterialUniformOverrides> const> mGlobalOverrides;
    // NOLINTEND

public:
    // prevent constructor by default
    PassCamera& operator=(PassCamera const&);
    PassCamera();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PassCamera(::mce::framebuilder::bgfxbridge::PassCamera const&);

    MCNAPI PassCamera(
        ::dragon::rendering::Camera const&,
        ::dragon::framerenderer::ViewSet const&,
        std::optional<dragon::materials::MaterialUniformOverrides> const&
    );

    MCNAPI ~PassCamera();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::bgfxbridge::PassCamera const&);

    MCNAPI void* $ctor(
        ::dragon::rendering::Camera const&,
        ::dragon::framerenderer::ViewSet const&,
        std::optional<dragon::materials::MaterialUniformOverrides> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
