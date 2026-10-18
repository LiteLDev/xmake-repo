#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/phys/AABB.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AABB;
#endif // @header-generator platform
class Matrix;
// clang-format on

struct BlockShapeComponentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>               mEnabled;
    ::ll::TypedStorage<8, 24, std::vector<AABB>> mOriginalAABBs;
    ::ll::TypedStorage<8, 24, std::vector<AABB>> mTransformedAABBs;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                   mEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mOriginalAABBs;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mTransformedAABBs;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlockShapeComponentData& operator=(BlockShapeComponentData const&);
#endif // @header-generator platform
    BlockShapeComponentData(BlockShapeComponentData const&);
    BlockShapeComponentData();

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockShapeComponentData& operator=(::BlockShapeComponentData&&);
    // NOLINTEND

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void transformAABBs(::BlockShapeComponentData&, ::Matrix const&);
#else // @header-generator platform
    MCAPI static void transformAABBs(::BlockShapeComponentData& data, ::Matrix const& transform);
#endif // @header-generator platform
    // NOLINTEND
};
