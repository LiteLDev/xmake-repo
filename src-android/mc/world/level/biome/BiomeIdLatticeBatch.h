#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

struct BiomeIdLatticeBatch {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
