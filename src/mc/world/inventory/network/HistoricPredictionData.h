#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct HistoricPredictionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>           slot;
    ::ll::TypedStorage<8, 152, ::ItemStack> item;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    HistoricPredictionData& operator=(HistoricPredictionData const&);
    HistoricPredictionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HistoricPredictionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
