#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct MaterialLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const> mNameHash;
    ::ll::TypedStorage<8, 8, ulong const> mFlagHash;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialLocation();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong _doHash(std::string_view);
    // NOLINTEND
};
#else // @header-generator platform
struct MaterialLocation {};
#endif // @header-generator platform

} // namespace dragon::materials
