#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/ItemStackRequestSlotInfo.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionTransferBase : public ::ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mIsDstSerialized;
    ::ll::TypedStorage<1, 1, bool>                        mIsAmountSerialized;
    ::ll::TypedStorage<1, 1, uchar>                       mAmount;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestSlotInfo> mSrc;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestSlotInfo> mDst;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionTransferBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionTransferBase();

    virtual void _write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uchar getAmount() const;

    MCNAPI ::ItemStackRequestSlotInfo const& getDst() const;

    MCNAPI ::ItemStackRequestSlotInfo const& getSrc() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_write(::BinaryStream&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
