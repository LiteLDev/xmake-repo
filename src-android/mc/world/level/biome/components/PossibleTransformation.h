#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BiomeFilterGroup.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct PossibleTransformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<const Biome*, uint>>> mTransformsInto;
    ::ll::TypedStorage<8, 64, ::BiomeFilterGroup>                         mCondition;
    ::ll::TypedStorage<4, 4, uint>                                        mMinPassingNeighbors;
    // NOLINTEND

public:
    // prevent constructor by default
    PossibleTransformation& operator=(PossibleTransformation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PossibleTransformation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
