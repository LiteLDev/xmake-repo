#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Block;
class BlockType;
class Item;
class ReadOnlyBinaryStream;
struct ItemTag;
// clang-format on

class ItemDescriptorCount : public ::ItemDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mStackSize;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemDescriptorCount();

    virtual void serialize(::BinaryStream&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $serialize(::BinaryStream&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
