#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct CameraSplineProgressKeyFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mAlpha;
    ::ll::TypedStorage<4, 4, float>                     mTimeSeconds;
    ::ll::TypedStorage<4, 8, std::optional<EasingType>> mEasingType;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
