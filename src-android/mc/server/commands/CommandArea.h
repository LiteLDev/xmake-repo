#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkViewSource;
// clang-format on

class CommandArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkViewSource>> mChunkSource;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandArea();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockSource& getDimensionBlockSource();

    MCNAPI ~CommandArea();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
