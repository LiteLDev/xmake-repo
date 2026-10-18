#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct DelayFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mMin;
    ::ll::TypedStorage<4, 4, int>          mMax;
    ::ll::TypedStorage<4, 4, int>          mSpawnChance;
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>            mMin;
    ::ll::TypedStorage<4, 4, int>            mMax;
    ::ll::TypedStorage<4, 4, int>            mSpawnChance;
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
