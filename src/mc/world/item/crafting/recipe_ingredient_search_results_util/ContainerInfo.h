#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
// clang-format on

namespace RecipeIngredientSearchResultsUtil {

struct ContainerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerModel*> mContainer;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>             mContainerIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>            mContainerIndex;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RecipeIngredientSearchResultsUtil
