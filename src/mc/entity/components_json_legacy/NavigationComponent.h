#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/BlockDescriptor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ActorDefinitionDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
class Path;
class PathNavigation;
struct NavigationDescription;
// clang-format on

class NavigationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    bool                                                      mAvoidDamageBlocks : 1;
    bool                                                      mAvoidPortals      : 1;
    bool                                                      mAvoidSun          : 1;
    bool                                                      mAvoidWater        : 1;
    bool                                                      mCanBreach         : 1;
    bool                                                      mCanFloat          : 1;
    bool                                                      mCanPathOverLava   : 1;
    bool                                                      mCanWalkInLava     : 1;
    bool                                                      mCanJump           : 1;
    bool                                                      mCanOpenDoors      : 1;
    bool                                                      mCanOpenIronDoors  : 1;
    bool                                                      mCanPassDoors      : 1;
    bool                                                      mCanSink           : 1;
    bool                                                      mIsAmphibious      : 1;
    bool                                                      mIsFollowingRivers : 1;
    bool                                                      mHasEndPathRadius  : 1;
    bool                                                      mHasDestination    : 1;
    ::ll::TypedStorage<4, 4, int>                             mTick;
    ::ll::TypedStorage<4, 4, int>                             mTickTimeout;
    ::ll::TypedStorage<4, 4, int>                             mLastStuckCheck;
    ::ll::TypedStorage<4, 4, float>                           mEndPathRadiusSqr;
    ::ll::TypedStorage<4, 4, float>                           mSpeed;
    ::ll::TypedStorage<4, 4, float>                           mTerminationThreshold;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mLastStuckCheckPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mTargetOffset;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>   mBlocksToAvoid;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PathNavigation>> mNavigation;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>           mPath;
