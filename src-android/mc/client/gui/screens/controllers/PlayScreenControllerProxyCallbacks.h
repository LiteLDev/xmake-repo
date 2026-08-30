#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
struct SelectNavigationTabCommand;
// clang-format on

struct PlayScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSelectTab;
    ::ll::UntypedStorage<8, 48> mGetActiveTabIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenControllerProxyCallbacks& operator=(PlayScreenControllerProxyCallbacks const&);
    PlayScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
