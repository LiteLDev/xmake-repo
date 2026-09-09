#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/ClientMoveInputHandler.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class InputHandler;
// clang-format on

class VanillaMoveInputHandler : public ::ClientMoveInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaMoveInputHandler();

    virtual void registerInputHandlers(::InputHandler&, ::IClientInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerInputHandlers(::InputHandler&, ::IClientInstance const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
