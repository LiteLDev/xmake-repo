#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace History {

struct TurnInput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::Vec2> mTurnOffset;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8> mUnked50d3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TurnInput& operator=(TurnInput const&);
    TurnInput(TurnInput const&);
    TurnInput();
#endif // @header-generator platform
};

} // namespace History
