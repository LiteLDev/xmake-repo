#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum TextType : uint {
    ExtendedASCII   = 0,
    IdentifierChars = 1,
    NumberChars     = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextType : int {
    ExtendedASCII   = 0,
    IdentifierChars = 1,
    NumberChars     = 2,
};
#else // @header-generator platform
enum class TextType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
