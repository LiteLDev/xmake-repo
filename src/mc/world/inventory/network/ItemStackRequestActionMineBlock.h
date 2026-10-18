#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemStackRequestSlotInfo;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ItemStackRequestActionMineBlock : public ::ItemStackRequestAction {
public:
    // ItemStackRequestActionMineBlock inner types define
    enum class PreValidationStatus : uchar {
        Valid   = 0,
        Invalid = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                    mPredictedDurability;
    ::ll::TypedStorage<4, 4, int>                                                    mSlot;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant>                               mNetIdVariant;
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionMineBlock::PreValidationStatus> mPreValidationStatus;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackRequestActionMineBlock();
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
    MCNAPI ItemStackRequestActionMineBlock(int, int, ::ItemStackNetIdVariant);

    MCNAPI int getPredictedDurability() const;

    MCNAPI ::ItemStackRequestSlotInfo getSrc() const;

    MCNAPI void setPreValidationStatus(::ItemStackRequestActionMineBlock::PreValidationStatus) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int, ::ItemStackNetIdVariant);
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
