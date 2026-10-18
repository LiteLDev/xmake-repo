#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_50 {

struct BoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinX;
    ::ll::TypedStorage<4, 4, int> mMinY;
    ::ll::TypedStorage<4, 4, int> mMinZ;
    ::ll::TypedStorage<4, 4, int> mMaxX;
    ::ll::TypedStorage<4, 4, int> mMaxY;
    ::ll::TypedStorage<4, 4, int> mMaxZ;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_21_50
