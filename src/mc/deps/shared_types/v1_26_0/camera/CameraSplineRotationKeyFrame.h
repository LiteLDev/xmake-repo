#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_26_0 {

struct CameraSplineRotationKeyFrame {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                   mRotation;
    ::ll::TypedStorage<4, 4, float>                     mTimeSeconds;
    ::ll::TypedStorage<4, 8, std::optional<EasingType>> mEasingType;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                       mRotation;
    ::ll::TypedStorage<4, 4, float>                         mTimeSeconds;
    ::ll::TypedStorage<4, 8, ::std::optional<::EasingType>> mEasingType;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
