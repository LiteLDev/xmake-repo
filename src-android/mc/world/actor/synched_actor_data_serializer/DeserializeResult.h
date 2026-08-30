#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/bitset.h"

namespace SynchedActorDataSerializer {

struct DeserializeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mReadValue;
    ::ll::TypedStorage<1, 1, bool> mWasDifferent;
    ::ll::UntypedStorage<8, 32>    mChangedFlags;
    // NOLINTEND
};

} // namespace SynchedActorDataSerializer
