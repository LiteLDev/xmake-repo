#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/client/gui/oreui/routing/SupportedRoute.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteFlags.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct SupportedRoute; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RouteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                          mFileName;
    ::ll::TypedStorage<4, 4, ::OreUI::EntryPoints::RouteFlags>        mScope;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDefaultRoute;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SupportedRoute>> mSupportedRoutes;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteData& operator=(RouteData const&);
    RouteData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouteData(::OreUI::RouteData const&);

    MCAPI ~RouteData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RouteData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RouteData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
