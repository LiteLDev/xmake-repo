#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemDescriptor;
class ItemInstance;
class ItemStackDescriptor;
class ReadOnlyBinaryStream;
// clang-format on

class NetworkItemInstanceDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mBlockRuntimeId;
    ::ll::TypedStorage<8, 24, std::string> mUserDataBuffer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkItemInstanceDescriptor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkItemInstanceDescriptor(::ItemInstance const&);

    MCNAPI explicit NetworkItemInstanceDescriptor(::ItemStackDescriptor const&);

    MCNAPI NetworkItemInstanceDescriptor(::ItemDescriptor const&, ushort, uint, std::string);

    MCNAPI uint getBlockRuntimeId() const;

    MCNAPI ::ItemInstance getItemInstance(::BlockPalette const&) const;

    MCNAPI std::string const& getUserDataBuffer() const;

    MCNAPI bool operator==(::NetworkItemInstanceDescriptor const&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemInstance const&);

    MCNAPI void* $ctor(::ItemStackDescriptor const&);

    MCNAPI void* $ctor(::ItemDescriptor const&, ushort, uint, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
