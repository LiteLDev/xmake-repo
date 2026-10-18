#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/phys/AABB.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on
#endif // @header-generator platform

struct InsideOnewayBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AABB>> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    InsideOnewayBlockComponent& operator=(InsideOnewayBlockComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
