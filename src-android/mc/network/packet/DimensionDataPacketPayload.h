#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

struct DimensionDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DimensionDefinitionGroup> mDimensionDefinitionGroup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DimensionDataPacketPayload(::DimensionDefinitionGroup&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DimensionDefinitionGroup&&);
    // NOLINTEND
};
