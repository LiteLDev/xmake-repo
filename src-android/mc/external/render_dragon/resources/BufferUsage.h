#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

class BufferUsage : public ::std::bitset<2> {
public:
    // BufferUsage inner types define
    using Inner = std::bitset<2>;

public:
    // prevent constructor by default
    BufferUsage();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::bitset<2> const& Default();
    // NOLINTEND
};

} // namespace dragon
