#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemPlaceType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"

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
    ::ll::TypedStorage<4, 4, ::ItemTransferAmount::ItemTransferAmountTag const> mTag;
    ::ll::UntypedStorage<4, 4>                                                  mData;
    ::ll::TypedStorage<1, 1, bool const>                                        mFromMax;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemTransferAmount();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemTransferAmount fromMaxStackSize() const;
    // NOLINTEND
};
