#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeRenderingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/ViewType.h"
#include "mc/external/render_dragon/rendering/Camera.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace mce::framebuilder::bgfxbridge {

struct PlayerView {
public:
    // PlayerView inner types declare
    // clang-format off
    struct ShadowCamera;
    // clang-format on

    // PlayerView inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ShadowCamera {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 280, ::dragon::rendering::Camera>                       mCamera;
        ::ll::TypedStorage<1, 1, uchar>                                               mCascadeIndex;
        ::ll::TypedStorage<4, 32, ::mce::framebuilder::PerCascadeRenderingParameters> mRenderingParameters;
        ::ll::TypedStorage<1, 1, bool>                                                mShouldRender;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShadowCamera& operator=(ShadowCamera const&);
        ShadowCamera();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ShadowCamera(::mce::framebuilder::bgfxbridge::PlayerView::ShadowCamera const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::mce::framebuilder::bgfxbridge::PlayerView::ShadowCamera const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, uchar const> mPlayerId;
    ::ll::TypedStorage<8, 280, ::dragon::rendering::Camera const> mSceneCamera;
    ::ll::TypedStorage<8, 280, ::dragon::rendering::Camera const> mPlayerItemInHandCamera;
    ::ll::TypedStorage<8, 288, std::optional<dragon::rendering::Camera> const> mUICamera;
    ::ll::TypedStorage<8, 24, std::vector<ushort> const> mViewSets;
    ::ll::TypedStorage<4, 4, float const> mShadowFadeDistance;
    ::ll::TypedStorage<1, 4, ::glm::vec<4, uchar, (glm::qualifier)0> const> mCascadesPerSet;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PlayerView::ShadowCamera> const> mShadowCascades;
    ::ll::TypedStorage<8, 320, ::mce::framebuilder::bgfxbridge::PlayerView::ShadowCamera const> mPlayerShadowCamera;
    ::ll::TypedStorage<8, 320, ::mce::framebuilder::bgfxbridge::PlayerView::ShadowCamera const> mCloudShadow;
    ::ll::TypedStorage<1, 1, bool const> mIsUnderWater;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::ViewType> viewType;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerView& operator=(PlayerView const&);
    PlayerView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerView(::mce::framebuilder::bgfxbridge::PlayerView const&);

    MCNAPI ~PlayerView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::bgfxbridge::PlayerView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct ShadowCamera {};
#endif // @header-generator platform
};

} // namespace mce::framebuilder::bgfxbridge
