#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStack;
class ItemStackDescriptor;
class ReadOnlyBinaryStream;
// clang-format on

class NetworkItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mIncludeNetIds;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    ::ll::TypedStorage<4, 4, uint>                     mBlockRuntimeId;
    ::ll::TypedStorage<8, 24, std::string>             mUserDataBuffer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkItemStackDescriptor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkItemStackDescriptor(::ItemStack const&);

    MCNAPI explicit NetworkItemStackDescriptor(::ItemStackDescriptor const&);

    MCNAPI bool operator==(::NetworkItemStackDescriptor const&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    MCNAPI void setIncludeNetIds(bool) const;

    MCNAPI ::TypedServerNetId<ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const;

    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStack const&);

    MCNAPI void* $ctor(::ItemStackDescriptor const&);
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
