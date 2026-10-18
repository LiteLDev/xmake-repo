#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockActor;
#if defined(LL_PLAT_A) // @header-generator platform
class IContainerRegistryAccess;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
// clang-format on

class ContainerScreenContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player*>                                              mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>                   mScreenContainerType;
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, ActorUniqueID, BlockPos>> mOwner;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player*>                                                      mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>                           mScreenContainerType;
    ::ll::TypedStorage<8, 24, ::std::variant<::std::monostate, ::ActorUniqueID, ::BlockPos>> mOwner;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerScreenContext(::Player&, ::SharedTypes::Legacy::ContainerType const, ::ActorUniqueID const&);

    MCNAPI ContainerScreenContext(::Player&, ::SharedTypes::Legacy::ContainerType const, ::BlockPos const&);

    MCNAPI ::gsl::not_null<StackRefResult<IContainerRegistryAccess>> getContainerRegistryAccess() const;

    MCNAPI ::Player& getPlayer() const;

    MCNAPI ::SharedTypes::Legacy::ContainerType getScreenContainerType() const;

    MCNAPI bool operator==(::SharedTypes::Legacy::ContainerType const) const;

    MCNAPI ::Actor* tryGetActor() const;

    MCNAPI ::BlockActor* tryGetBlockActor() const;

    MCNAPI ::BlockPos const* tryGetBlockActorPos() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, ::SharedTypes::Legacy::ContainerType const, ::ActorUniqueID const&);

    MCNAPI void* $ctor(::Player&, ::SharedTypes::Legacy::ContainerType const, ::BlockPos const&);
#else // @header-generator platform
    MCAPI ::BlockActor* tryGetBlockActor() const;
#endif // @header-generator platform
    // NOLINTEND
};
