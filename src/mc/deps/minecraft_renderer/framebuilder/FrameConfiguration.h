#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeRenderingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/ViewType.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace mce::framebuilder {

struct FrameConfiguration {
public:
    // FrameConfiguration inner types declare
    // clang-format off
    struct View;
    // clang-format on

    // FrameConfiguration inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ViewSubmersionState : int {
        Emerged   = 0,
        Submerged = 1,
    };
#else // @header-generator platform
    enum class ViewSubmersionState : int {};
#endif // @header-generator platform

    struct View {
    public:
        // View inner types declare
        // clang-format off
        struct ShadowMap;
        // clang-format on

        // View inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct ShadowMap {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCascadeViewPos;
            ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCascadeDir;
            ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mUp;
            ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCenter;
            ::ll::TypedStorage<4, 4, float> mWidth;
            ::ll::TypedStorage<4, 4, float> mDepth;
            ::ll::TypedStorage<8, 16, std::optional<std::reference_wrapper<const mce::framebuilder::PerCascadeRenderingParameters>>> mRenderingParameters;
            ::ll::TypedStorage<1, 1, bool> mShouldRender;
            // clang-format on
            // NOLINTEND

        public:
            // prevent constructor by default
            ShadowMap& operator=(ShadowMap const&);
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                                                        mPlayerId;
        ::ll::UntypedStorage<4, 16>                                                            mViewport;
        ::ll::TypedStorage<4, 4, float>                                                        mGuiScale;
        ::ll::TypedStorage<1, 1, bool>                                                         mSkipUI;
        ::ll::TypedStorage<4, 4, ::mce::framebuilder::FrameConfiguration::ViewSubmersionState> mWaterSubmersionState;
        ::ll::TypedStorage<4, 4, ::mce::framebuilder::FrameConfiguration::ViewSubmersionState> mLavaSubmersionState;
        ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>                  mView;
        ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>                  mProj;
        ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>                  mItemInHandView;
        ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>                  mItemInHandProj;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>                     mWorldOrigin;
        ::ll::TypedStorage<4, 16, ::mce::Color>                                                mFillColor;
        ::ll::TypedStorage<4, 4, float>                                                        mShadowFadeDistance;
        ::ll::TypedStorage<1, 4, ::glm::vec<4, uchar, (glm::qualifier)0>>                      mCascadesPerSet;
        ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::FrameConfiguration::View::ShadowMap>> mShadowCascades;
        ::ll::TypedStorage<8, 80, ::mce::framebuilder::FrameConfiguration::View::ShadowMap>            mPlayerShadow;
        ::ll::TypedStorage<8, 80, ::mce::framebuilder::FrameConfiguration::View::ShadowMap> mCloudShadowCascade;
        ::ll::TypedStorage<1, 1, bool>                                                      mForceFullScreenResolution;
        ::ll::TypedStorage<4, 4, ::mce::framebuilder::ViewType>                             viewType;
        // NOLINTEND

    public:
        // prevent constructor by default
        View& operator=(View const&);
        View();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI View(::mce::framebuilder::FrameConfiguration::View&&);

        MCNAPI View(::mce::framebuilder::FrameConfiguration::View const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::mce::framebuilder::FrameConfiguration::View&&);

        MCNAPI void* $ctor(::mce::framebuilder::FrameConfiguration::View const&);
        // NOLINTEND
#else // @header-generator platform
        struct ShadowMap {};
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::FrameConfiguration::View>> mViews;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::FrameConfiguration::View>> mChildViews;
    ::ll::TypedStorage<4, 8, std::optional<dragon::rendering::LightingModels>>          mLightingModelOverride;
    ::ll::TypedStorage<8, 8, ::cg::ImageBuffer*>                                        mTargetImage;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameConfiguration& operator=(FrameConfiguration const&);
    FrameConfiguration(FrameConfiguration const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FrameConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace mce::framebuilder
