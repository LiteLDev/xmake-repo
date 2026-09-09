#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pos;
// clang-format on

class HeightmapWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::vector<short> const*> mData;
    ::ll::TypedStorage<2, 2, short>                     mMinY;
    // NOLINTEND

public:
    // prevent constructor by default
    HeightmapWrapper& operator=(HeightmapWrapper const&);
    HeightmapWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool empty() const;

    MCNAPI short getHeightAt(::Pos const&) const;

    MCNAPI short getMinimumY() const;
    // NOLINTEND
};
