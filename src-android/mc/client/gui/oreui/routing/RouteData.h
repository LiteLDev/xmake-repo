#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/client/gui/oreui/routing/SupportedRoute.h"

namespace OreUI {

struct RouteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mFileName;
    ::ll::TypedStorage<4, 4, ::OreUI::EntryPoints::RouteFlags>    mScope;
    ::ll::TypedStorage<8, 24, std::string>                        mDefaultRoute;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SupportedRoute>> mSupportedRoutes;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteData& operator=(RouteData const&);
    RouteData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RouteData(::OreUI::RouteData const&);

    MCNAPI ~RouteData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::RouteData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
