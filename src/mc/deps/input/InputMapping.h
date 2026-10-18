#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/GameControllerInputMapping.h"
#include "mc/deps/input/KeyboardInputMapping.h"
#include "mc/deps/input/MouseInputMapping.h"
#include "mc/deps/input/TestAutoInputMapping.h"
#include "mc/deps/input/TouchInputMapping.h"
#include "mc/deps/input/enums/DirectionId.h"

// auto generated forward declare list
// clang-format off
struct ChordButtonMapping;
struct DeviceButtonMapping;
// clang-format on

struct InputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::KeyboardInputMapping>               keyboardMapping;
    ::ll::TypedStorage<8, 80, ::MouseInputMapping>                  mouseMapping;
    ::ll::TypedStorage<8, 352, ::TouchInputMapping>                 touchMapping;
    ::ll::TypedStorage<8, 128, ::GameControllerInputMapping>        gamePadMapping;
    ::ll::TypedStorage<8, 24, ::TestAutoInputMapping>               testAutoMapping;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChordButtonMapping>>  chordButtonMapping;
    ::ll::TypedStorage<8, 24, ::std::vector<::DeviceButtonMapping>> deviceButtonMapping;
    // NOLINTEND

public:
    // prevent constructor by default
    InputMapping& operator=(InputMapping const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InputMapping();

    MCAPI InputMapping(::InputMapping const&);

    MCAPI InputMapping(
        ::KeyboardInputMapping&               aKeyboardMapping,
        ::MouseInputMapping&                  mouseMapping,
        ::TouchInputMapping&                  aTouchMapping,
        ::GameControllerInputMapping&         aGamePadMapping,
        ::TestAutoInputMapping&               aTestAutoMapping,
        ::std::vector<::ChordButtonMapping>&  aChordButtonMapping,
        ::std::vector<::DeviceButtonMapping>& aDeviceButtonMapping
    );

    MCAPI ::std::vector<::std::string> getButtonDifference(::InputMapping const* otherMapping) const;

    MCAPI ::std::vector<::DirectionId> getStickDifference(::InputMapping const* otherMapping) const;

    MCAPI ~InputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::InputMapping const&);

    MCAPI void* $ctor(
        ::KeyboardInputMapping&               aKeyboardMapping,
        ::MouseInputMapping&                  mouseMapping,
        ::TouchInputMapping&                  aTouchMapping,
        ::GameControllerInputMapping&         aGamePadMapping,
        ::TestAutoInputMapping&               aTestAutoMapping,
        ::std::vector<::ChordButtonMapping>&  aChordButtonMapping,
        ::std::vector<::DeviceButtonMapping>& aDeviceButtonMapping
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct InputMapping {};
#endif // @header-generator platform
#endif // @header-generator platform
