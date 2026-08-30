#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

namespace ContentItemCollectionViewUtils {

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

} // namespace ContentItemCollectionViewUtils
