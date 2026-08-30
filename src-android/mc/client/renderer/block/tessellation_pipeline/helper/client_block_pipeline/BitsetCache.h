#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct CacheId; }
// clang-format on

namespace ClientBlockPipeline {

struct BitsetCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1000, std::bitset<8000>> mBitSet;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void reset();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
