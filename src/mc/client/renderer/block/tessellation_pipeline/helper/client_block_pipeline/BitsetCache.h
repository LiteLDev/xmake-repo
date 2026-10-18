#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct CacheId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BitsetCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1000, ::std::bitset<8000>> mBitSet;
    // NOLINTEND
};
#else // @header-generator platform
struct BitsetCache {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
