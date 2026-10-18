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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RapidFertilizerItem();

    virtual void fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupCommon(::ItemStackBase&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $fixupCommon(::ItemStackBase& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
