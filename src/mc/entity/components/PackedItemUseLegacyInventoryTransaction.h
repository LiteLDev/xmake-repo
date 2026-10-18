#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/LegacySetSlot.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/transaction/ItemUseInventoryTransaction.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ItemStackLegacyRequestIdTag;
struct LegacySetSlot;
// clang-format on
#endif // @header-generator platform

struct PackedItemUseLegacyInventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemStackLegacyRequestId>     mID;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacySetSlot>> mSlots;
    ::ll::TypedStorage<8, 264, ::ItemUseInventoryTransaction> mTransaction;
#endif // @header-generator platform
    // NOLINTEND
};
