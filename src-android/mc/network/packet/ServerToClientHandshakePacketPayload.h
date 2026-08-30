#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/WebToken.h"

struct ServerToClientHandshakePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::WebToken> mToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerToClientHandshakePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
