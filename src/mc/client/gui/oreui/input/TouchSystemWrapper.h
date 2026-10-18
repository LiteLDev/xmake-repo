#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/GestureEventData.h"
#include "mc/client/gui/oreui/interface/ITouchSystem.h"
#include "mc/client/gui/oreui/interface/TouchEventData.h"
#include "mc/external/gameface/cohtml/GestureEventData.h"
#include "mc/external/gameface/cohtml/TouchEventData.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace OreUI { struct GestureEventData; }
namespace OreUI { struct TouchEventData; }
namespace cohtml { struct GestureEventData; }
namespace cohtml { struct MouseEventData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ITouchSystem.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace OreUI { struct GestureEventData; }
namespace OreUI { struct TouchEventData; }
namespace cohtml { struct GestureEventData; }
namespace cohtml { struct MouseEventData; }
namespace cohtml { struct TouchEventData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class TouchSystemWrapper : public ::OreUI::ITouchSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mTouchEventsCallback;
    ::ll::UntypedStorage<8, 48> mGestureEventCallback;
    ::ll::UntypedStorage<8, 48> mMouseEventCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchSystemWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchSystemWrapper();

    virtual void sendTouchEvents(std::vector<OreUI::TouchEventData> const&);

    virtual void sendGestureEvent(::OreUI::GestureEventData const&);

    virtual void sendMouseMoveEvent(::Vec2 const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TouchSystemWrapper(
        std::function<void(std::vector<cohtml::TouchEventData>&)> const&,
        std::function<void(cohtml::GestureEventData&)> const&,
        std::function<void(const cohtml::MouseEventData&)> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<void(std::vector<cohtml::TouchEventData>&)> const&,
        std::function<void(cohtml::GestureEventData&)> const&,
        std::function<void(const cohtml::MouseEventData&)> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendTouchEvents(std::vector<OreUI::TouchEventData> const&);

    MCNAPI void $sendGestureEvent(::OreUI::GestureEventData const&);

    MCNAPI void $sendMouseMoveEvent(::Vec2 const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TouchSystemWrapper : public ::OreUI::ITouchSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::vector<::cohtml::TouchEventData>&)>> mTouchEventsCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::cohtml::GestureEventData&)>>              mGestureEventCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::cohtml::MouseEventData const&)>>          mMouseEventCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchSystemWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void sendTouchEvents(::std::vector<::OreUI::TouchEventData> const& events) /*override*/;

    virtual void sendGestureEvent(::OreUI::GestureEventData const& event) /*override*/;

    virtual void sendMouseMoveEvent(::Vec2 const& pos) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchSystemWrapper(
        ::std::function<void(::std::vector<::cohtml::TouchEventData>&)> const& touchEventsCallback,
        ::std::function<void(::cohtml::GestureEventData&)> const&              gestureEventCallback,
        ::std::function<void(::cohtml::MouseEventData const&)> const&          mouseEventCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<void(::std::vector<::cohtml::TouchEventData>&)> const& touchEventsCallback,
        ::std::function<void(::cohtml::GestureEventData&)> const&              gestureEventCallback,
        ::std::function<void(::cohtml::MouseEventData const&)> const&          mouseEventCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendTouchEvents(::std::vector<::OreUI::TouchEventData> const& events);

    MCAPI void $sendGestureEvent(::OreUI::GestureEventData const& event);

    MCAPI void $sendMouseMoveEvent(::Vec2 const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TouchSystemWrapper {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
