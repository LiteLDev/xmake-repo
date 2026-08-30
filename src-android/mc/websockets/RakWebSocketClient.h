#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"

// auto generated forward declare list
// clang-format off
class TcpProxy;
// clang-format on

class RakWebSocketClient : public ::RakWebSocket {
public:
    // prevent constructor by default
    RakWebSocketClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakWebSocketClient();

    virtual void _updateState();

    virtual uint _genMaskingKey() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_updateState();

    MCNAPI uint $_genMaskingKey() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
