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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IActorDimensionTransferer>>> mActorDimensionTransferer;
    ::ll::UntypedStorage<8, 24>                                                           mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                                           mPortalForcer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IActorDimensionTransferer>>> mActorDimensionTransferer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>        mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PortalForcer> const>            mPortalForcer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDimensionTransferManager(
        std::unique_ptr<IActorDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>
#else // @header-generator platform
    MCAPI ActorDimensionTransferManager(
        ::std::unique_ptr<::IActorDimensionTransferer>    actorDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>     portalForcer
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void actorChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3> const&);
#else // @header-generator platform
    MCAPI void actorChangeDimension(::Actor& actor, ::DimensionType toId, ::std::optional<::Vec3> const& actorPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canChangeDimension(::Actor const&, ::DimensionType);
#else // @header-generator platform
    MCAPI bool canChangeDimension(::Actor const& actor, ::DimensionType toId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorDimensionTransferManager();
#else // @header-generator platform
    MCAPI ~ActorDimensionTransferManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unique_ptr<IActorDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::IActorDimensionTransferer>    actorDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>     portalForcer
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
