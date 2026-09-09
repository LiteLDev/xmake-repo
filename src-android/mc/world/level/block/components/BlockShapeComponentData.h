#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Matrix;
// clang-format on

struct BlockShapeComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mEnabled;
    ::ll::TypedStorage<8, 24, std::vector<AABB>> mOriginalAABBs;
    ::ll::TypedStorage<8, 24, std::vector<AABB>> mTransformedAABBs;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockShapeComponentData(BlockShapeComponentData const&);
    BlockShapeComponentData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void transformAABBs(::BlockShapeComponentData&, ::Matrix const&);
    // NOLINTEND
};
