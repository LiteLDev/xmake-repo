#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
// clang-format on

class ISparseContainerSetListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ISparseContainerSetListener();
#else // @header-generator platform
    virtual ~ISparseContainerSetListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preSetItem(::Container*, int, bool, ::ItemStack*) = 0;
#else // @header-generator platform
    virtual void preSetItem(::Container* container, int slot, bool isEmptyItem, ::ItemStack* item) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool postSetItem(::Container*, ::ItemStack&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool postSetItem(::Container* container, ::ItemStack& item) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
