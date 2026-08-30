#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
// clang-format on

class WoolBlockItem : public ::BlockItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsCarpet;
    // NOLINTEND

public:
    // prevent constructor by default
    WoolBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WoolBlockItem();

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
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
