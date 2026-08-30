#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/transaction/InventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class EntityContext;
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
struct DepenetrationComponent;
// clang-format on

class ComplexInventoryTransaction {
public:
    // ComplexInventoryTransaction inner types define
    enum class Type : uint {
        NormalTransaction          = 0,
        InventoryMismatch          = 1,
        ItemUseTransaction         = 2,
        ItemUseOnEntityTransaction = 3,
        ItemReleaseTransaction     = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ComplexInventoryTransaction::Type> mType;
    ::ll::TypedStorage<8, 64, ::InventoryTransaction>             mTransaction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComplexInventoryTransaction();

    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    virtual void write(::BinaryStream&) const;

    virtual void postLoadItems(::BlockPalette&, bool);

    virtual ::InventoryTransactionError handle(::Player&, bool) const;

    virtual void onTransactionError(::Player&, ::InventoryTransactionError) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setDepenetrationOverride(::EntityContext&);

    MCNAPI static std::unique_ptr<ComplexInventoryTransaction> fromType(::ComplexInventoryTransaction::Type);

    MCNAPI static std::unique_ptr<ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type, ::InventoryTransaction const&);

    MCNAPI static std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<ComplexInventoryTransaction::Type, std::string> const&
    transactionTypeMap();
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
