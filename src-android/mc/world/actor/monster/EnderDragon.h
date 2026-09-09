#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/level/pathfinder/BinaryHeap.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"
#include "mc/world/level/pathfinder/PathfinderNode.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
class BlockType;
class EnderCrystal;
class EntityContext;
class Path;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifier;
struct ActorRotationComponent;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class EnderDragon : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>                  mPath;
    ::ll::TypedStorage<4, 768, std::array<std::array<float, 3>, 64>> mPositions;
    ::ll::TypedStorage<4, 4, int>                                    mPosPointer;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mHead;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mNeck;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mBody;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mTail1;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mTail2;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mTail3;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mWing1;
    ::ll::TypedStorage<8, 8, ::AABB*>                                mWing2;
    ::ll::TypedStorage<1, 1, bool>                                   mInWall;
    ::ll::TypedStorage<4, 4, int>                                    mGrowlTime;
    ::ll::TypedStorage<4, 4, int>                                    mSittingDamageReceived;
    ::ll::TypedStorage<4, 4, float>                                  mTurnSpeed;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mTargetPos;
    ::ll::TypedStorage<4, 4, int>                                    mFlameAttackCount;
    ::ll::TypedStorage<1, 1, bool>                                   mNodesFinalized;
    ::ll::TypedStorage<8, 24, std::vector<PathfinderNode>>           mNodes;
    ::ll::TypedStorage<8, 24, std::vector<int>>                      mNodeAdjacency;
    ::ll::TypedStorage<8, 32, ::BinaryHeap>                          mOpenSet;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mNearestCrystal;
    ::ll::TypedStorage<4, 4, int>                                    mEnderCrystalsAlive;
    ::ll::UntypedStorage<1, 12>                                      mDragonKilledPreviously;
    ::ll::UntypedStorage<8, 48>                                      mDragonKilledCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EnderDragon();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnderDragon();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void remove();

    virtual float getShadowRadius() const;

    virtual ::Vec3 getHeadLookVector(float) const;

    virtual bool isImmobile() const;

    virtual void setSitting(bool);

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual bool canBePulledIntoVehicle() const;

    virtual bool canBeAffected(uint) const;

    virtual void die(::ActorDamageSource const&);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnderDragon(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI bool _checkWalls(::AABB);

    MCNAPI ::ActorHurtResult _hurt(::AABB*, ::ActorDamageSource const&, float);

    MCNAPI void _hurtEntities(::gsl::span<gsl::not_null<Actor*>>) const;

    MCNAPI void _knockBack(::gsl::span<gsl::not_null<Actor*>>) const;

    MCNAPI std::unique_ptr<Path> _reconstructPath(::PathfinderNode&, ::PathfinderNode&, ::PathCompletionType const);

    MCNAPI void dieNaturally();

    MCNAPI int findClosestNode();

    MCNAPI int findClosestNode(::Vec3 const&);

    MCNAPI std::unique_ptr<Path> findPath(int, int, ::PathfinderNode*);

    MCNAPI bool getDragonKilledPreviously() const;

    MCNAPI int getFlameCount() const;

    MCNAPI ::BlockPos getHeadPos() const;

    MCNAPI std::vector<float> const getLatencyPos(int, float) const;

    MCNAPI ::EnderCrystal const* getNearestCrystal() const;

    MCNAPI int getNumCrystalsAlive();

    MCNAPI ::Vec3 getTargetPos() const;

    MCNAPI void incrementFlameCount();

    MCNAPI void onCrystalDestroyed(::EnderCrystal const&, ::BlockPos, ::ActorDamageSource const&);

    MCNAPI void postAiStep();

    MCNAPI void resetFlameCount();

    MCNAPI void setDragonKilledCallback(std::function<void(EnderDragon&)>);

    MCNAPI void setHasDragonPreviouslyBeenKilled(bool);

    MCNAPI void setNumCrystalsAlive(int);

    MCNAPI void setTargetPos(::Vec3);

    MCNAPI void setTurnSpeed(float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& GROWL_INTERVAL_MAX();

    MCNAPI static int& GROWL_INTERVAL_MIN();

    MCNAPI static int& MAX_PATH_RADIUS();

    MCNAPI static float& SITTING_ALLOWED_DAMAGE_PERCENTAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $remove();

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::Vec3 $getHeadLookVector(float) const;

    MCNAPI bool $isImmobile() const;

    MCNAPI void $setSitting(bool);

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $canBeAffected(uint) const;

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
