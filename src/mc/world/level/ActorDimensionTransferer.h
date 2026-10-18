#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/IActorDimensionTransferProxy.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IActorDimensionTransferProxy>>> mActorDimensionTransferProxy;
    ::ll::UntypedStorage<8, 24> mActorManager;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IActorDimensionTransferProxy>>>
                                                                                   mActorDimensionTransferProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorManager> const> mActorManager;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorDimensionTransferer();
#else // @header-generator platform
    virtual ~ActorDimensionTransferer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setupActorForTransfer(::Actor&);
#else // @header-generator platform
    virtual void setupActorForTransfer(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 findTargetPositionAndSetPosition(::Actor&, ::DimensionType, ::DimensionType, ::IDimension const&, ::PortalForcer const&, std::optional<Vec3> const&);
#else // @header-generator platform
    virtual ::Vec3 findTargetPositionAndSetPosition(
        ::Actor&                       actor,
        ::DimensionType                toId,
        ::DimensionType                fromId,
        ::IDimension const&            toDimension,
        ::PortalForcer const&          portalForcer,
        ::std::optional<::Vec3> const& actorPosition
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transferActor(::Actor&, ::Dimension&, ::Vec3 const&);
    // clang-format on
#else // @header-generator platform
    virtual void transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDimensionTransferer(
        std::unique_ptr<IActorDimensionTransferProxy>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>
#else // @header-generator platform
    MCAPI ActorDimensionTransferer(
        ::std::unique_ptr<::IActorDimensionTransferProxy> actorDimensionTransferProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>     actorManager
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
        $ctor(std::unique_ptr<IActorDimensionTransferProxy>, ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::IActorDimensionTransferProxy> actorDimensionTransferProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>     actorManager
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setupActorForTransfer(::Actor&);
#else // @header-generator platform
    MCAPI void $setupActorForTransfer(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $findTargetPositionAndSetPosition(
        ::Actor&,
        ::DimensionType,
        ::DimensionType,
        ::IDimension const&,
        ::PortalForcer const&,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI ::Vec3 $findTargetPositionAndSetPosition(
        ::Actor&                       actor,
        ::DimensionType                toId,
        ::DimensionType                fromId,
        ::IDimension const&            toDimension,
        ::PortalForcer const&          portalForcer,
        ::std::optional<::Vec3> const& actorPosition
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $transferActor(::Actor&, ::Dimension&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void $transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
