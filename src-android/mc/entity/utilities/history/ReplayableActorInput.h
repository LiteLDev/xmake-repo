#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/BlockPosTrackerComponent.h"
#include "mc/entity/components/ExternalDataSnapshotComponent.h"
#include "mc/entity/components/ItemUseSlowdownModifierComponent.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/MovementEffectsComponent.h"
#include "mc/entity/components/MovementInterpolatorComponent.h"
#include "mc/entity/components/ReplayStateTrackerComponent.h"
#include "mc/entity/components/RewindCollisionShapesComponent.h"
#include "mc/entity/components/RiptideTridentSpinAttackComponent.h"
#include "mc/entity/components/SpinAttackResultsComponent.h"
#include "mc/entity/systems/block_collisions_system/BlockCollisionResolutionVectorComponent.h"
#include "mc/entity/utilities/IReplayableActorInput.h"
#include "mc/entity/utilities/history/ComponentBitset.h"
#include "mc/entity/utilities/history/TurnInput.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityContext;
class EntityRegistry;
class MovementEffect;
struct BuoyancyFloatRequestComponent;
struct InsideSlowingSweetBerryBushBlockComponent;
struct IsSolidMobNearbyComponent;
struct VehicleInputIntentComponent;
namespace History { struct EntityWithCache; }
namespace History { struct NonPlayerComponents; }
// clang-format on

namespace History {

struct ReplayableActorInput : public ::IReplayableActorInput {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<4, 4> mHasComponent;
    ::ll::TypedStorage<4, 24, ::ExternalDataSnapshotComponent> mExternalData;
    ::ll::TypedStorage<4, 4, ::ItemUseSlowdownModifierComponent> mItemUseSlowdownModifier;
    ::ll::TypedStorage<4, 12, ::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent> mBlockCollisionResolution;
    ::ll::TypedStorage<4, 4, ::RiptideTridentSpinAttackComponent> mRiptideSpinAttack;
    ::ll::TypedStorage<4, 100, ::MoveInputComponent> mMoveInput;
    ::ll::TypedStorage<8, 104, ::ReplayStateTrackerComponent> mReplayStateTracker;
    ::ll::TypedStorage<4, 16, ::ActorRotationComponent> mActorRotation;
    ::ll::TypedStorage<8, 24, std::vector<History::TurnInput>> mTurnInput;
    ::ll::TypedStorage<8, 40, ::BlockPosTrackerComponent> mBlockPosTracker;
    ::ll::TypedStorage<8, 96, ::RewindCollisionShapesComponent> mRewindCollisionShapes;
    ::ll::TypedStorage<8, 24, ::MovementEffectsComponent> mMovementEffects;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IsSolidMobNearbyComponent>> mIsSolidMobNearby;
    ::ll::TypedStorage<8, 24, ::SpinAttackResultsComponent> mSpinAttackResults;
    ::ll::TypedStorage<4, 40, ::MovementInterpolatorComponent> mInterpolator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<History::NonPlayerComponents>> mNonPlayer;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReplayableActorInput();

    virtual void preApplyInput(::EntityContext&);

    virtual void postApplyInput(::EntityContext&);

    virtual void applyCollisionData(::EntityContext&);

    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const;

    virtual void captureExternalData(::EntityRegistry&);

    virtual void capture(::MovementInterpolatorComponent const&);

    virtual void capture(::SpinAttackResultsComponent const&);

    virtual void capture(::RiptideTridentSpinAttackComponent const&);

    virtual void capture(::IsSolidMobNearbyComponent const&);

    virtual void capture(::VehicleInputIntentComponent const&);

    virtual void capture(::MovementEffect const&);

    virtual void capture(::RewindCollisionShapesComponent&&);

    virtual void capture(::ItemUseSlowdownModifierComponent const&);

    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const&);

    virtual void capture(::BuoyancyFloatRequestComponent const&);

    virtual void capture(::BuoyancyComponent const&);

    virtual void capture(::BlockPosTrackerComponent const&);

    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const&);

    virtual void capture(::History::TurnInput const&);

    virtual void capture(::ActorRotationComponent const&);

    virtual void capture(::ReplayStateTrackerComponent const&);

    virtual void capture(::MoveInputComponent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyCollisionData(::History::EntityWithCache&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preApplyInput(::EntityContext&);

    MCNAPI void $postApplyInput(::EntityContext&);

    MCNAPI void $applyCollisionData(::EntityContext&);

    MCNAPI ::ExternalDataSnapshotComponent const& $getSnapshot() const;

    MCNAPI void $captureExternalData(::EntityRegistry&);

    MCNAPI void $capture(::MovementInterpolatorComponent const&);

    MCNAPI void $capture(::SpinAttackResultsComponent const&);

    MCNAPI void $capture(::RiptideTridentSpinAttackComponent const&);

    MCNAPI void $capture(::IsSolidMobNearbyComponent const&);

    MCNAPI void $capture(::VehicleInputIntentComponent const&);

    MCNAPI void $capture(::MovementEffect const&);

    MCNAPI void $capture(::RewindCollisionShapesComponent&&);

    MCNAPI void $capture(::ItemUseSlowdownModifierComponent const&);

    MCNAPI void $capture(::InsideSlowingSweetBerryBushBlockComponent const&);

    MCNAPI void $capture(::BuoyancyFloatRequestComponent const&);

    MCNAPI void $capture(::BuoyancyComponent const&);

    MCNAPI void $capture(::BlockPosTrackerComponent const&);

    MCNAPI void $capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const&);

    MCNAPI void $capture(::History::TurnInput const&);

    MCNAPI void $capture(::ActorRotationComponent const&);

    MCNAPI void $capture(::ReplayStateTrackerComponent const&);

    MCNAPI void $capture(::MoveInputComponent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
