#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components_json_legacy/GameEventMovementTrackingSettings.h"
#include "mc/world/level/Tick.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class GameEventMovementTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>  mNextFlapTick;
    ::ll::TypedStorage<4, 12, ::Vec3> mPrevPos;
    ::ll::TypedStorage<4, 4, float>   mStep;
    ::ll::TypedStorage<4, 4, float>   mNextStep;
    ::ll::TypedStorage<4, 4, float>   mMoveDist;
    ::ll::TypedStorage<1, 1, bool>    mConsiderVerticalComponentForAmphibiousMovement;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 4, std::optional<GameEventMovementTrackingSettings>> mSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializeFromCode(::Actor&, bool);

    MCNAPI bool shouldEmitEntityMoveGameEvent();

    MCNAPI bool shouldEmitFlapGameEvent();

    MCNAPI bool shouldEmitSwimGameEvent();
#else // @header-generator platform
    ::ll::TypedStorage<1, 4, ::std::optional<::GameEventMovementTrackingSettings>> mSettings;
#endif // @header-generator platform
    // NOLINTEND
};
