#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"
#include "mc/world/level/block/actor/PistonState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockGameplayHandler;
class BlockPos;
class Dimension;
class ItemStackBase;
class Level;
class Player;
struct NewBlockID;
// clang-format on

class BlockEventCoordinator : public ::EventCoordinator<BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockGameplayHandler>> mBlockGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockGameplayHandler& getBlockGameplayHandler();

    MCNAPI void registerBlockGameplayHandler(std::unique_ptr<BlockGameplayHandler>&&);

    MCNAPI void sendBlockDestroyedByPlayer(
        ::Player&,
        ::Block const&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

    MCNAPI void sendBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI void sendBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI void sendBlockDestructionStopped(::Player&, ::BlockPos const&, int);

    MCNAPI void sendBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);

    MCNAPI void sendBlockInPosWillBeDestroyedByPlayer(::Player&, ::BlockPos const&);

    MCNAPI void sendBlockInteractedWith(::Player&, ::BlockPos const&);

    MCNAPI void sendBlockMovedByPiston(::BlockPos const&, ::BlockPos const&, ::PistonState const);

    MCNAPI void sendBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<BlockGameplayEvent<CoordinatorResult>> const&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<MutableBlockGameplayEvent<CoordinatorResult>>);

    MCNAPI std::optional<std::string> sendEvent(::EventRef<BlockGameplayEvent<std::optional<std::string>>> const&);

    MCNAPI void sendEvent(::EventRef<BlockGameplayEvent<void>> const&);

    MCNAPI void sendUnknownBlockReceived(::Level&, ::NewBlockID const&, ushort);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
