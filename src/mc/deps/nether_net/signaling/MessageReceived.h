#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet::SignalingEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mFrom;
    ::ll::TypedStorage<8, 24, std::string>            mMessage;
    ::ll::TypedStorage<8, 24, std::string>            mMessageId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk940828;
    ::ll::UntypedStorage<8, 32> mUnka95625;
    ::ll::UntypedStorage<8, 32> mUnk698719;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageReceived& operator=(MessageReceived const&);
    MessageReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageReceived(::NetherNet::SignalingEvents::MessageReceived const&);

    MCNAPI ~MessageReceived();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::SignalingEvents::MessageReceived const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
