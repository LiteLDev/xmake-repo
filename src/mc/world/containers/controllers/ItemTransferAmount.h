#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemPlaceType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ItemTransferAmount {
public:
    // ItemTransferAmount inner types define
    enum class ItemTransferAmountTag : int {
        RequestAmount = 0,
        TakeType      = 1,
        PlaceType     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ItemTransferAmount::ItemTransferAmountTag const> mTag;
    ::ll::UntypedStorage<4, 4>                                                  mData;
    ::ll::TypedStorage<1, 1, bool const>                                        mFromMax;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkc458f2;
    ::ll::UntypedStorage<4, 4> mUnkfbc2b6;
    ::ll::UntypedStorage<1, 1> mUnkf0fbfb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ItemTransferAmount& operator=(ItemTransferAmount const&);
    ItemTransferAmount(ItemTransferAmount const&);
#endif // @header-generator platform
    ItemTransferAmount();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemTransferAmount fromMaxStackSize() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
