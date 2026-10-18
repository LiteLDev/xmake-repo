#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct ActorRotationComponent;
struct HorseFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
// clang-format on

struct InterpolatedRidingPositionCalculationHelper {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 getCamelInterpolatedRidingOffset(bool);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI static ::Vec3 getHorseInterpolatedRidingOffset(
        ::StrictEntityContext const&                                                                            entity,
        ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>, ::StandAnimationComponent const> const& horses,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorRotationComponent const,
            ::RenderRotationComponent const,
            ::StateVectorComponent const,
            ::ActorDataFlagComponent const,
            ::ActorDataSeatOffsetComponent const> const& commonData,
        float                                            alpha
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& BASE_OFFSET();
#else // @header-generator platform
    MCNAPI static float getInterpolatedBodyRot(
        ::StrictEntityContext const& entity,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorRotationComponent const,
            ::RenderRotationComponent const,
            ::StateVectorComponent const,
            ::ActorDataFlagComponent const,
            ::ActorDataSeatOffsetComponent const> const& commonData,
        ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::MobBodyRotationComponent const> const& mobs,
        float                                                                                                  alpha
    );
#endif // @header-generator platform
    // NOLINTEND
};
