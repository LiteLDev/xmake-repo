#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class LayoutAxisType : int {
    Absolute               = 0,
    ParentRelativeX        = 1,
    ParentRelativeY        = 2,
    SelfRelativeX          = 3,
    SelfRelativeY          = 4,
    SizeOfChildrenX        = 5,
    SizeOfChildrenY        = 6,
    SizeOfLargestChildX    = 7,
    SizeOfLargestChildY    = 8,
    SizeOfMaxSiblingWidth  = 9,
    SizeOfMaxSiblingHeight = 10,
    None                   = 11,
    Count                  = 12,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LayoutAxisType : int {
    Absolute               = 0,
    ParentRelativeX        = 1,
    ParentRelativeY        = 2,
    SelfRelativeX          = 3,
    SelfRelativeY          = 4,
    SizeOfChildrenX        = 5,
    SizeOfChildrenY        = 6,
    SizeOfLargestChildX    = 7,
    SizeOfLargestChildY    = 8,
    SizeOfMaxSiblingWidth  = 9,
    SizeOfMaxSiblingHeight = 10,
    None                   = 11,
    Count                  = 12,
};
#else // @header-generator platform
enum class LayoutAxisType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
