#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelData;
struct LevelSummary;
// clang-format on

struct WorldSettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetLevelData;
    ::ll::UntypedStorage<8, 48> mCreateWorld;
    ::ll::UntypedStorage<8, 48> mGetLevelSummary;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsScreenControllerProxyCallbacks& operator=(WorldSettingsScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldSettingsScreenControllerProxyCallbacks();
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
class LevelData;
struct LevelSummary;
// clang-format on

struct WorldSettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::LevelData&()>>                    mGetLevelData;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<void(bool)>)>> mCreateWorld;
    ::ll::TypedStorage<8, 64, ::std::function<::LevelSummary const&()>>           mGetLevelSummary;
    // NOLINTEND
};
#else // @header-generator platform
struct WorldSettingsScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
