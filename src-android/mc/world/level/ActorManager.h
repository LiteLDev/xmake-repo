#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/ActorValidationError.h"
#include "mc/world/level/IActorManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGarbageCollector;
class ActorRuntimeID;
class Dimension;
class IActorManagerProxy;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class WeakEntityRef;
struct ActorUniqueID;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ActorManager : public ::IActorManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                    mEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IActorManagerProxy>>> mActorManagerProxy;
    ::ll::UntypedStorage<8, 24>                                                    mActorGarbageCollector;
    ::ll::UntypedStorage<8, 88>                                                    mOnActorEntityAdded;
    ::ll::UntypedStorage<8, 88>                                                    mPostReloadActor;
    ::ll::UntypedStorage<8, 88>                                                    mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLevelTearingDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnChunkDiscarded;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorManager();

    virtual ::Bedrock::PubSub::Connector<void (Actor&)>& getRegisterEntityAddedConnector();

    virtual ::Bedrock::PubSub::Connector<void (Actor&, ActorInitializationMethod)>& getRegisterPostReloadActorConnector();

    virtual ::Bedrock::PubSub::Connector<void (Actor&)>& getRegisterOnRemoveActorEntityReferenceConnector();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorManager(
        std::unique_ptr<IActorManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>>
    );

    MCNAPI void _onChunkDiscarded(::LevelChunk&);

    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError> addActorEntity(::Dimension&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addActorEntity(::IAddActorEntityProxy&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addActorEntity(::Dimension&, ::ActorUniqueID, ::ActorRuntimeID, ::OwnerPtr<EntityContext>);

    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addGlobalActorEntity(::Dimension&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addGlobalActorEntity(::IAddActorEntityProxy&, ::OwnerPtr<EntityContext>);

    MCNAPI void cleanupActorEntityReferencesGarbageCollect(::OwnerPtr<EntityContext>);

    MCNAPI void cleanupRemovedActorEntityReferencesGarbageCollect(::OwnerPtr<EntityContext>);

    MCNAPI ::OwnerPtr<EntityContext> deleteActorEntityFromWorldAndTakeEntity(::WeakEntityRef);

    MCNAPI void forceRemoveActor(::Actor&);

    MCNAPI void forceRemoveActorFromWorld(::Actor&);

    MCNAPI std::vector<OwnerPtr<EntityContext>> const& getEntities() const;

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);

    MCNAPI ::OwnerPtr<EntityContext> removeActorEntityAndTakeEntity(::WeakEntityRef);

    MCNAPI ::OwnerPtr<EntityContext> removeEntity(::WeakEntityRef);

    MCNAPI void setLevelIsTearingDown();

    MCNAPI void shutdown();

    MCNAPI ::OwnerPtr<EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(std::unique_ptr<IActorManagerProxy>, ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(Actor&)>& $getRegisterEntityAddedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(Actor&, ActorInitializationMethod)>&
    $getRegisterPostReloadActorConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(Actor&)>& $getRegisterOnRemoveActorEntityReferenceConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
