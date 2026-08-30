#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct WorldAgeFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mMin;
    ::ll::TypedStorage<8, 8, ulong> mMax;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
