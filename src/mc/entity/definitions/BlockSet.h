#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

struct BlockSet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                         cost;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> blockDescriptors;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkcabbb5;
    ::ll::UntypedStorage<8, 24> mUnk3843d8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSet& operator=(BlockSet const&);
    BlockSet(BlockSet const&);
    BlockSet();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
