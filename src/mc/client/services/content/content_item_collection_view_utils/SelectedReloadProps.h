#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace ContentItemCollectionViewUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct SelectedReloadProps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mRepopulateReports;
    ::ll::TypedStorage<1, 1, bool>                        mSelectedContentUpdated;
    ::ll::TypedStorage<1, 1, bool>                        mGetInitialSelectedPacks;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mInitialSelectedPacks;
    // NOLINTEND
};
#else // @header-generator platform
struct SelectedReloadProps {};
#endif // @header-generator platform

} // namespace ContentItemCollectionViewUtils
