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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~BlockEventListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestroyedByPlayer(::Player&, ::Block const&, ::BlockPos const&, ::ItemStackBase const&, ::ItemStackBase const&);
#else // @header-generator platform
    virtual ::EventResult onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(::Player&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockMovedByPiston(::BlockPos const&, ::BlockPos const&, ::PistonState const);
#else // @header-generator platform
    virtual ::EventResult
    onBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState const action);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestructionStopped(::Player&, ::BlockPos const&, int);
#else // @header-generator platform
    virtual ::EventResult onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    virtual ::EventResult onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face,
        int const         previousProgress
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    virtual ::EventResult onBlockDestructionContinued(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    block,
        uchar const       face,
        int const         previousProgress
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockInteractedWith(::Player&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::EventResult onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);
#else // @header-generator platform
    virtual ::EventResult
    onBlockExploded(::Dimension& dimension, ::BlockPos const& blockPos, ::Block const& destroyedBlock, ::Actor* source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockModified(::BlockPos const&, ::Block const&, ::Block const&);
#else // @header-generator platform
    virtual ::EventResult onBlockModified(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onUnknownBlockReceived(::Level&, ::NewBlockID const&, ushort);
#else // @header-generator platform
    virtual ::EventResult onUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::BlockNotificationEvent const&);
    // clang-format on
#else // @header-generator platform
    virtual ::EventResult onEvent(::BlockNotificationEvent const& event);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&,
        ::Block const&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::ItemStackBase const&
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockInPosWillBeDestroyedByPlayer(::Player&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockMovedByPiston(::BlockPos const&, ::BlockPos const&, ::PistonState const);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState const action);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockDestructionStopped(::Player&, ::BlockPos const&, int);
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult
    $onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face,
        int const         previousProgress
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult
    $onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockDestructionContinued(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    block,
        uchar const       face,
        int const         previousProgress
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockInteractedWith(::Player&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockModified(::BlockPos const&, ::Block const&, ::Block const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onBlockModified(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onUnknownBlockReceived(::Level&, ::NewBlockID const&, ushort);
#else // @header-generator platform
    MCFOLD ::EventResult $onUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::BlockNotificationEvent const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCFOLD ::EventResult $onEvent(::BlockNotificationEvent const& event);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
