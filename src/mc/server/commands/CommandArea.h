#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkViewSource;
// clang-format on

class CommandArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkViewSource>> mChunkSource;
#endif // @header-generator platform
    // NOLINTEND
};
