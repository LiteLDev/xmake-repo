#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/poi/TypeId.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

struct Record {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::Poi::TypeId> mType;
    ::ll::TypedStorage<1, 1, uchar>         mTickets;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnkc9efe9;
    ::ll::UntypedStorage<1, 1> mUnka03133;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Record& operator=(Record const&);
    Record(Record const&);
    Record();
#endif // @header-generator platform
};

} // namespace Poi
