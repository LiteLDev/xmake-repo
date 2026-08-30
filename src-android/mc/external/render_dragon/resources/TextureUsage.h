#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

class TextureUsage : public ::std::bitset<4> {
public:
    // TextureUsage inner types define
    using Inner = std::bitset<4>;

public:
    // prevent constructor by default
    TextureUsage();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::bitset<4> const& ComputeDst();

    MCNAPI static std::bitset<4> const& CopyDst();

    MCNAPI static std::bitset<4> const& Default();

    MCNAPI static std::bitset<4> const& DepthDst();

    MCNAPI static std::bitset<4> const& None();

    MCNAPI static std::bitset<4> const& ReadBack();

    MCNAPI static std::bitset<4> const& ReadSrc();

    MCNAPI static std::bitset<4> const& RenderDst();
    // NOLINTEND
};

} // namespace dragon
