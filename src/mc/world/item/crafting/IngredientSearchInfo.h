#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SlotData;
// clang-format on
#endif // @header-generator platform

struct IngredientSearchInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SlotData>> mSlots;
    ::ll::TypedStorage<4, 4, int>                    mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    IngredientSearchInfo(IngredientSearchInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~IngredientSearchInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotData>> mSlots;
    ::ll::TypedStorage<4, 4, int>                        mCount;
#endif // @header-generator platform
    // NOLINTEND
};
