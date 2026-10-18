#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class ActorManager;
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityContext;
#endif // @header-generator platform
class EntityRegistry;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class ILevelStorageManagerConnector;
class LevelChunk;
class LevelStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class ListTag;
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
struct ActorUniqueID;
// clang-format on

class AutonomousActorManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                mOwnedInactiveAutonomousActors;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>>      mActiveAutonomousActors;
    ::ll::UntypedStorage<8, 24>                                mActorManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>>          mOwnedInactiveAutonomousActors;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                      mActiveAutonomousActors;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorManager> const> mActorManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnRemoveActorEntityReferences;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAutonomousActorRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkDiscarded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveGameDataSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16>                                mEntityRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>>     mEntityRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AutonomousActorManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AutonomousActorManager(
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>
#else // @header-generator platform
    MCAPI AutonomousActorManager(
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>              actorManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onChunkDiscarded(::LevelChunk&);
#else // @header-generator platform
    MCAPI void _onChunkDiscarded(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onRemoveActorEntityReferences(::Actor&);
#else // @header-generator platform
    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveAllAutonomousActors(::LevelStorage&);
#else // @header-generator platform
    MCAPI void _saveAllAutonomousActors(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* addAutonomousActorEntity(::Dimension&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI ::Actor*
    addAutonomousActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* addAutonomousActorEntity(::IAddActorEntityProxy&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI ::Actor* addAutonomousActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(::ActorUniqueID) const;
#else // @header-generator platform
    MCAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(::ActorUniqueID actorUniqueID) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadAutonomousActorsFromDisk(::LevelStorage&, ::ActorFactory&);
#else // @header-generator platform
    MCAPI void loadAutonomousActorsFromDisk(::LevelStorage& levelStorage, ::ActorFactory& actorFactory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onLevelTearingDown();
#else // @header-generator platform
    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);
#else // @header-generator platform
    MCAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector&);

    MCNAPI ~AutonomousActorManager();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& AUTONOMOUS_ACTOR_KEY();

    MCNAPI static std::string_view const& AUTONOMOUS_ACTOR_LIST_KEY();
#else // @header-generator platform
    MCAPI ~AutonomousActorManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>              actorManager
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
