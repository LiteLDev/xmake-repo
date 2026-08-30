#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"

struct TouchControlConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>    area;
    ::ll::TypedStorage<4, 4, uint> turnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint> tapButtonId;
    ::ll::TypedStorage<4, 4, uint> holdButtonId;
    ::ll::TypedStorage<4, 4, uint> sprintButtonId;
    ::ll::UntypedStorage<4, 16>    sensitivity;
    ::ll::UntypedStorage<8, 48>    condition;
    ::ll::UntypedStorage<8, 48>    inactiveAreas;
    ::ll::UntypedStorage<8, 48>    isLeftHanded;
    ::ll::UntypedStorage<8, 48>    moveStickVisible;
    ::ll::UntypedStorage<8, 48>    altStickVisible;
    ::ll::UntypedStorage<8, 48>    altStickEnabled;
    ::ll::UntypedStorage<8, 48>    thumbstickOpacity;
    ::ll::UntypedStorage<8, 48>    staticJoystick;
    ::ll::UntypedStorage<8, 48>    staticAltJoystick;
    ::ll::UntypedStorage<8, 48>    defaultMoveStickArea;
    ::ll::UntypedStorage<8, 48>    defaultAltStickArea;
    ::ll::UntypedStorage<8, 48>    hotbarArea;
    ::ll::UntypedStorage<8, 48>    defaultMoveStickVisible;
    ::ll::UntypedStorage<8, 48>    defaultAltStickVisible;
    ::ll::UntypedStorage<8, 48>    showActionButton;
    ::ll::UntypedStorage<8, 48>    sprintOnMovement;
    ::ll::UntypedStorage<8, 48>    isInputSprinting;
    ::ll::UntypedStorage<8, 48>    clientActivePointer;
    ::ll::UntypedStorage<8, 48>    issInControlEditMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TouchControlConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
