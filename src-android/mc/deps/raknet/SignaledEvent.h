#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SimpleMutex.h"

namespace RakNet {

class SignaledEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex> isSignaledMutex;
    ::ll::TypedStorage<1, 1, bool>                   isSignaled;
    ::ll::UntypedStorage<4, 48>                      eventList;
    ::ll::UntypedStorage<4, 40>                      hMutex;
    ::ll::TypedStorage<8, 8, long>                   mutexAttr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CloseEvent();

    MCNAPI void InitEvent();

    MCNAPI void SetEvent();

    MCNAPI SignaledEvent();

    MCNAPI void WaitOnEvent(int);

    MCNAPI ~SignaledEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
