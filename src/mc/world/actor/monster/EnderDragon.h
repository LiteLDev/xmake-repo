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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/pathfinder/PathfinderNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
class EnderCrystal;
class EntityContext;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDataFlagComponent;
#else // @header-generator platform
class PathfinderNode;
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorRotationComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class EnderDragon : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>                  mPath;
    ::ll::TypedStorage<4, 768, ::std::array<::std::array<float, 3>, 64>> mPositions;
    ::ll::TypedStorage<4, 4, int>                                        mPosPointer;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mHead;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mNeck;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mBody;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mTail1;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mTail2;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mTail3;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mWing1;
    ::ll::TypedStorage<8, 8, ::AABB*>                                    mWing2;
    ::ll::TypedStorage<1, 1, bool>                                       mInWall;
    ::ll::TypedStorage<4, 4, int>                                        mGrowlTime;
    ::ll::TypedStorage<4, 4, int>                                        mSittingDamageReceived;
    ::ll::TypedStorage<4, 4, float>                                      mTurnSpeed;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mTargetPos;
    ::ll::TypedStorage<4, 4, int>                                        mFlameAttackCount;
    ::ll::TypedStorage<1, 1, bool>                                       mNodesFinalized;
    ::ll::TypedStorage<8, 24, ::std::vector<::PathfinderNode>>           mNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                        mNodeAdjacency;
    ::ll::TypedStorage<8, 32, ::BinaryHeap>                              mOpenSet;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mNearestCrystal;
    ::ll::TypedStorage<4, 4, int>                                        mEnderCrystalsAlive;
    ::ll::TypedStorage<1, 1, bool>                                       mDragonKilledPreviously;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EnderDragon&)>>     mDragonKilledCallback;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EnderDragon();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EnderDragon();
#else // @header-generator platform
    virtual ~EnderDragon() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void remove();
#else // @header-generator platform
    virtual void remove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual void setSitting(bool value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getHeadLookVector(float) const;
#else // @header-generator platform
    virtual bool canBeAffected(uint id) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isImmobile() const;
#else // @header-generator platform
    virtual bool isImmobile() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSitting(bool);
#else // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual ::Vec3 getHeadLookVector(float a) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    virtual void die(::ActorDamageSource const& source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBePulledIntoVehicle() const;
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeAffected(uint) const;
#else // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void die(::ActorDamageSource const&);
#else // @header-generator platform
    virtual bool canBePulledIntoVehicle() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EnderDragon(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI EnderDragon(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _checkWalls(::AABB);
#else // @header-generator platform
    MCAPI bool _checkWalls(::AABB bb);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult _hurt(::AABB*, ::ActorDamageSource const&, float);
#else // @header-generator platform
    MCAPI ::ActorHurtResult _hurt(::AABB* part, ::ActorDamageSource const& source, float damage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _hurtEntities(::gsl::span<gsl::not_null<Actor*>>) const;
#else // @header-generator platform
    MCAPI void _hurtEntities(::gsl::span<::gsl::not_null<::Actor*>> actors) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _knockBack(::gsl::span<gsl::not_null<Actor*>>) const;
#else // @header-generator platform
    MCAPI void _knockBack(::gsl::span<::gsl::not_null<::Actor*>> actors) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> _reconstructPath(::PathfinderNode&, ::PathfinderNode&, ::PathCompletionType const);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Path>
    _reconstructPath(::PathfinderNode& from, ::PathfinderNode& to, ::PathCompletionType const completionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void dieNaturally();
#else // @header-generator platform
    MCAPI int findClosestNode();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int findClosestNode();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Path> findPath(int startIndex, int endIndex, ::PathfinderNode* finalNode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int findClosestNode(::Vec3 const&);
#else // @header-generator platform
    MCAPI ::std::vector<float> const getLatencyPos(int step, float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> findPath(int, int, ::PathfinderNode*);
#else // @header-generator platform
    MCAPI void onCrystalDestroyed(::EnderCrystal const& crystal, ::BlockPos pos, ::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getDragonKilledPreviously() const;
#else // @header-generator platform
    MCAPI void postAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void setDragonKilledCallback(::std::function<void(::EnderDragon&)> onKilled);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $remove();
#else // @header-generator platform
    MCAPI void $remove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI void $setSitting(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getHeadLookVector(float) const;
#else // @header-generator platform
    MCFOLD bool $canBeAffected(uint id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isImmobile() const;
#else // @header-generator platform
    MCAPI bool $isImmobile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSitting(bool);
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent id, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI ::Vec3 $getHeadLookVector(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBePulledIntoVehicle() const;
#else // @header-generator platform
    MCAPI float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeAffected(uint) const;
#else // @header-generator platform
    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
    MCFOLD bool $canBePulledIntoVehicle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
