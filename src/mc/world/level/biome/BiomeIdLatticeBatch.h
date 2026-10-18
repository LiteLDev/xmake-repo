#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BiomeIdLatticeBatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>               mAreaOffset;
    ::ll::TypedStorage<4, 4, int>               mGridOffset;
    ::ll::TypedStorage<8, 24, std::vector<int>> mBiomeIds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeIdLatticeBatch(int, int);

    MCNAPI void add(::BlockPos const&, int);

    MCNAPI void clear();

    MCNAPI int getBiomeId(::BlockPos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int);
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                 mAreaOffset;
    ::ll::TypedStorage<4, 4, int>                 mGridOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mBiomeIds;
#endif // @header-generator platform
    // NOLINTEND
};
