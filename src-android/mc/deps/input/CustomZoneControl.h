#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class RectangleArea;
class TouchPointResults;
// clang-format on

class CustomZoneControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mZoneName;
    ::ll::UntypedStorage<8, 48> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomZoneControl(CustomZoneControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomZoneControl();

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
