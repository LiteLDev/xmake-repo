#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/AddClientData.h"
#include "mc/deps/input/ChangeUserData.h"
#include "mc/deps/input/ConnectionStateData.h"
#include "mc/deps/input/TouchPadTouchEventData.h"
#include "mc/deps/input/interface/GameControllerButtonEvent.h"
#include "mc/deps/input/interface/GameControllerStickEvent.h"
#include "mc/deps/input/interface/GameControllerTriggerEvent.h"

union GameControllerEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 44>                         buttonEvent;
    ::ll::UntypedStorage<4, 44>                         stickEvent;
    ::ll::UntypedStorage<4, 44>                         triggerEvent;
    ::ll::UntypedStorage<1, 44>                         connectionEvent;
    ::ll::UntypedStorage<1, 44>                         joinEvent;
    ::ll::UntypedStorage<1, 44>                         changeUserEvent;
    ::ll::TypedStorage<4, 44, ::TouchPadTouchEventData> touchPadEvent;
    // NOLINTEND
};