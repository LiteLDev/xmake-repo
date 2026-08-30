#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct EnvironmentRequirement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mBlockTypes;
    ::ll::TypedStorage<4, 4, uint>                          mNumBlocksRequired;
    ::ll::TypedStorage<4, 4, uint>                          mSearchRadius;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentRequirement& operator=(EnvironmentRequirement const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addBlockDescriptor(::BlockDescriptor const&);

    MCNAPI ~EnvironmentRequirement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
