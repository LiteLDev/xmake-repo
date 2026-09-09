#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class Item;
// clang-format on

class ItemInstance : public ::ItemStackBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemInstance();

    virtual void reinit(std::string_view const, int, int);

    virtual void reinit(::Block const&, int);

    virtual void reinit(::Item const&, int, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemInstance clone() const;

    MCNAPI ::ItemInstance& operator=(::ItemInstance const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemInstance fromTag(::CompoundTag const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ItemInstance const& EMPTY_ITEM();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reinit(std::string_view const, int, int);

    MCNAPI void $reinit(::Block const&, int);

    MCNAPI void $reinit(::Item const&, int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
