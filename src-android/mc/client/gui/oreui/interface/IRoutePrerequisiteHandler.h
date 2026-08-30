#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisiteState.h"

namespace OreUI {

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

} // namespace OreUI
