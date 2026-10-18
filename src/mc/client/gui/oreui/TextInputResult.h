#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::InputUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextInputResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> addedChars;
    ::ll::TypedStorage<8, 24, std::string> removedChars;
    ::ll::TypedStorage<8, 24, std::string> invalidChars;
    ::ll::TypedStorage<8, 8, ulong>        index;
    ::ll::TypedStorage<8, 24, std::string> text;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextInputResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> addedChars;
    ::ll::TypedStorage<8, 32, ::std::string> removedChars;
    ::ll::TypedStorage<8, 32, ::std::string> invalidChars;
    ::ll::TypedStorage<8, 8, uint64>         index;
    ::ll::TypedStorage<8, 32, ::std::string> text;
    // NOLINTEND
};
#else // @header-generator platform
struct TextInputResult {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::InputUtils
