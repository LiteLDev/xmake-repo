#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Camel : public ::Animal {
public:
    // Camel inner types define
    enum class SittingState : uchar {
        StandingAdult = 0,
        SittingAdult  = 1,
        StandingBaby  = 2,
        SittingBaby   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Camel::SittingState>        mLastSittingState;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>> mDashCooldown;
    ::ll::TypedStorage<1, 1, bool>                         mWasInCooldown;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Camel::SittingState>            mLastSittingState;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mDashCooldown;
    ::ll::TypedStorage<1, 1, bool>                             mWasInCooldown;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Camel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Camel();
#else // @header-generator platform
    virtual void aiStep() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void normalTick();
#else // @header-generator platform
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void aiStep();

    virtual float _getWalkTargetValue(::BlockPos const&);
#else // @header-generator platform
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Camel(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI std::optional<ExpiringTick> getDashCooldown() const;
#else // @header-generator platform
    MCAPI Camel(
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
    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;
#else // @header-generator platform
    MCAPI void $aiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $aiStep();
#else // @header-generator platform
    MCAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);
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
