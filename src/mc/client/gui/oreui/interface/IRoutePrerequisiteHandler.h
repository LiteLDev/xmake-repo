#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisiteState.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisiteState.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IRoutePrerequisiteHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IRoutePrerequisiteHandler() = default;

    virtual ::OreUI::RoutePrerequisiteState handleRoutePrerequisites(::OreUI::RoutePrerequisite, std::string const&) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IRoutePrerequisiteHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRoutePrerequisiteHandler() = default;

    virtual ::OreUI::RoutePrerequisiteState
    handleRoutePrerequisites(::OreUI::RoutePrerequisite prerequisite, ::std::string const& newRoute) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IRoutePrerequisiteHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
