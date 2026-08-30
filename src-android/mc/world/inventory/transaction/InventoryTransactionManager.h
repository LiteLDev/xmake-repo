#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/transaction/InventoryAction.h"

// auto generated forward declare list
// clang-format off
class InventoryTransaction;
class ItemStack;
class Player;
// clang-format on

class InventoryTransactionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                             mPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InventoryTransaction>> mCurrentTransaction;
    ::ll::TypedStorage<8, 24, std::vector<InventoryAction>>         mExpectedActions;
    ::ll::TypedStorage<1, 1, bool>                                  mEnableLogs;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryTransactionManager& operator=(InventoryTransactionManager const&);
    InventoryTransactionManager(InventoryTransactionManager const&);
    InventoryTransactionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InventoryTransactionManager(::Player&);

    MCNAPI void _createServerSideAction(::ItemStack const&, ::ItemStack const&);

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
