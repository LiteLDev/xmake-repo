#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class GameplayUserManager;
class IActorManagerConnector;
// clang-format on

class ActorRuntimeIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                                   mLastRuntimeID;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorRuntimeID, WeakEntityRef>> mRuntimeIdMap;
    ::ll::UntypedStorage<8, 24>                                                  mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserResumedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserSuspendedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserRemoved;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRuntimeIDManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorRuntimeIDManager(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);

    MCNAPI void _addEntity(::EntityContext const&);

    MCNAPI void _onActorAdded(::Actor&);

    MCNAPI void _onRemoveActorEntityReferences(::Actor&);

    MCNAPI void _removeEntity(::EntityContext const&);

    MCNAPI ::ActorRuntimeID getNextRuntimeID();

    MCNAPI ::Actor* getRuntimeActorEntity(::ActorRuntimeID, bool) const;

    MCNAPI std::vector<Actor*> getRuntimeActorList() const;

    MCNAPI void initialize(::IActorManagerConnector&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
    // NOLINTEND
};
