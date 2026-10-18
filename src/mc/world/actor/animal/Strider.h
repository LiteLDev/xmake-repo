#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
class Player;
struct ActorDefinitionIdentifier;
// clang-format on

class Strider : public ::Animal {
public:
    // Strider inner types declare
    // clang-format off
    class PlayerRideInLavaInOverworldAchievementTracker;
    // clang-format on

    // Strider inner types define
    class PlayerRideInLavaInOverworldAchievementTracker {
    public:
        // PlayerRideInLavaInOverworldAchievementTracker inner types define
        enum class VehicleState : uchar {
            Riding = 0,
            Done   = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Strider::PlayerRideInLavaInOverworldAchievementTracker::VehicleState> mState;
        ::ll::TypedStorage<1, 1, bool>      mHasSentAchievement;
        ::ll::TypedStorage<1, 1, bool>      mInLavaWithPlayer;
        ::ll::TypedStorage<4, 12, ::Vec3>   mStartPosInLava;
        ::ll::TypedStorage<8, 8, ::Player*> mPlayer;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, ::Strider::PlayerRideInLavaInOverworldAchievementTracker> mPlayerRideInLavaInOverworldAchievementTracker;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Strider::PlayerRideInLavaInOverworldAchievementTracker>
        mPlayerRideInLavaInOverworldAchievementTracker;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Strider();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Strider();
#else // @header-generator platform
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void normalTick();

    virtual float _getWalkTargetValue(::BlockPos const&);
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Strider(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Strider(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
#else // @header-generator platform
    MCAPI void $normalTick();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
