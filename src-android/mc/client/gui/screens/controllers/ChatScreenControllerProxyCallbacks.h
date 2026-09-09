#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

struct ChatScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSetText;
    ::ll::UntypedStorage<8, 48> mGetIntellisenseMessages;
    ::ll::UntypedStorage<8, 48> mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatScreenControllerProxyCallbacks& operator=(ChatScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChatScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
