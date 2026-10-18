#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RouteAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>              route;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteHistoryAction> action;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteAction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouteAction(::std::string const& route, ::OreUI::RouteHistoryAction const action);

    MCAPI ~RouteAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& route, ::OreUI::RouteHistoryAction const action);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RouteAction {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
