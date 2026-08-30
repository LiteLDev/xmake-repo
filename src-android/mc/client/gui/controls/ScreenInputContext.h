#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ButtonUpRightOfFirstRefusalRequest.h"
#include "mc/client/gui/screens/ScreenEvent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class ScreenInputContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScreenEvent>>                        mEvents;
    ::ll::TypedStorage<8, 24, std::vector<ButtonUpRightOfFirstRefusalRequest>> mButtonUpRightOfFirstRefusalRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenInputContext();

    MCNAPI void clear();

    MCNAPI void enqueueEvent(::ScreenEvent const&);

    MCNAPI std::vector<ButtonUpRightOfFirstRefusalRequest> const& getButtonUpRightOfFirstRefusalRequests();

    MCNAPI void requestButtonUpRightOfFirstRefusal(uint, std::weak_ptr<UIControl>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
