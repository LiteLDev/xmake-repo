#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
