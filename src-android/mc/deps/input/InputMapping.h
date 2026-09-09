#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ChordButtonMapping.h"
#include "mc/deps/input/DeviceButtonMapping.h"
#include "mc/deps/input/GameControllerInputMapping.h"
#include "mc/deps/input/KeyboardInputMapping.h"
#include "mc/deps/input/MouseInputMapping.h"
#include "mc/deps/input/TestAutoInputMapping.h"
#include "mc/deps/input/TouchInputMapping.h"
#include "mc/deps/input/enums/DirectionId.h"

struct InputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::KeyboardInputMapping>           keyboardMapping;
    ::ll::TypedStorage<8, 80, ::MouseInputMapping>              mouseMapping;
    ::ll::TypedStorage<8, 320, ::TouchInputMapping>             touchMapping;
    ::ll::TypedStorage<8, 128, ::GameControllerInputMapping>    gamePadMapping;
    ::ll::TypedStorage<8, 24, ::TestAutoInputMapping>           testAutoMapping;
    ::ll::TypedStorage<8, 24, std::vector<ChordButtonMapping>>  chordButtonMapping;
    ::ll::TypedStorage<8, 24, std::vector<DeviceButtonMapping>> deviceButtonMapping;
    // NOLINTEND

public:
    // prevent constructor by default
    InputMapping& operator=(InputMapping const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputMapping();

    MCNAPI InputMapping(::InputMapping const&);

    MCNAPI InputMapping(
        ::KeyboardInputMapping&,
        ::MouseInputMapping&,
        ::TouchInputMapping&,
        ::GameControllerInputMapping&,
        ::TestAutoInputMapping&,
        std::vector<ChordButtonMapping>&,
        std::vector<DeviceButtonMapping>&
    );

    MCNAPI std::vector<std::string> getButtonDifference(::InputMapping const*) const;

    MCNAPI std::vector<DirectionId> getStickDifference(::InputMapping const*) const;

    MCNAPI ~InputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::InputMapping const&);

    MCNAPI void* $ctor(
        ::KeyboardInputMapping&,
        ::MouseInputMapping&,
        ::TouchInputMapping&,
        ::GameControllerInputMapping&,
        ::TestAutoInputMapping&,
        std::vector<ChordButtonMapping>&,
        std::vector<DeviceButtonMapping>&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
