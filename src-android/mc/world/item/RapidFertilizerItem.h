#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class RapidFertilizerItem : public ::FertilizerItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RapidFertilizerItem();

    virtual void fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
