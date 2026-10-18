#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockType;
class Item;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemTag;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ItemDescriptorCount : public ::ItemDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mStackSize;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    ItemDescriptorCount();

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemDescriptorCount();

    virtual void serialize(::BinaryStream&) const;
#else // @header-generator platform
    virtual void serialize(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDescriptorCount();

    MCNAPI explicit ItemDescriptorCount(::ReadOnlyBinaryStream&);

    MCNAPI ItemDescriptorCount(::ItemDescriptor const&, ushort);

    MCNAPI ItemDescriptorCount(::Block const&, ushort);

    MCNAPI ItemDescriptorCount(::BlockType const&, ushort);

    MCNAPI ItemDescriptorCount(::ItemTag const&, ushort);

    MCNAPI ItemDescriptorCount(::Item const&, int, ushort);

    MCNAPI ItemDescriptorCount(std::string_view const, int, ushort);

    MCNAPI short getStackSize() const;

    MCNAPI void setStackSize(short);
#else // @header-generator platform
    MCAPI explicit ItemDescriptorCount(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ReadOnlyBinaryStream&);

    MCNAPI void* $ctor(::ItemDescriptor const&, ushort);

    MCNAPI void* $ctor(::Block const&, ushort);

    MCNAPI void* $ctor(::BlockType const&, ushort);

    MCNAPI void* $ctor(::ItemTag const&, ushort);

    MCNAPI void* $ctor(::Item const&, int, ushort);

    MCNAPI void* $ctor(std::string_view const, int, ushort);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI void $serialize(::BinaryStream& stream) const;


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
