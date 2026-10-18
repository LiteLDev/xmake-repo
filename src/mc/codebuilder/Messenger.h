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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mCodeBuilderClient;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CodeBuilder::IClient>> mCodeBuilderClient;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Messenger();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Messenger();
#else // @header-generator platform
    virtual ~Messenger() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAgentAction(::AgentActionType, std::string const&, ::Json::Value const&) const;
#else // @header-generator platform
    virtual void
    onAgentAction(::AgentActionType actionType, ::std::string const& requestId, ::Json::Value const& result) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void blockBroken(::Player const*, ::Block const&, int, int, ushort) const;
#else // @header-generator platform
    virtual void onCommand(::CommandOrigin const& origin, ::CommandOutput const& output) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void blockPlaced(::Player const*, ::Block const&, bool, ushort) const;
#else // @header-generator platform
    virtual void
    blockBroken(::Player const* player, ::Block const& block, int method, int variantData, ushort auxType) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void blockPlacedByCommand(::Block const&, ushort, int) const;
#else // @header-generator platform
    virtual void blockPlaced(::Player const* player, ::Block const& block, bool underWater, ushort auxType) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cameraUsed(bool) const;
#else // @header-generator platform
    virtual void blockPlacedByCommand(::Block const& block, ushort auxType, int numberOfBlocksPlaced) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void codeBuilderRuntimeAction(std::string const&) const;
#else // @header-generator platform
    virtual void cameraUsed(bool isSelfie) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void codeBuilderScoreChanged(std::string const&, int const) const;
#else // @header-generator platform
    virtual void codeBuilderRuntimeAction(::std::string const& action) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void chunkChanged(::LevelChunk&) const;
#else // @header-generator platform
    virtual void codeBuilderScoreChanged(::std::string const& objective, int const score) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void chunkLoaded(::LevelChunk&) const;
