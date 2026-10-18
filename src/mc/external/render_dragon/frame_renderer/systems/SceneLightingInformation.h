#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/frame_object/components/ShadowQuality.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::framerenderer {

struct SceneLightingInformation {
public:
    // SceneLightingInformation inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct DirectionalLight;
#else // @header-generator platform
#endif // @header-generator platform
    struct AmbientLight;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct DirectionalLight;
#endif // @header-generator platform
    struct PointLight;
    // clang-format on

    // SceneLightingInformation inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct DirectionalLight {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>          mWorldSpaceDirection;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>          mColor;
        ::ll::TypedStorage<4, 4, float>                                             mIlluminance;
        ::ll::TypedStorage<4, 8, std::optional<dragon::frameobject::ShadowQuality>> mCastsShadows;
        ::ll::TypedStorage<1, 1, bool>                                              mIsSun;
        // NOLINTEND
#else // @header-generator platform
    struct AmbientLight {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        DirectionalLight& operator=(DirectionalLight const&);
        DirectionalLight();
    };
#else // @header-generator platform
    struct DirectionalLight {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct AmbientLight {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mColor;
        ::ll::TypedStorage<4, 4, float>                                    mIntensity;
        // NOLINTEND
    };

    struct PointLight {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>        mWorldSpacePosition;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>        mColor;
        ::ll::TypedStorage<4, 4, float>                                           mIntensity;
        ::ll::TypedStorage<4, 4, float>                                           mCutoffRadius;
        ::ll::TypedStorage<4, 4, float>                                           mScreenContribution;
        ::ll::TypedStorage<8, 192, std::array<dragon::atlas::AtlasTileHandle, 6>> mAtlasTiles;
        ::ll::TypedStorage<1, 1, bool>                                            mIsLarge;
        ::ll::TypedStorage<8, 8, ulong>                                           mHashCode;
        // NOLINTEND

    public:
        // prevent constructor by default
        PointLight& operator=(PointLight const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PointLight();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 44, std::optional<dragon::framerenderer::SceneLightingInformation::DirectionalLight>> mPrimaryDirectionalLight;
    ::ll::TypedStorage<4, 16, ::dragon::framerenderer::SceneLightingInformation::AmbientLight> mPrimaryAmbientLight;
    ::ll::UntypedStorage<8, 32> mPointLights;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SceneLightingInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SceneLightingInformation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct PointLight {};
#endif // @header-generator platform
};

} // namespace dragon::framerenderer
