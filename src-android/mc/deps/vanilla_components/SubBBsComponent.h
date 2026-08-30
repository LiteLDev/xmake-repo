#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/AABB.h"

struct SubBBsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AABB>> mSubBBs;
    // NOLINTEND

public:
    // prevent constructor by default
    SubBBsComponent& operator=(SubBBsComponent const&);
};
