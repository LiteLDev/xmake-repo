#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeRenderingParameters.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ShadowRenderingParameters {
public:
    // ShadowRenderingParameters inner types declare
    // clang-format off
    struct ShadowMap;
    // clang-format on

    // ShadowRenderingParameters inner types define
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
        ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mView;
        ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mMVP;
        // clang-format on
        // NOLINTEND
    };

    using ShadowCascade = std::vector<ShadowRenderingParameters::ShadowMap>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                 mShadowFadeDistance;
    ::ll::TypedStorage<1, 4, ::glm::vec<4, uchar, (glm::qualifier)0>>               mCascadesPerSet;
    ::ll::TypedStorage<8, 24, std::vector<ShadowRenderingParameters::ShadowMap>>    mShadowCascade;
    ::ll::TypedStorage<8, 216, std::optional<ShadowRenderingParameters::ShadowMap>> mPlayerShadowMap;
    // NOLINTEND
#else // @header-generator platform
    struct ShadowMap {};
#endif // @header-generator platform
};
