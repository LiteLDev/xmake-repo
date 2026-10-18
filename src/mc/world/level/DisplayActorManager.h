#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGarbageCollector;
#if defined(LL_PLAT_A) // @header-generator platform
class IAddDisplayActorEntityProxy;
class IDisplayActorManagerProxy;
#else // @header-generator platform
class EntityContext;
#endif // @header-generator platform
class IPlayerDimensionTransferConnector;
class WeakEntityRef;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IAddDisplayActorEntityProxy;
class IDisplayActorManagerProxy;
#endif // @header-generator platform
// clang-format on

class DisplayActorManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                           mDisplayEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IDisplayActorManagerProxy>>> mDisplayActorManagerProxy;
    ::ll::UntypedStorage<8, 24>                                                           mActorGarbageCollector;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>>                     mDisplayEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IDisplayActorManagerProxy>>> mDisplayActorManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> const>   mActorGarbageCollector;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChangeDimensionSubscription;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    DisplayActorManager();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    DisplayActorManager();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DisplayActorManager(
        std::unique_ptr<IDisplayActorManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>>
    );

    MCNAPI void _removeDisplayActorEntity(::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* addDisplayActorEntity(::IAddDisplayActorEntityProxy&, ::OwnerPtr<EntityContext>);

    MCNAPI void registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector&);

    MCNAPI void removeAllDisplayActorEntities();

    MCNAPI bool removeDisplayActorEntity(::WeakEntityRef);

    MCNAPI void shutdown();

    MCNAPI ~DisplayActorManager();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI DisplayActorManager(
        ::std::unique_ptr<::IDisplayActorManagerProxy>         displayActorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );

    MCNAPI void _removeDisplayActorEntity(::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* addDisplayActorEntity(
        ::IAddDisplayActorEntityProxy& addDisplayActorEntityProxy,
        ::OwnerPtr<::EntityContext>    entity
    );

    MCNAPI void
    registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector& playerDimensionTransferConnector);

    MCNAPI void removeAllDisplayActorEntities();

    MCNAPI bool removeDisplayActorEntity(::WeakEntityRef weakEntityRef);

    MCNAPI ~DisplayActorManager();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unique_ptr<IDisplayActorManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IDisplayActorManagerProxy>         displayActorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
