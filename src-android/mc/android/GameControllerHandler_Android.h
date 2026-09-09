#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android_native_app_glue.h"

// auto generated forward declare list
// clang-format off
class GameActivityKeyEvent;
class GameActivityMotionEvent;
struct GameActivityKeyEvent;
struct GameActivityMotionEvent;
// clang-format on

class GameControllerHandler_Android {
public:
    // GameControllerHandler_Android inner types declare
    // clang-format off
    struct ControllerDetails;
    // clang-format on

    // GameControllerHandler_Android inner types define
    struct ControllerDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsCrete;
        ::ll::TypedStorage<1, 1, bool> mSupportsAnalogTriggers;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<int, int>>                                              mDeviceIdMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, GameControllerHandler_Android::ControllerDetails>> mDeviceDetails;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevLeftStickX;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevLeftStickY;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevRightStickX;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevRightStickY;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevLeftTrigger;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevRightTrigger;
    ::ll::TypedStorage<8, 24, std::vector<float>> _leftTrigger;
    ::ll::TypedStorage<8, 24, std::vector<float>> _rightTrigger;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevDpadX;
    ::ll::TypedStorage<8, 24, std::vector<float>> _prevDpadY;
    ::ll::TypedStorage<8, 24, std::vector<float>> _dpadX;
    ::ll::TypedStorage<8, 24, std::vector<float>> _dpadY;
    ::ll::TypedStorage<1, 1, bool>                mIsAButtonDown;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameControllerHandler_Android();

    MCNAPI int _registerDevice(int);

    MCNAPI void clearAButtonState();

    MCNAPI int convertAndroidCreteKeyCodeToGamePadButtonId(int);

    MCNAPI void feedDpad(int);

    MCNAPI void feedLeftTrigger(int);

    MCNAPI void feedRightTrigger(int);

    MCNAPI void handleDeviceConnected(int);

    MCNAPI void handleDeviceDisconnected(int);

    MCNAPI int processInput(::android_app*, std::variant<GameActivityKeyEvent*, GameActivityMotionEvent*>&, bool);

    MCNAPI void setDeviceDetails(int, bool, bool);

    MCNAPI void setFoundDualsenseController(bool);

    MCNAPI void setFoundPlaystationController(bool);

    MCNAPI void setFoundXboxController(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
