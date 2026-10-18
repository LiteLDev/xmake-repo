#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct Type; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

struct PoiInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>        mPos;
    ::ll::TypedStorage<8, 8, ::Poi::Type const*> mType;
    ::ll::TypedStorage<1, 1, uchar>              mTickets;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnkccca34;
    ::ll::UntypedStorage<8, 8>  mUnkd79750;
    ::ll::UntypedStorage<1, 1>  mUnkbc4185;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PoiInstance& operator=(PoiInstance const&);
    PoiInstance(PoiInstance const&);
    PoiInstance();
#endif // @header-generator platform
};

} // namespace Poi
