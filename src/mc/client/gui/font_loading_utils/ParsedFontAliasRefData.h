#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FontLoadingUtils {

#if defined(LL_PLAT_C) // @header-generator platform
struct ParsedFontAliasRefData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        fontReferenceName;
    ::ll::TypedStorage<8, 32, ::std::string>                        languageCode;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>> ranges;
    ::ll::TypedStorage<4, 4, float>                                 fontScale;
    // NOLINTEND
};
#else // @header-generator platform
struct ParsedFontAliasRefData {};
#endif // @header-generator platform

} // namespace FontLoadingUtils
#endif // @header-generator platform
