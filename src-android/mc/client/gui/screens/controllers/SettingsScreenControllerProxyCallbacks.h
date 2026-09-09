#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GeneralSettingsScreenControllerProxy;
class WorldSettingsScreenControllerProxy;
// clang-format on

struct SettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSelectTab;
    ::ll::UntypedStorage<8, 48> mGetAdditionalScreenInfo;
    ::ll::UntypedStorage<8, 48> mGetGeneralSettingsScreenController;
    ::ll::UntypedStorage<8, 48> mGetCurrentTabTitle;
    ::ll::UntypedStorage<8, 48> mGetWorldSettingsScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenControllerProxyCallbacks& operator=(SettingsScreenControllerProxyCallbacks const&);
    SettingsScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SettingsScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
