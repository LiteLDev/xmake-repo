#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class HitResultWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 136, ::HitResult>                    mHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                    mLiquidHitResult;
#else // @header-generator platform
    ::ll::TypedStorage<8, 136, ::HitResult>                    mHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                    mLiquidHitResult;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onActorRemoved(::Actor const&);
#else // @header-generator platform
    MCAPI void _onActorRemoved(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserRemoved(::EntityContext const&);
#else // @header-generator platform
    MCAPI void _onGameplayUserRemoved(::EntityContext const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HitResult& getLiquidHitResult();

    MCNAPI void initialize(::IActorManagerConnector&, ::IGameplayUserManagerConnector&);
#else // @header-generator platform
    MCAPI void initialize(
        ::IActorManagerConnector&        actorManagerConnector,
        ::IGameplayUserManagerConnector& gameplayUserManagerConnector
    );
#endif // @header-generator platform
    // NOLINTEND
};
