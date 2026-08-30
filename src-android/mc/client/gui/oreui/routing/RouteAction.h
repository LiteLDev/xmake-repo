#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

namespace OreUI {

struct RouteAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                route;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteHistoryAction> action;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteAction& operator=(RouteAction const&);
    RouteAction();
};

} // namespace OreUI
