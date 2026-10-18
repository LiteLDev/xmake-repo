#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/BlockEventListener.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/actor/PistonState.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class Block;
#else // @header-generator platform
class BlockEventListener;
#endif // @header-generator platform
class BlockGameplayHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class Dimension;
class ItemStackBase;
class Level;
class Player;
struct NewBlockID;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class BlockEventCoordinator : public ::EventCoordinator<BlockEventListener> {
#else // @header-generator platform
class BlockEventCoordinator : public ::EventCoordinator<::BlockEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockGameplayHandler>> mBlockGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventCoordinator();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGameplayHandler>> mBlockGameplayHandler;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockGameplayHandler& getBlockGameplayHandler();
#else // @header-generator platform
    MCAPI ::CoordinatorResult sendEvent(::EventRef<::BlockGameplayEvent<::CoordinatorResult>> const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableBlockGameplayEvent<::CoordinatorResult>> event);
#endif // @header-generator platform
    // NOLINTEND
};
