#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContainerModel;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace FurnaceIngredientSearchResultsUtil {

struct ContainerInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ContainerModel*> mContainer;
    ::ll::TypedStorage<4, 4, int>               mContainerIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkadaaf4;
    ::ll::UntypedStorage<4, 4> mUnkec0b58;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ContainerInfo& operator=(ContainerInfo const&);
    ContainerInfo(ContainerInfo const&);
    ContainerInfo();
#endif // @header-generator platform
};

} // namespace FurnaceIngredientSearchResultsUtil
