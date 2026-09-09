#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MappedPorts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mInternalPort;
    ::ll::TypedStorage<2, 2, ushort> mExternalPort;
    ::ll::TypedStorage<2, 2, ushort> mLength;
    // NOLINTEND
};
