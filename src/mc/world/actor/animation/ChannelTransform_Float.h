#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class RenderParams;
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ChannelTransform_Float {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, float[3]> mXYZ;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ChannelTransform_Float();
#else // @header-generator platform
#endif // @header-generator platform
};
