#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SupportedRoute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>             mRoute;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mModes;
    ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> mPrerequisites;
    // NOLINTEND
};
#else // @header-generator platform
struct SupportedRoute {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