#else // @header-generator platform
    virtual void chunkChanged(::LevelChunk& chunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void chunkUnloaded(::LevelChunk&) const;
#else // @header-generator platform
    virtual void chunkLoaded(::LevelChunk& chunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void endOfDay(::Player const*) const;
#else // @header-generator platform
    virtual void chunkUnloaded(::LevelChunk& chunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void entitySpawned(::Player const*, int, uint) const;
#else // @header-generator platform
    virtual void endOfDay(::Player const* player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void itemAcquired(::Player const*, ::ItemDescriptor const&, int, uint, int) const;
#else // @header-generator platform
    virtual void entitySpawned(::Player const* player, int mobType, uint spawnMethod) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void itemCrafted(::Player const*, bool, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool) const;
#else // @header-generator platform
    virtual void itemAcquired(
        ::Player const*         player,
        ::ItemDescriptor const& item,
        int,
        uint amountAcquired,
        int  acquisitionMethod
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void itemDropped(::Player const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual void itemCrafted(
        ::Player const*       player,
        bool                  craftingTable,
        ::ItemInstance const& item,
        bool                  recipeBook,
        bool                  hadSearchString,
        bool                  craftedAutomatically,
        int                   startingTabId,
        int                   endingTabId,
        int                   numTabsChanged,
        bool                  filterOn,
        bool                  recipeBookShown
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void itemEquipped(::Player const*, ::ItemInstance const&, int) const;
#else // @header-generator platform
    virtual void itemDropped(::Player const* player, ::ItemDescriptor const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void itemInteracted(::Player const*, ::ItemInstance const&, int) const;
#else // @header-generator platform
    virtual void itemEquipped(::Player const* player, ::ItemInstance const& item, int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void itemSmelted(::Player const*, ::ItemDescriptor const&, ::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual void itemInteracted(::Player const* player, ::ItemInstance const& item, int method) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void itemUsed(::Player const*, ::ItemDescriptor const&, int) const;
#else // @header-generator platform
    virtual void
    itemSmelted(::Player const* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void mobInteracted(::Player const*, int, int, int, uchar) const;
#else // @header-generator platform
    virtual void itemUsed(::Player const* player, ::ItemDescriptor const& item, int useMethod) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void mobKilled(::Player const*, ::Actor*, ::Mob&, uint, std::string const&, int) const;
#else // @header-generator platform
    virtual void mobInteracted(
        ::Player const* player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void piglinBarter(::Player const*, std::string const&, bool) const;
#else // @header-generator platform
    virtual void mobKilled(
        ::Player const* player,
        ::Actor*        entKiller,
        ::Mob&          mobKilled,
        uint            method,
        ::std::string const&,
        int traderTier
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerBounced(::Player const*, ::Block const&, int, int) const;
#else // @header-generator platform
    virtual void
    piglinBarter(::Player const* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerDied(::Player const*, int, int, int, bool) const;
#else // @header-generator platform
    virtual void playerBounced(::Player const* player, ::Block const& block, int bounceHeight, int auxType) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerJoined(::Player const*) const;
#else // @header-generator platform
    virtual void playerDied(::Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerLeave(::Player const*) const;
#else // @header-generator platform
    virtual void playerJoined(::Player const* player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerMessage(std::string const&, std::string const&, std::string const&, std::string const&) const;
#else // @header-generator platform
    virtual void playerLeave(::Player const* player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTeleported(::Player const*, float, int, int) const;
#else // @header-generator platform
    virtual void playerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTransform(::Player const*) const;
#else // @header-generator platform
    virtual void playerTeleported(::Player const* player, float metersTravelled, int cause, int sourceType) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTravelled(::Player const*, float, int, int) const;
#else // @header-generator platform
    virtual void playerTransform(::Player const* player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void targetBlockHit(::Player const*, int const) const;
#else // @header-generator platform
    virtual void playerTravelled(
        ::Player const* player,
        float           metersTravelledSinceLastEvent,
        int             travelMethodType,
        int             newBiome
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tradeCompleted(::Player const*, ::Actor*, ::ItemDescriptor const&, ::ItemDescriptor const&, ::ItemInstance const&, int) const;
#else // @header-generator platform
    virtual void targetBlockHit(::Player const* player, int const redstoneLevel) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCommand(::CommandOrigin const&, ::CommandOutput const&);
    // clang-format on
#else // @header-generator platform
    virtual void tradeCompleted(
        ::Player const*         player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI explicit Messenger(::Bedrock::NonOwnerPointer<::CodeBuilder::IClient> codeBuilderClient);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::CodeBuilder::IClient> codeBuilderClient);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAgentAction(::AgentActionType, std::string const&, ::Json::Value const&) const;
#else // @header-generator platform
    MCNAPI void
    $onAgentAction(::AgentActionType actionType, ::std::string const& requestId, ::Json::Value const& result) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void $onCommand(::CommandOrigin const& origin, ::CommandOutput const& output);
#endif // @header-generator platform

    MCNAPI void
#if defined(LL_PLAT_A) // @header-generator platform
    $itemCrafted(::Player const*, bool, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool) const;
#else // @header-generator platform
    $blockBroken(::Player const* player, ::Block const& block, int method, int variantData, ushort auxType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $itemDropped(::Player const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCNAPI void $blockPlaced(::Player const* player, ::Block const& block, bool underWater, ushort auxType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $itemEquipped(::Player const*, ::ItemInstance const&, int) const;
#else // @header-generator platform
    MCNAPI void $blockPlacedByCommand(::Block const& block, ushort auxType, int numberOfBlocksPlaced) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $itemInteracted(::Player const*, ::ItemInstance const&, int) const;
#else // @header-generator platform
    MCNAPI void $cameraUsed(bool isSelfie) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $itemSmelted(::Player const*, ::ItemDescriptor const&, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCNAPI void $codeBuilderRuntimeAction(::std::string const& action) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $itemUsed(::Player const*, ::ItemDescriptor const&, int) const;
#else // @header-generator platform
    MCNAPI void $codeBuilderScoreChanged(::std::string const& objective, int const score) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $mobInteracted(::Player const*, int, int, int, uchar) const;
#else // @header-generator platform
    MCNAPI void $chunkChanged(::LevelChunk& chunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $mobKilled(::Player const*, ::Actor*, ::Mob&, uint, std::string const&, int) const;
#else // @header-generator platform
    MCNAPI void $chunkLoaded(::LevelChunk& chunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $piglinBarter(::Player const*, std::string const&, bool) const;
#else // @header-generator platform
    MCNAPI void $chunkUnloaded(::LevelChunk& chunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerBounced(::Player const*, ::Block const&, int, int) const;
#else // @header-generator platform
    MCNAPI void $endOfDay(::Player const* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerDied(::Player const*, int, int, int, bool) const;
#else // @header-generator platform
    MCNAPI void $entitySpawned(::Player const* player, int mobType, uint spawnMethod) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void $itemAcquired(
        ::Player const*         player,
        ::ItemDescriptor const& item,
        int,
        uint amountAcquired,
        int  acquisitionMethod
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onCommand(::CommandOrigin const&, ::CommandOutput const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $itemCrafted(
        ::Player const*       player,
        bool                  craftingTable,
        ::ItemInstance const& item,
        bool                  recipeBook,
        bool                  hadSearchString,
        bool                  craftedAutomatically,
        int                   startingTabId,
        int                   endingTabId,
        int                   numTabsChanged,
        bool                  filterOn,
        bool                  recipeBookShown
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI void $itemDropped(::Player const* player, ::ItemDescriptor const& item) const;

    MCNAPI void $itemEquipped(::Player const* player, ::ItemInstance const& item, int slot) const;

    MCNAPI void $itemInteracted(::Player const* player, ::ItemInstance const& item, int method) const;

    MCNAPI void
    $itemSmelted(::Player const* player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem) const;

    MCNAPI void $itemUsed(::Player const* player, ::ItemDescriptor const& item, int useMethod) const;

    MCNAPI void $mobInteracted(
        ::Player const* player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    ) const;

    MCNAPI void $mobKilled(
        ::Player const* player,
        ::Actor*        entKiller,
        ::Mob&          mobKilled,
        uint            method,
        ::std::string const&,
        int traderTier
    ) const;

    MCNAPI void
    $piglinBarter(::Player const* player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer) const;

    MCNAPI void $playerBounced(::Player const* player, ::Block const& block, int bounceHeight, int auxType) const;

    MCNAPI void $playerDied(::Player const* player, int killerId, int killerVariant, int reason, bool inRaid) const;

    MCNAPI void $playerJoined(::Player const* player) const;

    MCNAPI void $playerLeave(::Player const* player) const;

    MCNAPI void $playerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    ) const;

    MCNAPI void $playerTeleported(::Player const* player, float metersTravelled, int cause, int sourceType) const;

    MCNAPI void $playerTransform(::Player const* player) const;

    MCNAPI void $playerTravelled(
        ::Player const* player,
        float           metersTravelledSinceLastEvent,
        int             travelMethodType,
        int             newBiome
    ) const;

    MCNAPI void $targetBlockHit(::Player const* player, int const redstoneLevel) const;

    MCNAPI void $tradeCompleted(
        ::Player const*         player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    ) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CodeBuilder
