#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RectangleArea;
// clang-format on

struct TouchControlConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                area;
    ::ll::TypedStorage<4, 4, uint>                                               turnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint>                                               tapButtonId;
    ::ll::TypedStorage<4, 4, uint>                                               holdButtonId;
    ::ll::TypedStorage<4, 4, uint>                                               sprintButtonId;
    ::ll::TypedStorage<4, 4, float>                                              sensitivity;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           condition;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::RectangleArea>()>> inactiveAreas;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           isLeftHanded;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           moveStickVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           altStickVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           altStickEnabled;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          thumbstickOpacity;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           staticJoystick;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           staticAltJoystick;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                defaultMoveStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                defaultAltStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                hotbarArea;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           defaultMoveStickVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           defaultAltStickVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           showActionButton;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           sprintOnMovement;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           isInputSprinting;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          clientActivePointer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           issInControlEditMode;
    // NOLINTEND
};
#else // @header-generator platform
struct TouchControlConfig {};
#endif // @header-generator platform
#endif // @header-generator platform
