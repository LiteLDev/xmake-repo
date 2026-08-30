#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionBeaconPayment : public ::ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int> mSecondaryEffectId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionBeaconPayment();

    virtual void _write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionBeaconPayment(int, int);

    MCNAPI int getPrimaryEffectId() const;

    MCNAPI int getSecondaryEffectId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int);
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
