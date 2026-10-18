#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

struct WorldTemplatesScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSelectWorldTab;
    ::ll::UntypedStorage<8, 48> mSelectRealmsTab;
    ::ll::UntypedStorage<8, 48> mForceUIUpdate;
    ::ll::UntypedStorage<8, 48> mCreateWorldTemplate;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatesScreenControllerProxyCallbacks& operator=(WorldTemplatesScreenControllerProxyCallbacks const&);
    WorldTemplatesScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplatesScreenControllerProxyCallbacks();
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
struct PackIdVersion;
// clang-format on

struct WorldTemplatesScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mSelectWorldTab;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mSelectRealmsTab;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mForceUIUpdate;
    ::ll::TypedStorage<8, 64, ::std::function<void(::PackIdVersion const&, ::std::function<void(bool)>)>>
        mCreateWorldTemplate;
    // NOLINTEND
};
#else // @header-generator platform
struct WorldTemplatesScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
