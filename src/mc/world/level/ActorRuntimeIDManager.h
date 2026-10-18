#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class GameplayUserManager;
class IActorManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
// clang-format on

class ActorRuntimeIDManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                                   mLastRuntimeID;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorRuntimeID, WeakEntityRef>> mRuntimeIdMap;
    ::ll::UntypedStorage<8, 24>                                                  mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserResumedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserSuspendedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnGameplayUserRemoved;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                                            mLastRuntimeID;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorRuntimeID, ::WeakEntityRef>>    mRuntimeIdMap;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserResumedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserSuspendedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRuntimeIDManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorRuntimeIDManager(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
#else // @header-generator platform
    MCAPI explicit ActorRuntimeIDManager(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addEntity(::EntityContext const&);
#else // @header-generator platform
    MCAPI void _addEntity(::EntityContext const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onActorAdded(::Actor&);
#else // @header-generator platform
    MCAPI void _onActorAdded(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onRemoveActorEntityReferences(::Actor&);
#else // @header-generator platform
    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeEntity(::EntityContext const&);
#else // @header-generator platform
    MCAPI void _removeEntity(::EntityContext const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorRuntimeID getNextRuntimeID();
#else // @header-generator platform
    MCAPI ::Actor* getRuntimeActorEntity(::ActorRuntimeID actorId, bool getRemoved) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getRuntimeActorEntity(::ActorRuntimeID, bool) const;

    MCNAPI std::vector<Actor*> getRuntimeActorList() const;

    MCNAPI void initialize(::IActorManagerConnector&);
#else // @header-generator platform
    MCAPI void initialize(::IActorManagerConnector& actorManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
#endif // @header-generator platform
    // NOLINTEND
};
