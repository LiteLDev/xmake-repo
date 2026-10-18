#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct StorageManagementScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mScrollToFocus;
    ::ll::TypedStorage<1, 1, bool> mNewItemSelected;
    ::ll::TypedStorage<1, 1, bool> mHasLoaded;
    ::ll::TypedStorage<1, 1, bool> mMultiSelectEnabled;
    ::ll::TypedStorage<1, 1, bool> mModalVisible;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct StorageManagementScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mScrollToFocus;
    ::ll::TypedStorage<1, 1, bool> mNewItemSelected;
    ::ll::TypedStorage<1, 1, bool> mHasLoaded;
    ::ll::TypedStorage<1, 1, bool> mMultiSelectEnabled;
    ::ll::TypedStorage<1, 1, bool> mModalVisible;
    // NOLINTEND
};
#else // @header-generator platform
struct StorageManagementScreenData {};
#endif // @header-generator platform
#endif // @header-generator platform
