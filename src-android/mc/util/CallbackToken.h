#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CallbackTokenCancelState;
// clang-format on

class CallbackToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<CallbackTokenCancelState>> mCancelState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CallbackToken();

    MCNAPI explicit CallbackToken(std::weak_ptr<CallbackTokenCancelState>);

    MCNAPI void cancelCallback();

    MCNAPI ::CallbackToken& operator=(::CallbackToken&&);

    MCNAPI void release();

    MCNAPI ~CallbackToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::weak_ptr<CallbackTokenCancelState>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
