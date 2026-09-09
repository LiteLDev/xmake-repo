#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"

namespace OreUI {

struct SupportedRoute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>               mRoute;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mModes;
    ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> mPrerequisites;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedRoute& operator=(SupportedRoute const&);
    SupportedRoute();
};

} // namespace OreUI
