#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/AddClientData.h"
#include "mc/deps/input/ButtonEventData.h"
#include "mc/deps/input/ChangeUserData.h"
#include "mc/deps/input/ClearPointerLocationWithIdEventData.h"
#include "mc/deps/input/ConnectionStateData.h"
#include "mc/deps/input/ControlOptionEventData.h"
#include "mc/deps/input/DirectionEventData.h"
#include "mc/deps/input/NumberOfEnabledControlOptionsEventData.h"
#include "mc/deps/input/OverlappingControlsEventData.h"
#include "mc/deps/input/PointerLocationEventData.h"
#include "mc/deps/input/PointerLocationWithIdEventData.h"
#include "mc/deps/input/RawInputEventData.h"
#include "mc/deps/input/TextCharEventData.h"
#include "mc/deps/input/TouchPadTouchEventData.h"
#include "mc/deps/input/TurnEventData.h"
#include "mc/deps/input/VectorEventData.h"

union InputEventData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 44> button;
    ::ll::UntypedStorage<4, 44> pointerLocation;
    ::ll::UntypedStorage<1, 44> textChar;
    ::ll::UntypedStorage<4, 44> direction;
    ::ll::UntypedStorage<4, 44> turn;
    ::ll::UntypedStorage<4, 44> vector;
    ::ll::UntypedStorage<4, 44> rawInput;
    ::ll::UntypedStorage<1, 44> newConnectionState;
    ::ll::UntypedStorage<1, 44> addClient;
    ::ll::UntypedStorage<1, 44> changeUser;
    ::ll::UntypedStorage<4, 44> pointerLocationWithId;
    ::ll::UntypedStorage<4, 44> clearPointerLocationWithId;
    ::ll::UntypedStorage<4, 44> touch;
    ::ll::UntypedStorage<4, 44> controlOption;
    ::ll::UntypedStorage<4, 44> numberOfEnabledControlOptions;
    ::ll::UntypedStorage<1, 44> overlappingControls;
#else // @header-generator platform
    ::ll::TypedStorage<4, 44, ::ButtonEventData>                        button;
    ::ll::TypedStorage<4, 44, ::PointerLocationEventData>               pointerLocation;
    ::ll::TypedStorage<1, 44, ::TextCharEventData>                      textChar;
    ::ll::TypedStorage<4, 44, ::DirectionEventData>                     direction;
    ::ll::TypedStorage<4, 44, ::TurnEventData>                          turn;
    ::ll::TypedStorage<4, 44, ::VectorEventData>                        vector;
    ::ll::TypedStorage<4, 44, ::RawInputEventData>                      rawInput;
    ::ll::TypedStorage<1, 44, ::ConnectionStateData>                    newConnectionState;
    ::ll::TypedStorage<1, 44, ::AddClientData>                          addClient;
    ::ll::TypedStorage<1, 44, ::ChangeUserData>                         changeUser;
    ::ll::TypedStorage<4, 44, ::PointerLocationWithIdEventData>         pointerLocationWithId;
    ::ll::TypedStorage<4, 44, ::ClearPointerLocationWithIdEventData>    clearPointerLocationWithId;
    ::ll::TypedStorage<4, 44, ::TouchPadTouchEventData>                 touch;
    ::ll::TypedStorage<4, 44, ::ControlOptionEventData>                 controlOption;
    ::ll::TypedStorage<4, 44, ::NumberOfEnabledControlOptionsEventData> numberOfEnabledControlOptions;
    ::ll::TypedStorage<1, 44, ::OverlappingControlsEventData>           overlappingControls;
#endif // @header-generator platform
    // NOLINTEND
};
#else // @header-generator platform no-eol
#endif // @header-generator platform
