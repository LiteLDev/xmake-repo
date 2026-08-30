#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
// clang-format on

class SaplingBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    SaplingBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SaplingBlockItem();

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SaplingBlockItem(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
