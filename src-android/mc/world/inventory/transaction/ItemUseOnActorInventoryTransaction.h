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
class InventoryTransaction;
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
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>                    mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mFromPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mHitPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemUseOnActorInventoryTransaction();

    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    virtual void write(::BinaryStream&) const;

    virtual void postLoadItems(::BlockPalette&, bool);

    virtual ::InventoryTransactionError handle(::Player&, bool) const;

    virtual void onTransactionError(::Player&, ::InventoryTransactionError) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemUseOnActorInventoryTransaction& setSelectedItem(::ItemStack const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&);

    MCNAPI void $write(::BinaryStream&) const;

    MCNAPI void $postLoadItems(::BlockPalette&, bool);

    MCNAPI ::InventoryTransactionError $handle(::Player&, bool) const;

    MCNAPI void $onTransactionError(::Player&, ::InventoryTransactionError) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
