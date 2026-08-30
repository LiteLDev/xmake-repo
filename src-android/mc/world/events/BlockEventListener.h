#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/level/block/actor/PistonState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
class ItemStackBase;
class Level;
class Player;
struct BlockNotificationEvent;
struct NewBlockID;
// clang-format on

class BlockEventListener {
public:
    // BlockEventListener inner types define
    using EventType = ::BlockNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BlockEventListener() = default;

    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    virtual ::EventResult onBlockDestroyedByPlayer(::Player&, ::Block const&, ::BlockPos const&, ::ItemStackBase const&, ::ItemStackBase const&);

    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(::Player&, ::BlockPos const&);

    virtual ::EventResult onBlockMovedByPiston(::BlockPos const&, ::BlockPos const&, ::PistonState const);

    virtual ::EventResult onBlockDestructionStopped(::Player&, ::BlockPos const&, int);

    virtual ::EventResult onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    virtual ::EventResult onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    virtual ::EventResult onBlockInteractedWith(::Player&, ::BlockPos const&);

    virtual ::EventResult onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);

    virtual ::EventResult onBlockModified(::BlockPos const&, ::Block const&, ::Block const&);

    virtual ::EventResult onUnknownBlockReceived(::Level&, ::NewBlockID const&, ushort);

    virtual ::EventResult onEvent(::BlockNotificationEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&,
        ::Block const&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

    MCNAPI ::EventResult $onBlockInPosWillBeDestroyedByPlayer(::Player&, ::BlockPos const&);

    MCNAPI ::EventResult $onBlockMovedByPiston(::BlockPos const&, ::BlockPos const&, ::PistonState const);

    MCNAPI ::EventResult $onBlockDestructionStopped(::Player&, ::BlockPos const&, int);

    MCNAPI ::EventResult
    $onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI ::EventResult
    $onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI ::EventResult $onBlockInteractedWith(::Player&, ::BlockPos const&);

    MCNAPI ::EventResult $onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);

    MCNAPI ::EventResult $onBlockModified(::BlockPos const&, ::Block const&, ::Block const&);

    MCNAPI ::EventResult $onUnknownBlockReceived(::Level&, ::NewBlockID const&, ushort);

    MCNAPI ::EventResult $onEvent(::BlockNotificationEvent const&);
    // NOLINTEND
};
