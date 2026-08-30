#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ToggleComponent;
class UIControl;
// clang-format on

struct VisualTreeProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetVisibleControlsWith;
    ::ll::UntypedStorage<8, 48> mVisibleControlExistsWithName;
    ::ll::UntypedStorage<8, 48> mGetFirstVisibleControl;
    // NOLINTEND

public:
    // prevent constructor by default
    VisualTreeProxyCallbacks& operator=(VisualTreeProxyCallbacks const&);
    VisualTreeProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VisualTreeProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
