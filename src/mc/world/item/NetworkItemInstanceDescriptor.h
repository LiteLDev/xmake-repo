#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemDescriptor;
#else // @header-generator platform
#endif // @header-generator platform
class ItemInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackDescriptor;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
// clang-format on

class NetworkItemInstanceDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>         mBlockRuntimeId;
    ::ll::TypedStorage<8, 24, std::string> mUserDataBuffer;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>           mBlockRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string> mUserDataBuffer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NetworkItemInstanceDescriptor();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkItemInstanceDescriptor();
#else // @header-generator platform
    virtual ~NetworkItemInstanceDescriptor() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkItemInstanceDescriptor(::ItemInstance const&);
#else // @header-generator platform
    MCAPI explicit NetworkItemInstanceDescriptor(::ItemInstance const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkItemInstanceDescriptor(::ItemStackDescriptor const&);
#else // @header-generator platform
    MCAPI ::ItemInstance getItemInstance(::BlockPalette const& blockPalette) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetworkItemInstanceDescriptor(::ItemDescriptor const&, ushort, uint, std::string);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getBlockRuntimeId() const;

    MCNAPI ::ItemInstance getItemInstance(::BlockPalette const&) const;

    MCNAPI std::string const& getUserDataBuffer() const;

    MCNAPI bool operator==(::NetworkItemInstanceDescriptor const&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void write(::BinaryStream& stream) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemInstance const&);

    MCNAPI void* $ctor(::ItemStackDescriptor const&);

    MCNAPI void* $ctor(::ItemDescriptor const&, ushort, uint, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemInstance const& item);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
