#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class IContainerRegistryAccess;
class Player;
// clang-format on

class ContainerScreenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player*>                                              mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>                   mScreenContainerType;
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, ActorUniqueID, BlockPos>> mOwner;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND
};
