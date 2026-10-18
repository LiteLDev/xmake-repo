#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedClientNetId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/transaction/InventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
struct DepenetrationComponent;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::InventoryTransaction>             mTransaction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::InventoryTransaction>             mTransaction;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ComplexInventoryTransaction();
#else // @header-generator platform
    virtual ~ComplexInventoryTransaction() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::BinaryStream&) const;
#else // @header-generator platform
    virtual void write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postLoadItems(::BlockPalette&, bool);
#else // @header-generator platform
    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InventoryTransactionError handle(::Player&, bool) const;
#else // @header-generator platform
    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTransactionError(::Player&, ::InventoryTransactionError) const;
#else // @header-generator platform
    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _setDepenetrationOverride(::EntityContext&);
#else // @header-generator platform
    MCAPI static void _setDepenetrationOverride(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ComplexInventoryTransaction> fromType(::ComplexInventoryTransaction::Type);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::ComplexInventoryTransaction> fromType(::ComplexInventoryTransaction::Type type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type, ::InventoryTransaction const&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type type, ::InventoryTransaction const& transaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type);
#else // @header-generator platform
    MCAPI static ::std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<ComplexInventoryTransaction::Type, std::string> const&
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::ComplexInventoryTransaction::Type, ::std::string> const&
#endif // @header-generator platform
    transactionTypeMap();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCFOLD ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $write(::BinaryStream&) const;
#else // @header-generator platform
    MCFOLD void $write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postLoadItems(::BlockPalette&, bool);
#else // @header-generator platform
    MCFOLD void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InventoryTransactionError $handle(::Player&, bool) const;
#else // @header-generator platform
    MCAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTransactionError(::Player&, ::InventoryTransactionError) const;
#else // @header-generator platform
    MCFOLD void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
