#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class ActorManager;
class Dimension;
class EntityRegistry;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class ILevelStorageManagerConnector;
class LevelChunk;
class LevelStorage;
class ListTag;
struct ActorUniqueID;
// clang-format on

class AutonomousActorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mOwnedInactiveAutonomousActors;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>>      mActiveAutonomousActors;
    ::ll::UntypedStorage<8, 24>                                mActorManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAutonomousActorRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkDiscarded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveGameDataSubscription;
    ::ll::UntypedStorage<1, 16>                                mEntityRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    AutonomousActorManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutonomousActorManager(
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>
    );

    MCNAPI void _onChunkDiscarded(::LevelChunk&);

    MCNAPI void _onRemoveActorEntityReferences(::Actor&);

    MCNAPI void _saveAllAutonomousActors(::LevelStorage&);

    MCNAPI ::Actor* addAutonomousActorEntity(::Dimension&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* addAutonomousActorEntity(::IAddActorEntityProxy&, ::OwnerPtr<EntityContext>);

    MCNAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(::ActorUniqueID) const;

    MCNAPI void loadAutonomousActorsFromDisk(::LevelStorage&, ::ActorFactory&);

    MCNAPI void onLevelTearingDown();

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);

    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector&);

    MCNAPI ~AutonomousActorManager();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& AUTONOMOUS_ACTOR_KEY();

    MCNAPI static std::string_view const& AUTONOMOUS_ACTOR_LIST_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
