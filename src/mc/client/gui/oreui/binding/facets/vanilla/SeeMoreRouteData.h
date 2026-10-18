#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct SeeMoreRouteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> title;
    ::ll::TypedStorage<8, 24, std::string> pageId;
    // NOLINTEND

public:
    // prevent constructor by default
    SeeMoreRouteData& operator=(SeeMoreRouteData const&);
    SeeMoreRouteData(SeeMoreRouteData const&);
    SeeMoreRouteData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SeeMoreRouteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> title;
    ::ll::TypedStorage<8, 32, ::std::string> pageId;
    // NOLINTEND

public:
    // prevent constructor by default
    SeeMoreRouteData& operator=(SeeMoreRouteData const&);
    SeeMoreRouteData(SeeMoreRouteData const&);
    SeeMoreRouteData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::OreUI::SeeMoreRouteData& operator=(::OreUI::SeeMoreRouteData&&);
    // NOLINTEND
};
#else // @header-generator platform
struct SeeMoreRouteData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
