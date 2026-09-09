#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct CamelFlagComponent;
struct HorseFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

struct GetAttachPositionViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mCommonData;
    ::ll::UntypedStorage<8, 24> mPassengers;
    ::ll::UntypedStorage<8, 24> mParrots;
    ::ll::UntypedStorage<8, 24> mVehicles;
    ::ll::UntypedStorage<8, 56> mHorses;
    ::ll::UntypedStorage<8, 56> mMobs;
    ::ll::UntypedStorage<8, 56> mCamels;
    ::ll::UntypedStorage<8, 24> mPlayers;
    ::ll::UntypedStorage<8, 64> mMainAttachView;
    ::ll::UntypedStorage<8, 24> mPassengerRenderingView;
    ::ll::UntypedStorage<8, 24> mVanillaOffsetView;
    ::ll::UntypedStorage<8, 24> mRotationsView;
    // NOLINTEND

public:
    // prevent constructor by default
    GetAttachPositionViews& operator=(GetAttachPositionViews const&);
    GetAttachPositionViews();
};
