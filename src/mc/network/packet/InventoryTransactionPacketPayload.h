#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InventoryMismatchData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/LegacySetSlot.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/packet/NormalTransactionData.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#endif // @header-generator platform
#include "mc/world/inventory/transaction/ItemReleaseInventoryTransaction.h"
#include "mc/world/inventory/transaction/ItemUseInventoryTransaction.h"
#include "mc/world/inventory/transaction/ItemUseOnActorInventoryTransaction.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPalette;
class ComplexInventoryTransaction;
#else // @header-generator platform
struct ItemStackLegacyRequestIdTag;
struct LegacySetSlot;
#endif // @header-generator platform
// clang-format on

struct InventoryTransactionPacketPayload {
public:
    // InventoryTransactionPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ComplexTransactionVariant = std::variant<
        NormalTransactionData,
        InventoryMismatchData,
        ItemUseInventoryTransaction,
        ItemUseOnActorInventoryTransaction,
        ItemReleaseInventoryTransaction>;
#else // @header-generator platform
    using ComplexTransactionVariant = ::std::variant<
        ::NormalTransactionData,
        ::InventoryMismatchData,
        ::ItemUseInventoryTransaction,
        ::ItemUseOnActorInventoryTransaction,
        ::ItemReleaseInventoryTransaction>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 16> mLegacyRequestId;
    ::ll::TypedStorage<8, 24, std::vector<LegacySetSlot>> mLegacySetItemSlots;
    ::ll::TypedStorage<8, 232, std::variant<NormalTransactionData, InventoryMismatchData, ItemUseInventoryTransaction, ItemUseOnActorInventoryTransaction, ItemReleaseInventoryTransaction>> mVariantTransaction;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ComplexInventoryTransaction>> mTransaction;
    ::ll::TypedStorage<1, 1, bool> mIsClientSide;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemStackLegacyRequestId>     mLegacyRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacySetSlot>> mLegacySetItemSlots;
    ::ll::TypedStorage<
        8,
        272,
        ::std::variant<
            ::NormalTransactionData,
            ::InventoryMismatchData,
            ::ItemUseInventoryTransaction,
            ::ItemUseOnActorInventoryTransaction,
            ::ItemReleaseInventoryTransaction>>
                                                                               mVariantTransaction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ComplexInventoryTransaction>> mTransaction;
    ::ll::TypedStorage<1, 1, bool>                                             mIsClientSide;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    InventoryTransactionPacketPayload& operator=(InventoryTransactionPacketPayload const&);
    InventoryTransactionPacketPayload(InventoryTransactionPacketPayload const&);
#else // @header-generator platform
    InventoryTransactionPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InventoryTransactionPacketPayload(std::unique_ptr<ComplexInventoryTransaction>, bool);
#else // @header-generator platform
    MCAPI
    InventoryTransactionPacketPayload(::std::unique_ptr<::ComplexInventoryTransaction> transaction, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InventoryTransactionPacketPayload& operator=(::InventoryTransactionPacketPayload&&);

    MCNAPI void postLoadItems(::BlockPalette&, bool) const;
#else // @header-generator platform
    MCAPI ~InventoryTransactionPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<ComplexInventoryTransaction>, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::std::unique_ptr<::ComplexInventoryTransaction> transaction, bool isClientSide);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
