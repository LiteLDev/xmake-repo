#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct ArrowDataPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mEndLocation;
    ::ll::TypedStorage<4, 8, std::optional<float>> mArrowHeadLength;
    ::ll::TypedStorage<4, 8, std::optional<float>> mArrowHeadRadius;
    ::ll::TypedStorage<1, 2, std::optional<uchar>> mNumSegments;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mEndLocation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mArrowHeadLength;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mArrowHeadRadius;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>   mNumSegments;
#endif // @header-generator platform
    // NOLINTEND
};
