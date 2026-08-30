#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DimensionManager;
class IActorDimensionTransferer;
class PortalForcer;
class Vec3;
struct DimensionType;
// clang-format on

class ActorDimensionTransferManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IActorDimensionTransferer>>> mActorDimensionTransferer;
    ::ll::UntypedStorage<8, 24>                                                           mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                                           mPortalForcer;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDimensionTransferManager(
        std::unique_ptr<IActorDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>
    );

    MCNAPI void actorChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3> const&);

    MCNAPI bool canChangeDimension(::Actor const&, ::DimensionType);

    MCNAPI ~ActorDimensionTransferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<IActorDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
