#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ParsedFontAliasRefData.h"

namespace FontLoadingUtils {

struct ParsedFontAliasData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                           aliasName;
    ::ll::TypedStorage<8, 24, std::vector<FontLoadingUtils::ParsedFontAliasRefData>> refs;
    ::ll::TypedStorage<4, 4, float>                                                  scaleFactorOverride;
    ::ll::TypedStorage<1, 1, bool>                                                   hasScaleFactorOverride;
    // NOLINTEND
};

} // namespace FontLoadingUtils
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
