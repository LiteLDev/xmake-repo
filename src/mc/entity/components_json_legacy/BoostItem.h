#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct BoostItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItemDescriptor;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mReplacementItemDescriptor;
    ::ll::TypedStorage<4, 4, int>               mDamageAmount;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BoostItem& operator=(BoostItem const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setReplacementItemDescriptor(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI void setReplacementItemDescriptor(::ItemDescriptor const& replacementItemDescriptor);
#endif // @header-generator platform
    // NOLINTEND
};
