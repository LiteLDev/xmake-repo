#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InventoryMismatchData.h"
#include "mc/network/packet/LegacySetSlot.h"
#include "mc/network/packet/NormalTransactionData.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/transaction/ItemReleaseInventoryTransaction.h"
#include "mc/world/inventory/transaction/ItemUseInventoryTransaction.h"
#include "mc/world/inventory/transaction/ItemUseOnActorInventoryTransaction.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class ComplexInventoryTransaction;
// clang-format on

struct InventoryTransactionPacketPayload {
public:
    // InventoryTransactionPacketPayload inner types define
    using ComplexTransactionVariant = std::variant<
        NormalTransactionData,
        InventoryMismatchData,
        ItemUseInventoryTransaction,
        ItemUseOnActorInventoryTransaction,
        ItemReleaseInventoryTransaction>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 16> mLegacyRequestId;
    ::ll::TypedStorage<8, 24, std::vector<LegacySetSlot>> mLegacySetItemSlots;
    ::ll::TypedStorage<8, 232, std::variant<NormalTransactionData, InventoryMismatchData, ItemUseInventoryTransaction, ItemUseOnActorInventoryTransaction, ItemReleaseInventoryTransaction>> mVariantTransaction;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ComplexInventoryTransaction>> mTransaction;
    ::ll::TypedStorage<1, 1, bool> mIsClientSide;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryTransactionPacketPayload& operator=(InventoryTransactionPacketPayload const&);
    InventoryTransactionPacketPayload(InventoryTransactionPacketPayload const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InventoryTransactionPacketPayload(std::unique_ptr<ComplexInventoryTransaction>, bool);

    MCNAPI ::InventoryTransactionPacketPayload& operator=(::InventoryTransactionPacketPayload&&);

    MCNAPI void postLoadItems(::BlockPalette&, bool) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ComplexInventoryTransaction>, bool);
    // NOLINTEND
};
