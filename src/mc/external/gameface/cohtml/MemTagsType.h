#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::MemTags {

#if defined(LL_PLAT_A) // @header-generator platform
enum MemTagsType : uint {
    Unknown          = 0,
    Untagged         = 1,
    System           = 2,
    Logging          = 3,
    Loader           = 4,
    DOM              = 5,
    DOMStatic        = 6,
    Layout           = 7,
    CSS              = 8,
    CSSStatic        = 9,
    TaskSystemMemory = 10,
    Display          = 11,
    Profiling        = 12,
    HTMLParser       = 13,
    TempAllocator    = 14,
    PoolAllocator    = 15,
    Dump             = 16,
    Script           = 17,
    XML              = 18,
    Server           = 19,
    Inspector        = 20,
    SVG              = 21,
    UnityPlugin      = 22,
    UriParser        = 23,
    Media            = 24,
    JSON             = 25,
    ScriptEngine     = 26,
    Count            = 27,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class MemTagsType : int {
    Unknown          = 0,
    Untagged         = 1,
    System           = 2,
    Logging          = 3,
    Loader           = 4,
    Dom              = 5,
    DOMStatic        = 6,
    Layout           = 7,
    Css              = 8,
    CSSStatic        = 9,
    TaskSystemMemory = 10,
    Display          = 11,
    Profiling        = 12,
    HTMLParser       = 13,
    TempAllocator    = 14,
    PoolAllocator    = 15,
    Dump             = 16,
    Script           = 17,
    Xml              = 18,
    Server           = 19,
    Inspector        = 20,
    Svg              = 21,
    UnityPlugin      = 22,
    UriParser        = 23,
    Media            = 24,
    Json             = 25,
    ScriptEngine     = 26,
    Count            = 27,
};
#else // @header-generator platform
enum class MemTagsType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
