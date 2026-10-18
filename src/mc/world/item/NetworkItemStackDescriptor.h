#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class BlockPalette;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackDescriptor;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
// clang-format on

class NetworkItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mIncludeNetIds;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    ::ll::TypedStorage<4, 4, uint>                     mBlockRuntimeId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>             mUserDataBuffer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>           mUserDataBuffer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NetworkItemStackDescriptor& operator=(NetworkItemStackDescriptor const&);
    NetworkItemStackDescriptor();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkItemStackDescriptor();
#else // @header-generator platform
    virtual ~NetworkItemStackDescriptor() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkItemStackDescriptor(::ItemStack const&);
#else // @header-generator platform
    MCAPI NetworkItemStackDescriptor(::NetworkItemStackDescriptor const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkItemStackDescriptor(::ItemStackDescriptor const&);
#else // @header-generator platform
    MCAPI explicit NetworkItemStackDescriptor(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::NetworkItemStackDescriptor const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::NetworkItemStackDescriptor const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    MCNAPI void setIncludeNetIds(bool) const;

    MCNAPI ::TypedServerNetId<ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const;

    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemStack const&);
#else // @header-generator platform
    MCAPI void* $ctor(::NetworkItemStackDescriptor const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemStackDescriptor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemStack const& item);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
