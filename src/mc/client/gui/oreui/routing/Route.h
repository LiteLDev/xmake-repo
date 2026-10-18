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
struct Route {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>               fileName;
    ::ll::TypedStorage<8, 24, std::string>               route;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mode;
    ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> prerequisite;
    // NOLINTEND

public:
    // prevent constructor by default
    Route& operator=(Route const&);
    Route(Route const&);
    Route();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Route {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>             fileName;
    ::ll::TypedStorage<8, 32, ::std::string>             route;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mode;
    ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> prerequisite;
    // NOLINTEND

public:
    // prevent constructor by default
    Route();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Route(
        ::std::string const&             fileName,
        ::std::string const&             route,
        ::OreUI::RouteMode const         mode,
        ::OreUI::RoutePrerequisite const prerequisite
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&             fileName,
        ::std::string const&             route,
        ::OreUI::RouteMode const         mode,
        ::OreUI::RoutePrerequisite const prerequisite
    );
    // NOLINTEND
};
#else // @header-generator platform
struct Route {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
