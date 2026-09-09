#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"

class ActionEvent {
public:
    // ActionEvent inner types define
    enum class ActionState : int {
        Start = 1,
        Stop  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        mActionId;
    ::ll::TypedStorage<4, 4, ::ActionEvent::ActionState> mActionState;
    ::ll::TypedStorage<1, 1, bool>                       mIsExclusive;
    ::ll::TypedStorage<1, 1, ::FocusImpact>              mFocusImpact;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActionEvent(int, ::ActionEvent::ActionState, bool, ::FocusImpact);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, ::ActionEvent::ActionState, bool, ::FocusImpact);
    // NOLINTEND
};
