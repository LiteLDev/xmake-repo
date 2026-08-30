#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class IBlockSource;
// clang-format on

class MockableOwnedBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<DimensionType>> mDimensionType;
    ::ll::TypedStorage<8, 280, std::optional<BlockSource>> mBlockSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IBlockSource const& get() const;

    MCNAPI ::IBlockSource& get();
    // NOLINTEND
};
