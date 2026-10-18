#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/ReplacementError.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Util {

struct ReplacementResults {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Util::ReplacementError> error;
    ::ll::TypedStorage<4, 4, int>                      containerBounds;
    ::ll::TypedStorage<4, 4, int>                      numSlotsReplaced;
    ::ll::TypedStorage<4, 4, int>                      numItemsDropped;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkba8f31;
    ::ll::UntypedStorage<4, 4> mUnk949692;
    ::ll::UntypedStorage<4, 4> mUnk3dbdc9;
    ::ll::UntypedStorage<4, 4> mUnkafc55d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ReplacementResults& operator=(ReplacementResults const&);
    ReplacementResults(ReplacementResults const&);
    ReplacementResults();
#endif // @header-generator platform
};

} // namespace Util
