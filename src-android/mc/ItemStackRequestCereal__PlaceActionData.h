#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__SlotInfoData.h"

namespace ItemStackRequestCereal {

struct PlaceActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                   mAmount;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mSource;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mDestination;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
