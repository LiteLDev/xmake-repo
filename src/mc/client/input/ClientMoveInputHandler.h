#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/input/MoveInputState.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class InputHandler;
struct MoveInputComponent;
struct MoveInputState;
// clang-format on

class ClientMoveInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientMoveInputHandler();

    virtual void registerInputHandlers(::InputHandler&, ::IClientInstance const&) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _registerButtonDownTracking(::InputHandler&, std::string const&, ::MoveInputState::Flag);

    MCNAPI static void _registerButtonStateTracking(::InputHandler&, std::string const&, ::MoveInputState::Flag);

    MCNAPI static void
    _registerButtonStateTracking(::InputHandler&, std::string const&, uchar MoveInputState::*, uchar);

    MCNAPI static void _registerButtonUpTracking(::InputHandler&, std::string const&, ::MoveInputState::Flag);

    MCNAPI static void _toggleClientSneak(::FocusImpact, ::IClientInstance&);

    MCNAPI static void _toggleClientSprint(::FocusImpact, ::IClientInstance&);

    MCNAPI static void _updateClientMoveVector(float, float, ::FocusImpact, ::IClientInstance&);

    MCNAPI static ::MoveInputComponent* getMoveInput(::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/input/MoveInputState.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class InputHandler;
struct MoveInputComponent;
// clang-format on

class ClientMoveInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientMoveInputHandler() = default;

    virtual void registerInputHandlers(::InputHandler& inputHandler, ::IClientInstance const& client) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _registerButtonDownTracking(
        ::InputHandler&        inputHandler,
        ::std::string const&   buttonName,
        ::MoveInputState::Flag setting
    );

    MCAPI static void _registerButtonStateTracking(
        ::InputHandler&        inputHandler,
        ::std::string const&   buttonName,
        ::MoveInputState::Flag setting
    );

    MCAPI static void _registerButtonStateTracking(
        ::InputHandler&      inputHandler,
        ::std::string const& buttonName,
        uchar MoveInputState::* bitfield,
        uchar                   bitmask
    );

    MCAPI static void _registerButtonUpTracking(
        ::InputHandler&        inputHandler,
        ::std::string const&   buttonName,
        ::MoveInputState::Flag setting
    );

    MCAPI static void _toggleClientSneak(::FocusImpact, ::IClientInstance& client);

    MCAPI static void _toggleClientSprint(::FocusImpact, ::IClientInstance& client);

    MCAPI static void _updateClientMoveVector(float x, float y, ::FocusImpact, ::IClientInstance& client);

    MCAPI static ::MoveInputComponent* getMoveInput(::IClientInstance& client);
    // NOLINTEND
};
#else // @header-generator platform
class ClientMoveInputHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
