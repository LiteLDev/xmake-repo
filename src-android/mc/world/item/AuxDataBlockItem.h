#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class ItemDescriptor;
// clang-format on

class AuxDataBlockItem : public ::BlockItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mParentBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    AuxDataBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AuxDataBlockItem();

    virtual int getLevelDataForAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AuxDataBlockItem(std::string const&, int, ::Block const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Block const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getLevelDataForAuxValue(int) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
