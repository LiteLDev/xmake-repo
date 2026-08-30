#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
// clang-format on

namespace br::worldgen {

class WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mMinHeight;
    ::ll::TypedStorage<2, 2, short> mMaxHeight;
    ::ll::TypedStorage<2, 2, short> mSeaLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int maxHeight() const;

    MCNAPI int minHeight() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::WorldGenContext from(::Dimension const&);
    // NOLINTEND
};

} // namespace br::worldgen
