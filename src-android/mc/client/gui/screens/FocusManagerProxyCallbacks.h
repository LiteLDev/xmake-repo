#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct FocusManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSetFocusControl;
    ::ll::UntypedStorage<8, 48> mGetFocusedControl;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusManagerProxyCallbacks& operator=(FocusManagerProxyCallbacks const&);
    FocusManagerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FocusManagerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
