#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AuxDataBlockItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class ChemistryAuxDataBlockItem : public ::AuxDataBlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fixupCommon(::ItemStackBase&) const;
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
