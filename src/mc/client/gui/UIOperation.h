#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIOperation : int {
    None         = 0,
    InsertBack   = 1,
    InsertFront  = 2,
    InsertAfter  = 3,
    InsertBefore = 4,
    MoveBack     = 5,
    MoveFront    = 6,
    MoveAfter    = 7,
    MoveBefore   = 8,
    Swap         = 9,
    Remove       = 10,
    Replace      = 11,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class UIOperation : int {
    None         = 0,
    InsertBack   = 1,
    InsertFront  = 2,
    InsertAfter  = 3,
    InsertBefore = 4,
    MoveBack     = 5,
    MoveFront    = 6,
    MoveAfter    = 7,
    MoveBefore   = 8,
    Swap         = 9,
    Remove       = 10,
    Replace      = 11,
};
#else // @header-generator platform
enum class UIOperation : int {};
#endif // @header-generator platform
#endif // @header-generator platform
