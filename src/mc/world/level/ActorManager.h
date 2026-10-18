#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/ActorValidationError.h"
#include "mc/world/level/IActorManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGarbageCollector;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorRuntimeID;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityContext;
#endif // @header-generator platform
class IActorManagerProxy;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class WeakEntityRef;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ActorManager : public ::IActorManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                    mEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IActorManagerProxy>>> mActorManagerProxy;
    ::ll::UntypedStorage<8, 24>                                                    mActorGarbageCollector;
    ::ll::UntypedStorage<8, 88>                                                    mOnActorEntityAdded;
    ::ll::UntypedStorage<8, 88>                                                    mPostReloadActor;
    ::ll::UntypedStorage<8, 88>                                                    mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLevelTearingDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnChunkDiscarded;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>>              mEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IActorManagerProxy>>> mActorManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector>>  mActorGarbageCollector;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Actor&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnActorEntityAdded;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::Actor&, ::ActorInitializationMethod), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mPostReloadActor;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Actor&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<1, 1, bool>                             mIsLevelTearingDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkDiscarded;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorManager();
#else // @header-generator platform
    virtual ~ActorManager() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (Actor&)>& getRegisterEntityAddedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>& getRegisterEntityAddedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (Actor&, ActorInitializationMethod)>& getRegisterPostReloadActorConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    getRegisterPostReloadActorConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (Actor&)>& getRegisterOnRemoveActorEntityReferenceConnector();
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>&
    getRegisterOnRemoveActorEntityReferenceConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorManager(
        std::unique_ptr<IActorManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>>
#else // @header-generator platform
    MCAPI ActorManager(
        ::std::unique_ptr<::IActorManagerProxy>                actorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onChunkDiscarded(::LevelChunk&);
#else // @header-generator platform
    MCAPI void _onChunkDiscarded(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError> addActorEntity(::Dimension&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addActorEntity(::IAddActorEntityProxy&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addActorEntity(::Dimension&, ::ActorUniqueID, ::ActorRuntimeID, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addGlobalActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addGlobalActorEntity(::Dimension&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addGlobalActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addGlobalActorEntity(::IAddActorEntityProxy&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI void cleanupActorEntityReferencesGarbageCollect(::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void cleanupActorEntityReferencesGarbageCollect(::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> deleteActorEntityFromWorldAndTakeEntity(::WeakEntityRef entityRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void cleanupRemovedActorEntityReferencesGarbageCollect(::OwnerPtr<EntityContext>);
#else // @header-generator platform
    MCAPI void forceRemoveActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext> deleteActorEntityFromWorldAndTakeEntity(::WeakEntityRef);
#else // @header-generator platform
    MCAPI void forceRemoveActorFromWorld(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forceRemoveActor(::Actor&);
#else // @header-generator platform
    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forceRemoveActorFromWorld(::Actor&);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> removeActorEntityAndTakeEntity(::WeakEntityRef entityRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<OwnerPtr<EntityContext>> const& getEntities() const;
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void shutdown();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext> removeActorEntityAndTakeEntity(::WeakEntityRef);

    MCNAPI ::OwnerPtr<EntityContext> removeEntity(::WeakEntityRef);

    MCNAPI void setLevelIsTearingDown();

    MCNAPI void shutdown();

    MCNAPI ::OwnerPtr<EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& levelChunk);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
        $ctor(std::unique_ptr<IActorManagerProxy>, ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::IActorManagerProxy>                actorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(Actor&)>& $getRegisterEntityAddedConnector();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterEntityAddedConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterEntityAddedConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(Actor&, ActorInitializationMethod)>&
    $getRegisterPostReloadActorConnector();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    $getRegisterPostReloadActorConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    $getRegisterPostReloadActorConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(Actor&)>& $getRegisterOnRemoveActorEntityReferenceConnector();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterOnRemoveActorEntityReferenceConnector();
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
