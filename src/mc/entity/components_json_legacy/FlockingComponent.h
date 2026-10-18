#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorUniqueID;
#endif // @header-generator platform
// clang-format on

class FlockingComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> mNeighborhood;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mCenterOfMass;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mGroupVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mGoalHeading;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mCurrentHeading;
    ::ll::TypedStorage<1, 1, bool>                        mInWater;
    ::ll::TypedStorage<1, 1, bool>                        mMatchVariant;
    ::ll::TypedStorage<1, 1, bool>                        mUseCenterOfMass;
    ::ll::TypedStorage<1, 1, bool>                        mIsLeader;
    ::ll::TypedStorage<1, 1, bool>                        mInFlock;
    ::ll::TypedStorage<1, 1, bool>                        mIsEnabled;
    ::ll::TypedStorage<1, 1, bool>                        mHasTargetGoal;
    ::ll::TypedStorage<1, 1, bool>                        mUsingDirection;
    ::ll::TypedStorage<4, 4, int>                         mFlockLimit;
    ::ll::TypedStorage<4, 4, float>                       mLonerChance;
    ::ll::TypedStorage<4, 4, float>                       mGoalWeight;
    ::ll::TypedStorage<4, 4, float>                       mInfluenceRadius;
    ::ll::TypedStorage<4, 4, float>                       mBreachInfluence;
    ::ll::TypedStorage<4, 4, float>                       mSeparationWeight;
    ::ll::TypedStorage<4, 4, float>                       mSeparationThreshold;
    ::ll::TypedStorage<4, 4, float>                       mCohesionWeight;
    ::ll::TypedStorage<4, 4, float>                       mCohesionThreshold;
    ::ll::TypedStorage<4, 4, float>                       mInnerCohesionThreshold;
    ::ll::TypedStorage<4, 4, float>                       mMinHeight;
    ::ll::TypedStorage<4, 4, float>                       mMaxHeight;
    ::ll::TypedStorage<4, 4, float>                       mBlockDist;
    ::ll::TypedStorage<4, 4, float>                       mBlockWeight;
    ::ll::TypedStorage<1, 1, bool>                        mOverspeedRequired;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> mNeighborhood;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mCenterOfMass;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mGroupVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mGoalHeading;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mCurrentHeading;
    ::ll::TypedStorage<1, 1, bool>                            mInWater;
    ::ll::TypedStorage<1, 1, bool>                            mMatchVariant;
    ::ll::TypedStorage<1, 1, bool>                            mUseCenterOfMass;
    ::ll::TypedStorage<1, 1, bool>                            mIsLeader;
    ::ll::TypedStorage<1, 1, bool>                            mInFlock;
    ::ll::TypedStorage<1, 1, bool>                            mIsEnabled;
    ::ll::TypedStorage<1, 1, bool>                            mHasTargetGoal;
    ::ll::TypedStorage<1, 1, bool>                            mUsingDirection;
    ::ll::TypedStorage<4, 4, int>                             mFlockLimit;
    ::ll::TypedStorage<4, 4, float>                           mLonerChance;
    ::ll::TypedStorage<4, 4, float>                           mGoalWeight;
    ::ll::TypedStorage<4, 4, float>                           mInfluenceRadius;
    ::ll::TypedStorage<4, 4, float>                           mBreachInfluence;
    ::ll::TypedStorage<4, 4, float>                           mSeparationWeight;
    ::ll::TypedStorage<4, 4, float>                           mSeparationThreshold;
    ::ll::TypedStorage<4, 4, float>                           mCohesionWeight;
    ::ll::TypedStorage<4, 4, float>                           mCohesionThreshold;
    ::ll::TypedStorage<4, 4, float>                           mInnerCohesionThreshold;
    ::ll::TypedStorage<4, 4, float>                           mMinHeight;
    ::ll::TypedStorage<4, 4, float>                           mMaxHeight;
    ::ll::TypedStorage<4, 4, float>                           mBlockDist;
    ::ll::TypedStorage<4, 4, float>                           mBlockWeight;
    ::ll::TypedStorage<1, 1, bool>                            mOverspeedRequired;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FlockingComponent& operator=(FlockingComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FlockingComponent();
#else // @header-generator platform
    MCAPI void calculateFlockVector(::Actor const& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void breakFlock(::Actor const&);
#else // @header-generator platform
    MCAPI void calculateGoalHeading(::Mob& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void calculateFlockVector(::Actor const&);
#else // @header-generator platform
    MCAPI bool canJoinFlock(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void calculateGoalHeading(::Mob&);
#else // @header-generator platform
    MCAPI void joinFlock(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canJoinFlock(::Actor&) const;
#else // @header-generator platform
    MCAPI void manageNeighborhood(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void joinFlock(::Actor&);
#else // @header-generator platform
    MCAPI void mergeNeighborhoods(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void manageNeighborhood(::Actor&);
#else // @header-generator platform
    MCAPI void updateNeighborhoodData(::Actor const& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void mergeNeighborhoods(::Actor&);

    MCNAPI void updateNeighborhoodData(::Actor const&);

    MCNAPI bool validateVariantEntityTypes(::Actor const&, ::Actor const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI bool validateVariantEntityTypes(::Actor const& e0, ::Actor const& e1) const;
#endif // @header-generator platform
    // NOLINTEND
};
