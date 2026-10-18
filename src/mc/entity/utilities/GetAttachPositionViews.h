#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

struct GetAttachPositionViews {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnkb604d8;
    ::ll::UntypedStorage<8, 24> mUnk9d4038;
    ::ll::UntypedStorage<8, 24> mUnk35c019;
    ::ll::UntypedStorage<8, 24> mUnkca2840;
    ::ll::UntypedStorage<8, 56> mUnka88592;
    ::ll::UntypedStorage<8, 56> mUnk96dd44;
    ::ll::UntypedStorage<8, 56> mUnk9a49e4;
    ::ll::UntypedStorage<8, 24> mUnk253352;
    ::ll::UntypedStorage<8, 64> mUnk97bee7;
    ::ll::UntypedStorage<8, 24> mUnkfdb20f;
    ::ll::UntypedStorage<8, 24> mUnk3b71c6;
    ::ll::UntypedStorage<8, 24> mUnk8adc02;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GetAttachPositionViews& operator=(GetAttachPositionViews const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GetAttachPositionViews(GetAttachPositionViews const&);
#endif // @header-generator platform
    GetAttachPositionViews();
};
