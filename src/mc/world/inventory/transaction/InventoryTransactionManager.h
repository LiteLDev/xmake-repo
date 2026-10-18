#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/inventory/transaction/InventoryAction.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class InventoryAction;
#endif // @header-generator platform
class InventoryTransaction;
class ItemStack;
class Player;
// clang-format on

class InventoryTransactionManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&>                             mPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InventoryTransaction>> mCurrentTransaction;
    ::ll::TypedStorage<8, 24, std::vector<InventoryAction>>         mExpectedActions;
    ::ll::TypedStorage<1, 1, bool>                                  mEnableLogs;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&>                                 mPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InventoryTransaction>> mCurrentTransaction;
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryAction>>         mExpectedActions;
    ::ll::TypedStorage<1, 1, bool>                                      mEnableLogs;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryTransactionManager& operator=(InventoryTransactionManager const&);
    InventoryTransactionManager(InventoryTransactionManager const&);
    InventoryTransactionManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit InventoryTransactionManager(::Player&);
#else // @header-generator platform
    MCAPI void _createServerSideAction(::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createServerSideAction(::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void addAction(::InventoryAction const& action, bool forceBalanced);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAction(::InventoryAction const&, bool);

    MCNAPI void addExpectedAction(::InventoryAction const&);

    MCNAPI bool checkActionExpected(::InventoryAction const&);

    MCNAPI void forceBalanceTransaction();

    MCNAPI std::unique_ptr<InventoryTransaction> const& getCurrentTransaction() const;

    MCNAPI void reset();

    MCNAPI void resetExpectedActions();

    MCNAPI ~InventoryTransactionManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&);
#else // @header-generator platform
    MCAPI ~InventoryTransactionManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
