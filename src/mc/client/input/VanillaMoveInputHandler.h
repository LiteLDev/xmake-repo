#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual void registerInputHandlers(::InputHandler& inputHandler, ::IClientInstance const& client) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerInputHandlers(::InputHandler& inputHandler, ::IClientInstance const& client);
    // NOLINTEND
};
#else // @header-generator platform
class VanillaMoveInputHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
