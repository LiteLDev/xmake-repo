#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/InventoryAction.h"
#include "mc/world/inventory/transaction/InventorySource.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"
#include "mc/world/inventory/transaction/InventoryTransactionItemGroup.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class InventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<InventorySource, std::vector<InventoryAction>>> mActions;
    ::ll::TypedStorage<8, 24, std::vector<InventoryTransactionItemGroup>>                        mContents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAction(::InventoryAction const&);

    MCNAPI void addItemToContent(::ItemStack const&, int);

    MCNAPI void forceBalanceTransaction();

    MCNAPI void markValidActionsForSerialization(bool) const;

    MCNAPI bool operator==(::InventoryTransaction const&) const;

    MCNAPI void postLoadItems(::BlockPalette&, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool checkTransactionItemsMatch(::ItemStack const&, ::ItemStack const&);

    MCNAPI static std::string const getInventoryTransactionErrorName(::InventoryTransactionError);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_DESERIALIZE_ACTION_SIZE();

    MCNAPI static ::BidirectionalUnorderedMap<InventoryTransactionError, std::string> const&
    inventoryTransactionErrorMap();
    // NOLINTEND
};
