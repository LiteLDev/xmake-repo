#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::CursorTypes {

#if defined(LL_PLAT_A) // @header-generator platform
enum Cursors : uint {
    Alias        = 0,
    AllScroll    = 1,
    Auto         = 2,
    Cell         = 3,
    ContextMenu  = 4,
    ColResize    = 5,
    Copy         = 6,
    Crosshair    = 7,
    Default      = 8,
    EResize      = 9,
    EWResize     = 10,
    Grab         = 11,
    Grabbing     = 12,
    Help         = 13,
    Move         = 14,
    NResize      = 15,
    NEResize     = 16,
    NESWResize   = 17,
    NSResize     = 18,
    NWResize     = 19,
    NWSEResize   = 20,
    NoDrop       = 21,
    None         = 22,
    NotAllowed   = 23,
    Pointer      = 24,
    Progress     = 25,
    RowResize    = 26,
    SResize      = 27,
    SEResize     = 28,
    SWResize     = 29,
    Text         = 30,
    URL          = 31,
    VerticalText = 32,
    WResize      = 33,
    Wait         = 34,
    ZoomIn       = 35,
    ZoomOut      = 36,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Cursors : int {
    Alias        = 0,
    AllScroll    = 1,
    Auto         = 2,
    Cell         = 3,
    ContextMenu  = 4,
    ColResize    = 5,
    Copy         = 6,
    Crosshair    = 7,
    Default      = 8,
    EResize      = 9,
    EWResize     = 10,
    Grab         = 11,
    Grabbing     = 12,
    Help         = 13,
    Move         = 14,
    NResize      = 15,
    NEResize     = 16,
    NESWResize   = 17,
    NSResize     = 18,
    NWResize     = 19,
    NWSEResize   = 20,
    NoDrop       = 21,
    None         = 22,
    NotAllowed   = 23,
    Pointer      = 24,
    Progress     = 25,
    RowResize    = 26,
    SResize      = 27,
    SEResize     = 28,
    SWResize     = 29,
    Text         = 30,
    Url          = 31,
    VerticalText = 32,
    WResize      = 33,
    Wait         = 34,
    ZoomIn       = 35,
    ZoomOut      = 36,
};
#else // @header-generator platform
enum class Cursors : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
