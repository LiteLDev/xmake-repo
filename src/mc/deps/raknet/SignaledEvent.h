#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/SimpleMutex.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

class SignaledEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex> isSignaledMutex;
    ::ll::TypedStorage<1, 1, bool>                   isSignaled;
    ::ll::UntypedStorage<4, 48>                      eventList;
    ::ll::UntypedStorage<4, 40>                      hMutex;
    ::ll::TypedStorage<8, 8, long>                   mutexAttr;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk673ff6;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    SignaledEvent& operator=(SignaledEvent const&);
    SignaledEvent(SignaledEvent const&);
    SignaledEvent();
#endif // @header-generator platform
};

} // namespace RakNet
