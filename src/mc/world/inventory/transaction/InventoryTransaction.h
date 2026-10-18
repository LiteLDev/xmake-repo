#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/BidirectionalUnorderedMap.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/transaction/InventoryAction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/transaction/InventorySource.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/transaction/InventoryTransactionItemGroup.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class BlockPalette;
#else // @header-generator platform
class InventoryAction;
class InventoryTransactionItemGroup;
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class InventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<InventorySource, std::vector<InventoryAction>>> mActions;
    ::ll::TypedStorage<8, 24, std::vector<InventoryTransactionItemGroup>>                        mContents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InventorySource, ::std::vector<::InventoryAction>>> mActions;
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryTransactionItemGroup>>                            mContents;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAction(::InventoryAction const&);
#else // @header-generator platform
    MCAPI void addAction(::InventoryAction const& action);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addItemToContent(::ItemStack const&, int);
#else // @header-generator platform
    MCAPI void addItemToContent(::ItemStack const& item, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forceBalanceTransaction();
#else // @header-generator platform
    MCAPI void forceBalanceTransaction();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void markValidActionsForSerialization(bool) const;

    MCNAPI bool operator==(::InventoryTransaction const&) const;

    MCNAPI void postLoadItems(::BlockPalette&, bool);
#else // @header-generator platform
    MCAPI ~InventoryTransaction();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool checkTransactionItemsMatch(::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI static bool checkTransactionItemsMatch(::ItemStack const& serverItem, ::ItemStack const& clientItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const getInventoryTransactionErrorName(::InventoryTransactionError);
#else // @header-generator platform
    MCAPI static ::std::string const getInventoryTransactionErrorName(::InventoryTransactionError type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MAX_DESERIALIZE_ACTION_SIZE();

    MCNAPI static ::BidirectionalUnorderedMap<InventoryTransactionError, std::string> const&
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::InventoryTransactionError, ::std::string> const&
#endif // @header-generator platform
    inventoryTransactionErrorMap();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
