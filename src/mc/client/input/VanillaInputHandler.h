#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual ::std::unique_ptr<::ClientMoveInputHandler> _createClientMoveInputHandler() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ClientMoveInputHandler> $_createClientMoveInputHandler();
    // NOLINTEND
};
#else // @header-generator platform
class VanillaInputHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
