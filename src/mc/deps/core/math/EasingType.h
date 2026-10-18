#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum EasingType : uint {
#else // @header-generator platform
enum class EasingType : int {
#endif // @header-generator platform
    Linear       = 0,
    Spring       = 1,
    InQuad       = 2,
    OutQuad      = 3,
    InOutQuad    = 4,
    InCubic      = 5,
    OutCubic     = 6,
    InOutCubic   = 7,
    InQuart      = 8,
    OutQuart     = 9,
    InOutQuart   = 10,
    InQuint      = 11,
    OutQuint     = 12,
    InOutQuint   = 13,
    InSine       = 14,
    OutSine      = 15,
    InOutSine    = 16,
    InExpo       = 17,
    OutExpo      = 18,
    InOutExpo    = 19,
    InCirc       = 20,
    OutCirc      = 21,
    InOutCirc    = 22,
    InBounce     = 23,
    OutBounce    = 24,
    InOutBounce  = 25,
    InBack       = 26,
    OutBack      = 27,
    InOutBack    = 28,
    InElastic    = 29,
    OutElastic   = 30,
    InOutElastic = 31,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count       = 32,
    _Invalid     = 33,
#else // @header-generator platform
    Count        = 32,
    Invalid      = 33,
#endif // @header-generator platform
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::EasingType>();
// clang-format on
#endif // @header-generator platform
