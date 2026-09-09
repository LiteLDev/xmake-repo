#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockEventDispatcher;
// clang-format on

class BlockEventDispatcherToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHandle;
    ::ll::UntypedStorage<8, 24>   mDispatcher;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockEventDispatcherToken();

    MCNAPI BlockEventDispatcherToken(::BlockEventDispatcherToken&&);

    MCNAPI ::BlockEventDispatcher* getDispatcher() const;

    MCNAPI int getHandle() const;

    MCNAPI bool isValid() const;

    MCNAPI ::BlockEventDispatcherToken& operator=(::BlockEventDispatcherToken&&);

    MCNAPI void unregister();

    MCNAPI ~BlockEventDispatcherToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockEventDispatcherToken&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
