#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStack;
struct FullContainerName;
// clang-format on
#endif // @header-generator platform

struct ExpectedSlotConsume {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName> mOpenContainerNetId;
    ::ll::TypedStorage<1, 1, uchar>                mSlot;
    ::ll::TypedStorage<8, 152, ::ItemStack>        mItem;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12>  mUnkcc258d;
    ::ll::UntypedStorage<1, 1>   mUnkfcd450;
    ::ll::UntypedStorage<8, 152> mUnk846e89;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExpectedSlotConsume& operator=(ExpectedSlotConsume const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExpectedSlotConsume(ExpectedSlotConsume const&);
#endif // @header-generator platform
    ExpectedSlotConsume();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExpectedSlotConsume(
        ::FullContainerName const& openContainerNetId,
        uchar                      slot,
        ::ItemStack const&         item,
        uchar                      amountOverride
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::FullContainerName const& openContainerNetId, uchar slot, ::ItemStack const& item, uchar amountOverride);
    // NOLINTEND
#endif // @header-generator platform
};
