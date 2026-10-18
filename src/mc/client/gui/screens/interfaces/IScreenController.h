#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"

// auto generated forward declare list
// clang-format off
struct ScreenEvent;
// clang-format on

class IScreenController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenController() = default;

    virtual void preFrameTick() = 0;

    virtual ::ui::DirtyFlag tick() = 0;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&) = 0;

    virtual std::optional<std::string> getRoute() const = 0;

    virtual void setScreenState(std::vector<std::pair<std::string_view, std::string_view>> const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"

// auto generated forward declare list
// clang-format off
struct ScreenEvent;
// clang-format on

class IScreenController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenController() = default;

    virtual void preFrameTick() = 0;

    virtual ::ui::DirtyFlag tick() = 0;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) = 0;

    virtual ::std::optional<::std::string> getRoute() const = 0;

    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
