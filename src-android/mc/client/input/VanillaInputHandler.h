#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/MinecraftInputHandler.h"

// auto generated forward declare list
// clang-format off
class ClientMoveInputHandler;
// clang-format on

class VanillaInputHandler : public ::MinecraftInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaInputHandler();

    virtual std::unique_ptr<ClientMoveInputHandler> _createClientMoveInputHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ClientMoveInputHandler> $_createClientMoveInputHandler();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
