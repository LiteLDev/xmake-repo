#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
#if defined(LL_PLAT_A) // @header-generator platform
class InventoryTransaction;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class ItemUseOnActorInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseOnActorInventoryTransaction inner types define
    enum class ActionType : int {
        Interact     = 0,
        Attack       = 1,
        ItemInteract = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                                 mRuntimeId;
    ::ll::TypedStorage<4, 4, ::ItemUseOnActorInventoryTransaction::ActionType> mActionType;
    ::ll::TypedStorage<4, 4, int>                                              mSlot;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>                    mItem;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                    mItem;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mFromPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mHitPos;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    ItemUseOnActorInventoryTransaction(ItemUseOnActorInventoryTransaction const&);
    ItemUseOnActorInventoryTransaction();

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemUseOnActorInventoryTransaction();
#else // @header-generator platform
    virtual ~ItemUseOnActorInventoryTransaction() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::BinaryStream&) const;
#else // @header-generator platform
    virtual void write(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postLoadItems(::BlockPalette&, bool);
#else // @header-generator platform
    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InventoryTransactionError handle(::Player&, bool) const;
#else // @header-generator platform
    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTransactionError(::Player&, ::InventoryTransactionError) const;
#else // @header-generator platform
    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseOnActorInventoryTransaction& setSelectedItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI ::ItemUseOnActorInventoryTransaction& operator=(::ItemUseOnActorInventoryTransaction const&);

    MCAPI ::ItemUseOnActorInventoryTransaction& setSelectedItem(::ItemStack const& item);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI void $write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postLoadItems(::BlockPalette&, bool);
#else // @header-generator platform
    MCFOLD void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InventoryTransactionError $handle(::Player&, bool) const;
#else // @header-generator platform
    MCFOLD void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTransactionError(::Player&, ::InventoryTransactionError) const;
#else // @header-generator platform
    MCAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// free functions
// NOLINTBEGIN
MCAPI bool operator==(::ItemUseOnActorInventoryTransaction const& lhs, ::ItemUseOnActorInventoryTransaction const& rhs);
// NOLINTEND
#endif // @header-generator platform
