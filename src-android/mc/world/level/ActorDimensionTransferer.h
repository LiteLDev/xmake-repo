#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IActorDimensionTransferer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorManager;
class Dimension;
class IActorDimensionTransferProxy;
class IDimension;
class PortalForcer;
class Vec3;
struct DimensionType;
// clang-format on

class ActorDimensionTransferer : public ::IActorDimensionTransferer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IActorDimensionTransferProxy>>> mActorDimensionTransferProxy;
    ::ll::UntypedStorage<8, 24> mActorManager;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorDimensionTransferer();

    virtual void setupActorForTransfer(::Actor&);

    virtual ::Vec3 findTargetPositionAndSetPosition(::Actor&, ::DimensionType, ::DimensionType, ::IDimension const&, ::PortalForcer const&, std::optional<Vec3> const&);

    virtual void transferActor(::Actor&, ::Dimension&, ::Vec3 const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDimensionTransferer(
        std::unique_ptr<IActorDimensionTransferProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(std::unique_ptr<IActorDimensionTransferProxy>, ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setupActorForTransfer(::Actor&);

    MCNAPI ::Vec3 $findTargetPositionAndSetPosition(
        ::Actor&,
        ::DimensionType,
        ::DimensionType,
        ::IDimension const&,
        ::PortalForcer const&,
        std::optional<Vec3> const&
    );

    MCNAPI void $transferActor(::Actor&, ::Dimension&, ::Vec3 const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
