#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IMessenger.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandOrigin;
class CommandOutput;
class ItemDescriptor;
class ItemInstance;
class LevelChunk;
class Mob;
class Player;
namespace CodeBuilder { class IClient; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class Messenger : public ::CodeBuilder::IMessenger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mCodeBuilderClient;
    // NOLINTEND

public:
    // prevent constructor by default
    Messenger();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Messenger();

    virtual void onAgentAction(::AgentActionType, std::string const&, ::Json::Value const&) const;

    virtual void blockBroken(::Player const*, ::Block const&, int, int, ushort) const;

    virtual void blockPlaced(::Player const*, ::Block const&, bool, ushort) const;

    virtual void blockPlacedByCommand(::Block const&, ushort, int) const;

    virtual void cameraUsed(bool) const;

    virtual void codeBuilderRuntimeAction(std::string const&) const;

    virtual void codeBuilderScoreChanged(std::string const&, int const) const;

    virtual void chunkChanged(::LevelChunk&) const;

    virtual void chunkLoaded(::LevelChunk&) const;

    virtual void chunkUnloaded(::LevelChunk&) const;

    virtual void endOfDay(::Player const*) const;

    virtual void entitySpawned(::Player const*, int, uint) const;

    virtual void itemAcquired(::Player const*, ::ItemDescriptor const&, int, uint, int) const;

    virtual void itemCrafted(::Player const*, bool, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool) const;

    virtual void itemDropped(::Player const*, ::ItemDescriptor const&) const;

    virtual void itemEquipped(::Player const*, ::ItemInstance const&, int) const;

    virtual void itemInteracted(::Player const*, ::ItemInstance const&, int) const;

    virtual void itemSmelted(::Player const*, ::ItemDescriptor const&, ::ItemDescriptor const&) const;

    virtual void itemUsed(::Player const*, ::ItemDescriptor const&, int) const;

    virtual void mobInteracted(::Player const*, int, int, int, uchar) const;

    virtual void mobKilled(::Player const*, ::Actor*, ::Mob&, uint, std::string const&, int) const;

    virtual void piglinBarter(::Player const*, std::string const&, bool) const;

    virtual void playerBounced(::Player const*, ::Block const&, int, int) const;

    virtual void playerDied(::Player const*, int, int, int, bool) const;

    virtual void playerJoined(::Player const*) const;

    virtual void playerLeave(::Player const*) const;

    virtual void playerMessage(std::string const&, std::string const&, std::string const&, std::string const&) const;

    virtual void playerTeleported(::Player const*, float, int, int) const;

    virtual void playerTransform(::Player const*) const;

    virtual void playerTravelled(::Player const*, float, int, int) const;

    virtual void targetBlockHit(::Player const*, int const) const;

    virtual void tradeCompleted(::Player const*, ::Actor*, ::ItemDescriptor const&, ::ItemDescriptor const&, ::ItemInstance const&, int) const;

    virtual void onCommand(::CommandOrigin const&, ::CommandOutput const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAgentAction(::AgentActionType, std::string const&, ::Json::Value const&) const;

    MCNAPI void $blockBroken(::Player const*, ::Block const&, int, int, ushort) const;

    MCNAPI void $blockPlaced(::Player const*, ::Block const&, bool, ushort) const;

    MCNAPI void $blockPlacedByCommand(::Block const&, ushort, int) const;

    MCNAPI void $cameraUsed(bool) const;

    MCNAPI void $codeBuilderRuntimeAction(std::string const&) const;

    MCNAPI void $codeBuilderScoreChanged(std::string const&, int const) const;

    MCNAPI void $chunkChanged(::LevelChunk&) const;

    MCNAPI void $chunkLoaded(::LevelChunk&) const;

    MCNAPI void $chunkUnloaded(::LevelChunk&) const;

    MCNAPI void $endOfDay(::Player const*) const;

    MCNAPI void $entitySpawned(::Player const*, int, uint) const;

    MCNAPI void $itemAcquired(::Player const*, ::ItemDescriptor const&, int, uint, int) const;

    MCNAPI void
    $itemCrafted(::Player const*, bool, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool) const;

    MCNAPI void $itemDropped(::Player const*, ::ItemDescriptor const&) const;

    MCNAPI void $itemEquipped(::Player const*, ::ItemInstance const&, int) const;

    MCNAPI void $itemInteracted(::Player const*, ::ItemInstance const&, int) const;

    MCNAPI void $itemSmelted(::Player const*, ::ItemDescriptor const&, ::ItemDescriptor const&) const;

    MCNAPI void $itemUsed(::Player const*, ::ItemDescriptor const&, int) const;

    MCNAPI void $mobInteracted(::Player const*, int, int, int, uchar) const;

    MCNAPI void $mobKilled(::Player const*, ::Actor*, ::Mob&, uint, std::string const&, int) const;

    MCNAPI void $piglinBarter(::Player const*, std::string const&, bool) const;

    MCNAPI void $playerBounced(::Player const*, ::Block const&, int, int) const;

    MCNAPI void $playerDied(::Player const*, int, int, int, bool) const;

    MCNAPI void $playerJoined(::Player const*) const;

    MCNAPI void $playerLeave(::Player const*) const;

    MCNAPI void $playerMessage(std::string const&, std::string const&, std::string const&, std::string const&) const;

    MCNAPI void $playerTeleported(::Player const*, float, int, int) const;

    MCNAPI void $playerTransform(::Player const*) const;

    MCNAPI void $playerTravelled(::Player const*, float, int, int) const;

    MCNAPI void $targetBlockHit(::Player const*, int const) const;

    MCNAPI void $tradeCompleted(
        ::Player const*,
        ::Actor*,
        ::ItemDescriptor const&,
        ::ItemDescriptor const&,
        ::ItemInstance const&,
        int
    ) const;

    MCNAPI void $onCommand(::CommandOrigin const&, ::CommandOutput const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace CodeBuilder
