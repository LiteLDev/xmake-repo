#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ItemStackRequestActionTransferBase();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackRequestActionTransferBase();
#else // @header-generator platform
    virtual void _write(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_write(::BinaryStream&) const;
#else // @header-generator platform
    MCNAPI void $_write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
