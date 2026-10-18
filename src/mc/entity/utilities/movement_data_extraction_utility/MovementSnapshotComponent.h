#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataBoundingBoxComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/ActorDataHorseFlagComponent.h"
#include "mc/deps/vanilla_components/ActorDataJumpDurationComponent.h"
#include "mc/deps/vanilla_components/ActorDataSeatOffsetComponent.h"
#include "mc/deps/vanilla_components/HitboxComponent.h"
#include "mc/deps/vanilla_components/HorizontalCollisionFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/deps/vanilla_components/MovementAttributesComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/deps/vanilla_components/VanillaClientGameplayComponent.h"
#include "mc/entity/components/ActorGameTypeComponent.h"
#include "mc/entity/components/ActorHeadRotationComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/AirSpeedComponent.h"
#include "mc/entity/components/AttributesComponent.h"
#include "mc/entity/components/BlockMovementSlowdownMultiplierComponent.h"
#include "mc/entity/components/BoatMovementComponent.h"
#include "mc/entity/components/BoatPaddleComponent.h"
#include "mc/entity/components/ChunkPositionComponent.h"
#include "mc/entity/components/ClientInputLockComponent.h"
#include "mc/entity/components/ControlSchemeComponent.h"
#include "mc/entity/components/DamageNearbyMobsComponent.h"
#include "mc/entity/components/DepenetrationComponent.h"
#include "mc/entity/components/DimensionStateComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/FallDistanceComponent.h"
#include "mc/entity/components/FallFlyTicksComponent.h"
#include "mc/entity/components/FreezingComponent.h"
#include "mc/entity/components/HorseStandCounterComponent.h"
#include "mc/entity/components/InsideBlockComponent.h"
#include "mc/entity/components/JumpPendingScaleComponent.h"
#include "mc/entity/components/JumpRidingScaleComponent.h"
#include "mc/entity/components/JumpTicksComponent.h"
#include "mc/entity/components/LoadingStateComponent.h"
#include "mc/entity/components/LocalMoveVelocityComponent.h"
#include "mc/entity/components/MaxAutoStepComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/MobEffectsComponent.h"
#include "mc/entity/components/MobHurtTimeComponent.h"
#include "mc/entity/components/MobJumpComponent.h"
#include "mc/entity/components/MobRotationComponent.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/MovementEffectsComponent.h"
#include "mc/entity/components/MovementInterpolatorComponent.h"
#include "mc/entity/components/MovementSpeedComponent.h"
#include "mc/entity/components/OnFireComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerYRotLimitComponent.h"
#include "mc/entity/components/PlayerInputModeComponent.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/entity/components/PostTickPositionDeltaComponent.h"
#include "mc/entity/components/PushedByComponent.h"
#include "mc/entity/components/RenderPositionComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/ScanForDolphinTimerComponent.h"
#include "mc/entity/components/SneakingComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/SwimAmountComponent.h"
#include "mc/entity/components/SwimSpeedMultiplierComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#include "mc/entity/components/WalkDistComponent.h"
#include "mc/entity/components/WaterMovementComponent.h"
#include "mc/entity/components/WaterWalkSpeedEnchantComponent.h"
#include "mc/entity/components_json_legacy/BreathableComponent.h"
#include "mc/entity/components_json_legacy/BuoyancyComponent.h"
#include "mc/entity/components_json_legacy/CollisionBoxComponent.h"
#include "mc/entity/components_json_legacy/JumpControlComponent.h"
#include "mc/entity/components_json_legacy/NavigationComponent.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace MovementDataExtractionUtility {

