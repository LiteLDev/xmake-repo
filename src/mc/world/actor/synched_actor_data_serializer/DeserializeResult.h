#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/bitset.h"

namespace SynchedActorDataSerializer {

struct DeserializeResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mReadValue;
    ::ll::TypedStorage<1, 1, bool> mWasDifferent;
    ::ll::UntypedStorage<8, 32>    mChangedFlags;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                           mReadValue;
    ::ll::TypedStorage<1, 1, bool>                                           mWasDifferent;
    ::ll::TypedStorage<8, 32, ::std::optional<::brstd::bitset<131, uint64>>> mChangedFlags;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SynchedActorDataSerializer
