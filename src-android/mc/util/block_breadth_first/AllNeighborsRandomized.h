#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace BlockBreadthFirst {

struct AllNeighborsRandomized {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Random&> mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    AllNeighborsRandomized& operator=(AllNeighborsRandomized const&);
    AllNeighborsRandomized(AllNeighborsRandomized const&);
    AllNeighborsRandomized();
};

} // namespace BlockBreadthFirst
