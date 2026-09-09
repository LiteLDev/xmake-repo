#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

class BlockListEventMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mBlockDescriptors;
    ::ll::TypedStorage<8, 24, std::string>                  mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockListEventMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockListEventMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
