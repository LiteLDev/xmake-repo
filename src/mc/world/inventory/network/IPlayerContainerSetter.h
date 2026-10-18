#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class IPlayerContainerSetter {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPlayerContainerSetter();
#else // @header-generator platform
    virtual ~IPlayerContainerSetter() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setArmor(int, ::ItemStack const&) = 0;
#else // @header-generator platform
    virtual void setArmor(int slot, ::ItemStack const& item) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOffhandSlot(::ItemStack const&) = 0;
#else // @header-generator platform
    virtual void setOffhandSlot(::ItemStack const& item) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlayerUIItem(int, ::ItemStack const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void setPlayerUIItem(int slot, ::ItemStack const& item) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
