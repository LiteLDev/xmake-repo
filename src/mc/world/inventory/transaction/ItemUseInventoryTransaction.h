#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPalette;
#if defined(LL_PLAT_A) // @header-generator platform
class IItemUseTransactionSubject;
class ILegacyItemUseTransactionSubject;
class InventoryTransaction;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class ItemUseInventoryTransaction : public ::ComplexInventoryTransaction {
public:
    // ItemUseInventoryTransaction inner types define
    enum class ActionType : int {
        Place       = 0,
        Use         = 1,
        Destroy     = 2,
        UseAsAttack = 3,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class TriggerType : uchar {
        Unknown        = 0,
        PlayerInput    = 1,
        SimulationTick = 2,
#else // @header-generator platform
    enum class ClientCooldownState : uchar {
        Off = 0,
        On  = 1,
#endif // @header-generator platform
    };

    enum class PredictedResult : uchar {
        Failure = 0,
        Success = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ClientCooldownState : uchar {
        Off = 0,
        On  = 1,
#else // @header-generator platform
    enum class TriggerType : uchar {
        Unknown        = 0,
        PlayerInput    = 1,
        SimulationTick = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemUseInventoryTransaction::ActionType>          mActionType;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::TriggerType>         mTriggerType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPos;
    ::ll::TypedStorage<4, 4, uint>                                               mTargetBlockId;
    ::ll::TypedStorage<1, 1, uchar>                                              mFace;
    ::ll::TypedStorage<4, 4, int>                                                mSlot;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>                      mItem;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                      mItem;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mFromPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mClickPos;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::PredictedResult>     mClientPredictedResult;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::ClientCooldownState> mClientCooldownState;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ItemUseInventoryTransaction& operator=(ItemUseInventoryTransaction const&);
#else // @header-generator platform
    ItemUseInventoryTransaction();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemUseInventoryTransaction();
#else // @header-generator platform
    virtual ~ItemUseInventoryTransaction() /*override*/;
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
    MCNAPI ::ItemUseInventoryTransaction& setSelectedItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI ItemUseInventoryTransaction(::ItemUseInventoryTransaction const& transaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseInventoryTransaction& setTargetBlock(::Block const&);
#else // @header-generator platform
    MCAPI ::ItemUseInventoryTransaction& operator=(::ItemUseInventoryTransaction const&);

    MCAPI ::ItemUseInventoryTransaction& setSelectedItem(::ItemStack const& item);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void resendBlocksAroundArea(::Player&, ::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI static void resendBlocksAroundArea(::Player& player, ::BlockPos const& pos, uchar facing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void resendPlayerState(::Player&);
#else // @header-generator platform
    MCAPI static void resendPlayerState(::Player& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<ItemUseInventoryTransaction::ActionType, std::string> const&
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::ItemUseInventoryTransaction::ActionType, ::std::string> const&
#endif // @header-generator platform
    actionTypeMap();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemUseInventoryTransaction const& transaction);
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
    MCAPI void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;
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
MCAPI bool operator==(::ItemUseInventoryTransaction const& lhs, ::ItemUseInventoryTransaction const& rhs);
// NOLINTEND
#endif // @header-generator platform
