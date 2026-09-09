#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LevelChunk;
// clang-format on

struct SubChunkChange {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreationTime;
    ::ll::UntypedStorage<8, 24> mLevelChunk;
    ::ll::UntypedStorage<8, 48> mChange;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkChange();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SubChunkChange();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
