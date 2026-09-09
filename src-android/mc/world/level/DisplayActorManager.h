#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGarbageCollector;
class IAddDisplayActorEntityProxy;
class IDisplayActorManagerProxy;
class IPlayerDimensionTransferConnector;
class WeakEntityRef;
// clang-format on

class DisplayActorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                           mDisplayEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IDisplayActorManagerProxy>>> mDisplayActorManagerProxy;
    ::ll::UntypedStorage<8, 24>                                                           mActorGarbageCollector;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChangeDimensionSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayActorManager();

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<IDisplayActorManagerProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
