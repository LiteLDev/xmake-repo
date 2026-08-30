#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

struct BlockPatternData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPattern;
    ::ll::UntypedStorage<8, 48>                         mLookup;
    ::ll::TypedStorage<4, 4, int>                       mPatternLength;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternData& operator=(BlockPatternData const&);
    BlockPatternData(BlockPatternData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockPatternData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
