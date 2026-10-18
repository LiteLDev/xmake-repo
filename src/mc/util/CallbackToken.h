#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/util/CallbackTokenCancelState.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CallbackTokenCancelState;
// clang-format on

class CallbackToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<CallbackTokenCancelState>> mCancelState;
#else // @header-generator platform
    ::std::weak_ptr<::CallbackTokenCancelState> mCancelState;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CallbackToken();
#else // @header-generator platform
    void cancelCallback() {
        if (auto cancelState = mCancelState.lock()) {
            cancelState->cancel();
        }
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CallbackToken(std::weak_ptr<CallbackTokenCancelState>);
#else // @header-generator platform
    void release() { mCancelState.reset(); }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    bool isEmpty() const { return mCancelState.expired(); }
#endif // @header-generator platform
};
