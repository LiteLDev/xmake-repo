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
class Block;
class BlockPalette;
class IItemUseTransactionSubject;
class ILegacyItemUseTransactionSubject;
class InventoryTransaction;
class ItemStack;
class Level;
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

    enum class TriggerType : uchar {
        Unknown        = 0,
        PlayerInput    = 1,
        SimulationTick = 2,
    };

    enum class PredictedResult : uchar {
        Failure = 0,
        Success = 1,
    };

    enum class ClientCooldownState : uchar {
        Off = 0,
        On  = 1,
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
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>                      mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mFromPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mClickPos;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::PredictedResult>     mClientPredictedResult;
    ::ll::TypedStorage<1, 1, ::ItemUseInventoryTransaction::ClientCooldownState> mClientCooldownState;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUseInventoryTransaction& operator=(ItemUseInventoryTransaction const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemUseInventoryTransaction();

    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    virtual void write(::BinaryStream&) const;

    virtual void postLoadItems(::BlockPalette&, bool);

    virtual ::InventoryTransactionError handle(::Player&, bool) const;

    virtual void onTransactionError(::Player&, ::InventoryTransactionError) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemUseInventoryTransaction& setSelectedItem(::ItemStack const&);

    MCNAPI ::ItemUseInventoryTransaction& setTargetBlock(::Block const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void resendBlocksAroundArea(::Player&, ::BlockPos const&, uchar);

    MCNAPI static void resendPlayerState(::Player&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<ItemUseInventoryTransaction::ActionType, std::string> const&
    actionTypeMap();
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
