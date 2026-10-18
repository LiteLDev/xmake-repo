#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ToggleChangeEventData;
// clang-format on

struct StorageManagementScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSelectItemByIndex;
    ::ll::UntypedStorage<8, 48> mSelectItemByName;
    ::ll::UntypedStorage<8, 48> mDeleteSelectedResources;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementScreenControllerProxyCallbacks& operator=(StorageManagementScreenControllerProxyCallbacks const&);
    StorageManagementScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StorageManagementScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ToggleChangeEventData;
// clang-format on

struct StorageManagementScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::ToggleChangeEventData const&)>>
        mSelectItemByIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::ToggleChangeEventData const&)>>
                                                       mSelectItemByName;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mDeleteSelectedResources;
    // NOLINTEND
};
#else // @header-generator platform
struct StorageManagementScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
