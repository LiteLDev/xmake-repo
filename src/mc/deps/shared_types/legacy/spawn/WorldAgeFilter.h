#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct WorldAgeFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mMin;
    ::ll::TypedStorage<8, 8, ulong> mMax;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mMin;
    ::ll::TypedStorage<8, 8, uint64> mMax;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
