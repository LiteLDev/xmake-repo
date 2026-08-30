#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

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

} // namespace dragon::materials
