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
class Vec3;
// clang-format on

class HitResultWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 136, ::HitResult>                    mHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                    mLiquidHitResult;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onActorRemoved(::Actor const&);

    MCNAPI void _onGameplayUserRemoved(::EntityContext const&);

    MCNAPI ::HitResult& getLiquidHitResult();

    MCNAPI void initialize(::IActorManagerConnector&, ::IGameplayUserManagerConnector&);
    // NOLINTEND
};