#else // @header-generator platform
    bool                                                          mAvoidDamageBlocks : 1;
    bool                                                          mAvoidPortals      : 1;
    bool                                                          mAvoidSun          : 1;
    bool                                                          mAvoidWater        : 1;
    bool                                                          mCanBreach         : 1;
    bool                                                          mCanFloat          : 1;
    bool                                                          mCanPathOverLava   : 1;
    bool                                                          mCanWalkInLava     : 1;
    bool                                                          mCanJump           : 1;
    bool                                                          mCanOpenDoors      : 1;
    bool                                                          mCanOpenIronDoors  : 1;
    bool                                                          mCanPassDoors      : 1;
    bool                                                          mCanSink           : 1;
    bool                                                          mIsAmphibious      : 1;
    bool                                                          mIsFollowingRivers : 1;
    bool                                                          mHasEndPathRadius  : 1;
    bool                                                          mHasDestination    : 1;
    ::ll::TypedStorage<4, 4, int>                                 mTick;
    ::ll::TypedStorage<4, 4, int>                                 mTickTimeout;
    ::ll::TypedStorage<4, 4, int>                                 mLastStuckCheck;
    ::ll::TypedStorage<4, 4, float>                               mEndPathRadiusSqr;
    ::ll::TypedStorage<4, 4, float>                               mSpeed;
    ::ll::TypedStorage<4, 4, float>                               mTerminationThreshold;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mLastStuckCheckPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mTargetOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>   mBlocksToAvoid;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PathNavigation>> mNavigation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>           mPath;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationComponent& operator=(NavigationComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NavigationComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NavigationComponent();
#else // @header-generator platform
    MCAPI NavigationComponent(::NavigationComponent const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NavigationComponent(::NavigationComponent const&);
#else // @header-generator platform
    MCAPI void initMultiTypeNavigationComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> createPath(::Mob&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void initializeFromDefinition(::Mob& owner, ::NavigationDescription const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> createPath(::Mob&, ::Actor const&);
#else // @header-generator platform
    MCAPI bool moveTo(::Mob& owner, ::std::unique_ptr<::Path> newPath, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getAvoidDamageBlocks() const;
#else // @header-generator platform
    MCAPI ::NavigationComponent& operator=(::NavigationComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getAvoidPortals() const;
#else // @header-generator platform
    MCAPI void setPath(::std::unique_ptr<::Path> path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getAvoidSun() const;

    MCNAPI bool getAvoidWater() const;

    MCNAPI std::vector<BlockDescriptor> const& getBlocksToAvoid() const;

    MCNAPI bool getCanBreach() const;

    MCNAPI bool getCanFloat() const;

    MCNAPI bool getCanJump() const;

    MCNAPI bool getCanOpenDoors() const;

    MCNAPI bool getCanOpenIronDoors() const;

    MCNAPI bool getCanPassDoors() const;

    MCNAPI bool getCanPathOverLava() const;

    MCNAPI bool getCanSink() const;

    MCNAPI bool getCanWalkInLava() const;

    MCNAPI float getEndPathRadiusSqr() const;

    MCNAPI bool getHasDestination() const;

    MCNAPI bool getHasEndPathRadius() const;

    MCNAPI bool getIsAmphibious() const;

    MCNAPI bool getIsFollowingRivers() const;

    MCNAPI ::Vec3 getLastStuckCheckPosition() const;

    MCNAPI float getMaxDistance(::Actor const&) const;

    MCNAPI ::Path* getPath() const;

    MCNAPI float getSpeed() const;

    MCNAPI ::Vec3 const& getTargetOffset() const;

    MCNAPI float getTerminationThreshold() const;

    MCNAPI int getTickTimeout() const;

    MCNAPI void incrementTick();

    MCNAPI void initMultiTypeNavigationComponent(::Mob&, ::ActorDefinitionDescriptor&);

    MCNAPI void initializeFromDefinition(::Mob&, ::NavigationDescription const*);

    MCNAPI bool isDone() const;

    MCNAPI ::NodeType isFree(::Mob&, ::BlockPos const&, ::BlockPos const&, ::BlockPos const&, ::CanJumpIntoNode);

    MCNAPI bool isStuck(int) const;

    MCNAPI bool moveTo(::Mob&, ::Vec3 const&, float);

    MCNAPI bool moveTo(::Mob&, ::Actor const&, float);

    MCNAPI bool moveTo(::Mob&, std::unique_ptr<Path>, float);

    MCNAPI bool moveTo(::Mob&, ::Vec3 const&, float, ::Vec3 const&);

    MCNAPI ::NavigationComponent& operator=(::NavigationComponent&&);

    MCNAPI void resetPath();

    MCNAPI void setAvoidDamageBlocks(bool);

    MCNAPI void setAvoidPortals(bool);

    MCNAPI void setAvoidSun(bool);

    MCNAPI void setAvoidWater(bool);

    MCNAPI void setCanFloat(bool);

    MCNAPI void setCanJump(bool);

    MCNAPI void setCanOpenDoors(bool);

    MCNAPI void setCanPassDoors(bool);

    MCNAPI void setCanSink(bool);

    MCNAPI void setEndPathRadius(float);

    MCNAPI void setHasDestination(bool);

    MCNAPI void setHasEndPathRadius(bool);

    MCNAPI void setInternalType(std::unique_ptr<PathNavigation>);

    MCNAPI void setIsFollowingRivers(bool);

    MCNAPI void setPath(std::unique_ptr<Path>);

    MCNAPI void setSpeed(float);

    MCNAPI void setTargetOffset(::Vec3 const&);

    MCNAPI void setTerminationThreshold(float);

    MCNAPI void setTickTimeout(int);

    MCNAPI void stop(::Mob&);

    MCNAPI bool travel(::Mob&, float&, float&, float&);

    MCNAPI void update(::Mob&);

    MCNAPI void updateLastStuckCheck(::Mob const&);
#else // @header-generator platform
    MCAPI ~NavigationComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::NavigationComponent const& other);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::NavigationComponent const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