struct MovementSnapshotComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::bitset<97>>                            mHasComponentBits;
    ::ll::TypedStorage<1, 1, ::PlayerPositionModeComponent>               mPlayerPositionMode;
    ::ll::TypedStorage<1, 1, ::ActorDataJumpDurationComponent>            mJumpDuration;
    ::ll::TypedStorage<1, 2, ::HorizontalCollisionFlagComponent>          mHorizontalCollisionFlagComponent;
    ::ll::UntypedStorage<4, 4>                                            mHorseFlags;
    ::ll::TypedStorage<4, 4, ::ActorGameTypeComponent>                    mGameType;
    ::ll::TypedStorage<4, 4, ::DimensionTypeComponent>                    mDimensionType;
    ::ll::TypedStorage<4, 4, ::FallFlyTicksComponent>                     mFallFlyTicks;
    ::ll::TypedStorage<4, 4, ::AirSpeedComponent>                         mAirSpeed;
    ::ll::TypedStorage<4, 4, ::FreezingComponent>                         mFreezingComponent;
    ::ll::TypedStorage<4, 4, ::HorseStandCounterComponent>                mHorseStandCounter;
    ::ll::TypedStorage<4, 4, ::JumpPendingScaleComponent>                 mJumpPendingScale;
    ::ll::TypedStorage<4, 4, ::JumpRidingScaleComponent>                  mJumpRidingScale;
    ::ll::TypedStorage<4, 4, ::JumpTicksComponent>                        mJumpTicks;
    ::ll::TypedStorage<4, 8, ::LoadingStateComponent>                     mLoadingState;
    ::ll::TypedStorage<4, 4, ::MaxAutoStepComponent>                      mMaxAutoStep;
    ::ll::TypedStorage<4, 4, ::MobHurtTimeComponent>                      mMobHurtTime;
    ::ll::TypedStorage<4, 4, ::MobRotationComponent>                      mMobRotation;
    ::ll::TypedStorage<4, 4, ::MovementSpeedComponent>                    mMovementSpeed;
    ::ll::TypedStorage<4, 4, ::ScanForDolphinTimerComponent>              mScanForDolphinTimer;
    ::ll::TypedStorage<4, 4, ::SneakingComponent>                         mSneaking;
    ::ll::TypedStorage<4, 4, ::WaterMovementComponent>                    mWaterMovement;
    ::ll::TypedStorage<4, 4, ::WaterWalkSpeedEnchantComponent>            mWaterWalkSpeedEnchant;
    ::ll::TypedStorage<4, 4, ::SwimSpeedMultiplierComponent>              mSwimSpeedMultiplier;
    ::ll::TypedStorage<4, 4, ::DamageNearbyMobsComponent>                 mDamageNearbyMobs;
    ::ll::TypedStorage<4, 8, ::ActorHeadRotationComponent>                mHeadRotation;
    ::ll::TypedStorage<8, 8, ::ChunkPositionComponent>                    mChunkPosition;
    ::ll::TypedStorage<4, 8, ::CollisionBoxComponent>                     mCollisionBox;
    ::ll::TypedStorage<4, 8, ::FallDistanceComponent>                     mFallDistance;
    ::ll::TypedStorage<4, 8, ::MobBodyRotationComponent>                  mMobBodyRotation;
    ::ll::TypedStorage<4, 8, ::OnFireComponent>                           mOnFire;
    ::ll::TypedStorage<4, 8, ::PassengerYRotLimitComponent>               mPassengerYRotLimit;
    ::ll::TypedStorage<4, 8, ::PlayerInputModeComponent>                  mPlayerInputMode;
    ::ll::TypedStorage<4, 8, ::RenderRotationComponent>                   mRenderRotation;
    ::ll::TypedStorage<4, 8, ::StandAnimationComponent>                   mStandAnimation;
    ::ll::TypedStorage<4, 8, ::SwimAmountComponent>                       mSwimAmount;
    ::ll::TypedStorage<4, 8, ::WalkDistComponent>                         mWalkDist;
    ::ll::UntypedStorage<4, 12>                                           mActorDataBoundingBox;
    ::ll::TypedStorage<4, 12, ::PostTickPositionDeltaComponent>           mPostTickPositionDeltaComponent;
    ::ll::TypedStorage<4, 12, ::BlockMovementSlowdownMultiplierComponent> mBlockMovementSlowdown;
    ::ll::UntypedStorage<4, 12>                                           mSeatOffset;
    ::ll::TypedStorage<4, 20, ::BoatMovementComponent>                    mBoatMovement;
    ::ll::TypedStorage<4, 12, ::LocalMoveVelocityComponent>               mLocalMoveVelocity;
    ::ll::TypedStorage<8, 24, ::MovementAbilitiesComponent>               mMovementAbilities;
    ::ll::TypedStorage<4, 12, ::RenderPositionComponent>                  mRenderPosition;
    ::ll::TypedStorage<4, 16, ::ActorRotationComponent>                   mRotation;
    ::ll::TypedStorage<8, 16, ::DimensionStateComponent>                  mDimensionState;
    ::ll::UntypedStorage<8, 24>                                           mActorData;
    ::ll::TypedStorage<8, 24, ::HitboxComponent>                          mHitbox;
    ::ll::TypedStorage<8, 24, ::InsideBlockComponent>                     mInsideBlock;
    ::ll::TypedStorage<8, 24, ::MobEffectsComponent>                      mMobEffects;
    ::ll::TypedStorage<8, 16, ::PassengerComponent>                       mPassenger;
    ::ll::TypedStorage<8, 16, ::PushedByComponent>                        mPushedBy;
    ::ll::TypedStorage<8, 24, ::VehicleComponent>                         mVehicle;
    ::ll::TypedStorage<4, 32, ::AABBShapeComponent>                       mAABBShape;
    ::ll::TypedStorage<4, 36, ::VanillaOffsetComponent>                   mVanillaOffset;
    ::ll::TypedStorage<4, 36, ::StateVectorComponent>                     mStateVector;
    ::ll::TypedStorage<4, 40, ::MovementInterpolatorComponent>            mMovementInterpolator;
    ::ll::TypedStorage<4, 20, ::MobJumpComponent>                         mMobJump;
    ::ll::TypedStorage<8, 48, ::BoatPaddleComponent>                      mBoatPaddle;
    ::ll::TypedStorage<4, 72, ::MovementAttributesComponent>              mMovementAttributes;
    ::ll::TypedStorage<8, 80, ::VanillaClientGameplayComponent>           mVanillaClientGameplay;
    ::ll::TypedStorage<8, 56, ::BuoyancyComponent>                        mBuoyancy;
    ::ll::TypedStorage<8, 64, ::DepenetrationComponent>                   mDepenetration;
    ::ll::TypedStorage<4, 68, ::OffsetsComponent>                         mOffsets;
    ::ll::TypedStorage<2, 4, ::ClientInputLockComponent>                  mClientInputLocks;
    ::ll::TypedStorage<8, 80, ::BreathableComponent>                      mBreathable;
    ::ll::UntypedStorage<8, 88>                                           mJumpControl;
    ::ll::TypedStorage<8, 88, ::AttributesComponent>                      mAttributes;
    ::ll::TypedStorage<4, 100, ::MoveInputComponent>                      mMoveInput;
    ::ll::TypedStorage<8, 96, ::NavigationComponent>                      mNavigationComponent;
    ::ll::TypedStorage<8, 24, ::MovementEffectsComponent>                 mMovementEffects;
    ::ll::TypedStorage<1, 1, ::ControlSchemeComponent>                    mControlScheme;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnkf998bb;
    ::ll::UntypedStorage<1, 1>   mUnk909d69;
    ::ll::UntypedStorage<1, 1>   mUnkfba5b6;
    ::ll::UntypedStorage<1, 2>   mUnkf9bfaf;
    ::ll::UntypedStorage<4, 4>   mUnkaddc03;
    ::ll::UntypedStorage<4, 4>   mUnka7cd33;
    ::ll::UntypedStorage<4, 4>   mUnk7f3a7d;
    ::ll::UntypedStorage<4, 4>   mUnkc8b53c;
    ::ll::UntypedStorage<4, 4>   mUnk9b55e4;
    ::ll::UntypedStorage<4, 4>   mUnkdcf52d;
    ::ll::UntypedStorage<4, 4>   mUnk655015;
    ::ll::UntypedStorage<4, 4>   mUnk470ef4;
    ::ll::UntypedStorage<4, 4>   mUnk7a5b2e;
    ::ll::UntypedStorage<4, 4>   mUnk81c817;
    ::ll::UntypedStorage<4, 8>   mUnkc192bd;
    ::ll::UntypedStorage<4, 4>   mUnk77af84;
    ::ll::UntypedStorage<4, 4>   mUnk6f0fde;
    ::ll::UntypedStorage<4, 4>   mUnkc3b56c;
    ::ll::UntypedStorage<4, 4>   mUnka62503;
    ::ll::UntypedStorage<4, 4>   mUnkc2462c;
    ::ll::UntypedStorage<4, 4>   mUnk20f622;
    ::ll::UntypedStorage<4, 4>   mUnk7e2d1a;
    ::ll::UntypedStorage<4, 4>   mUnkc22eef;
    ::ll::UntypedStorage<4, 4>   mUnk9a7831;
    ::ll::UntypedStorage<4, 4>   mUnkb0450e;
    ::ll::UntypedStorage<4, 8>   mUnkec4f09;
    ::ll::UntypedStorage<8, 8>   mUnk7e8ad0;
    ::ll::UntypedStorage<4, 8>   mUnk9f5e3f;
    ::ll::UntypedStorage<4, 8>   mUnk6ced02;
    ::ll::UntypedStorage<4, 8>   mUnkda0888;
    ::ll::UntypedStorage<4, 8>   mUnk607132;
    ::ll::UntypedStorage<4, 8>   mUnk3c1cf5;
    ::ll::UntypedStorage<4, 8>   mUnk11d9bc;
    ::ll::UntypedStorage<4, 8>   mUnk4102a5;
    ::ll::UntypedStorage<4, 8>   mUnkb451ea;
    ::ll::UntypedStorage<4, 8>   mUnkf726d8;
    ::ll::UntypedStorage<4, 8>   mUnk615382;
    ::ll::UntypedStorage<4, 12>  mUnkbe52e5;
    ::ll::UntypedStorage<4, 12>  mUnk5739c3;
    ::ll::UntypedStorage<4, 12>  mUnk92d17b;
    ::ll::UntypedStorage<4, 12>  mUnkf8a3ba;
    ::ll::UntypedStorage<4, 20>  mUnk5335d5;
    ::ll::UntypedStorage<4, 12>  mUnk6e5575;
    ::ll::UntypedStorage<4, 16>  mUnk6c32a0;
    ::ll::UntypedStorage<4, 12>  mUnkd70513;
    ::ll::UntypedStorage<4, 16>  mUnk1fee59;
    ::ll::UntypedStorage<8, 16>  mUnk5bcd09;
    ::ll::UntypedStorage<8, 24>  mUnk3bf9dc;
    ::ll::UntypedStorage<8, 24>  mUnkff91d9;
    ::ll::UntypedStorage<8, 24>  mUnk6587d6;
    ::ll::UntypedStorage<8, 24>  mUnk5bd1cb;
    ::ll::UntypedStorage<8, 16>  mUnk2540fe;
    ::ll::UntypedStorage<8, 16>  mUnk8cd0f9;
    ::ll::UntypedStorage<8, 24>  mUnk15d7d5;
    ::ll::UntypedStorage<4, 32>  mUnkc0b9c9;
    ::ll::UntypedStorage<4, 36>  mUnk65769d;
    ::ll::UntypedStorage<4, 36>  mUnk75c6c8;
    ::ll::UntypedStorage<4, 40>  mUnkba7c80;
    ::ll::UntypedStorage<4, 20>  mUnk618eb6;
    ::ll::UntypedStorage<8, 48>  mUnk4e5dd6;
    ::ll::UntypedStorage<4, 72>  mUnkccce64;
    ::ll::UntypedStorage<8, 80>  mUnk97019d;
    ::ll::UntypedStorage<8, 56>  mUnkcc34f4;
    ::ll::UntypedStorage<8, 56>  mUnkee5855;
    ::ll::UntypedStorage<4, 68>  mUnkc563d3;
    ::ll::UntypedStorage<2, 4>   mUnk93b58c;
    ::ll::UntypedStorage<8, 80>  mUnkcf510d;
    ::ll::UntypedStorage<8, 88>  mUnk2a0baf;
    ::ll::UntypedStorage<8, 80>  mUnk27f3f6;
    ::ll::UntypedStorage<4, 100> mUnk3a040c;
    ::ll::UntypedStorage<8, 96>  mUnke83d64;
    ::ll::UntypedStorage<8, 24>  mUnkac54aa;
    ::ll::UntypedStorage<1, 1>   mUnkc8b5f1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MovementSnapshotComponent& operator=(MovementSnapshotComponent const&);
    MovementSnapshotComponent(MovementSnapshotComponent const&);
    MovementSnapshotComponent();
#endif // @header-generator platform
};

} // namespace MovementDataExtractionUtility
