#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
class BlockPos;
namespace BlockBreadthFirst { struct BlockNeighbor; }
#endif // @header-generator platform
// clang-format on

namespace BlockBreadthFirst {

struct AllNeighborsRandomized {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Random&> mRandom;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf97ec3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AllNeighborsRandomized& operator=(AllNeighborsRandomized const&);
    AllNeighborsRandomized(AllNeighborsRandomized const&);
    AllNeighborsRandomized();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::array<::BlockBreadthFirst::BlockNeighbor, 6> operator()(::BlockPos const& pos);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace BlockBreadthFirst
