#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct BlockSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         cost;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> blockDescriptors;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSet& operator=(BlockSet const&);
    BlockSet(BlockSet const&);
    BlockSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
