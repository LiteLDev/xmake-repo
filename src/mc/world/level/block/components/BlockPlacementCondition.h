#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/components/BlockPlacementDirectionalFilter.h"

struct BlockPlacementCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockPlacementDirectionalFilter> directionalFilter;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>     blockFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockPlacementCondition(::BlockPlacementDirectionalFilter, std::vector<BlockDescriptor>);

    MCNAPI ~BlockPlacementCondition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPlacementDirectionalFilter, std::vector<BlockDescriptor>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> blockFilter;
#endif // @header-generator platform
    // NOLINTEND
};
