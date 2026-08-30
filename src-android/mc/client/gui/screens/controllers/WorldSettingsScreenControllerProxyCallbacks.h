#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
