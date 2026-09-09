#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class CompoundTag;
class Item;
class ItemDescriptor;
// clang-format on

class ItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mUserData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackDescriptor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackDescriptor();

    MCNAPI ItemStackDescriptor(::ItemDescriptorCount const&, ::CompoundTag const*);

    MCNAPI ItemStackDescriptor(::Item const&, int, ushort, ::CompoundTag const*);

    MCNAPI ::ItemStackDescriptor& operator=(::ItemStackDescriptor&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ItemDescriptorCount const&, ::CompoundTag const*);

    MCNAPI void* $ctor(::Item const&, int, ushort, ::CompoundTag const*);
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
