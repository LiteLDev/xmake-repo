#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

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

} // namespace OreUI
