#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec2;
namespace OreUI { struct GestureEventData; }
namespace OreUI { struct TouchEventData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec2;
namespace OreUI { struct GestureEventData; }
namespace OreUI { struct TouchEventData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ITouchSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITouchSystem() = default;

    virtual void sendTouchEvents(std::vector<OreUI::TouchEventData> const&) = 0;

    virtual void sendGestureEvent(::OreUI::GestureEventData const&) = 0;

    virtual void sendMouseMoveEvent(::Vec2 const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ITouchSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITouchSystem() = default;

    virtual void sendTouchEvents(::std::vector<::OreUI::TouchEventData> const& events) = 0;

    virtual void sendGestureEvent(::OreUI::GestureEventData const& event) = 0;

    virtual void sendMouseMoveEvent(::Vec2 const& pos) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ITouchSystem {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
