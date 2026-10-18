#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct BakedNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPivot;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mBindPoseRotation;
    ::ll::TypedStorage<4, 4, float>   mInflate;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BakedNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPivot;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mBindPoseRotation;
    ::ll::TypedStorage<4, 4, float>   mInflate;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedNode {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
