#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIControl;
struct ButtonUpRightOfFirstRefusalRequest;
struct ScreenEvent;
// clang-format on

class ScreenInputContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenEvent>>                        mEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ButtonUpRightOfFirstRefusalRequest>> mButtonUpRightOfFirstRefusalRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void requestButtonUpRightOfFirstRefusal(uint id, ::std::weak_ptr<::UIControl> control);

    MCAPI ~ScreenInputContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ScreenInputContext {};
#endif // @header-generator platform
#endif // @header-generator platform
