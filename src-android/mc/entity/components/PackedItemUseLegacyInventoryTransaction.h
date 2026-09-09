#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LegacySetSlot.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/transaction/ItemUseInventoryTransaction.h"

struct PackedItemUseLegacyInventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                               mID;
    ::ll::TypedStorage<8, 24, std::vector<LegacySetSlot>>     mSlots;
    ::ll::TypedStorage<8, 224, ::ItemUseInventoryTransaction> mTransaction;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackedItemUseLegacyInventoryTransaction(::PackedItemUseLegacyInventoryTransaction const&);

    MCNAPI ::PackedItemUseLegacyInventoryTransaction& operator=(::PackedItemUseLegacyInventoryTransaction const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackedItemUseLegacyInventoryTransaction const&);
    // NOLINTEND
};
