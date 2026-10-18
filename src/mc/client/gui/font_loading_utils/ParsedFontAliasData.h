#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace FontLoadingUtils { struct ParsedFontAliasRefData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace FontLoadingUtils {

#if defined(LL_PLAT_C) // @header-generator platform
struct ParsedFontAliasData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                             aliasName;
    ::ll::TypedStorage<8, 24, ::std::vector<::FontLoadingUtils::ParsedFontAliasRefData>> refs;
    ::ll::TypedStorage<4, 4, float>                                                      scaleFactorOverride;
    ::ll::TypedStorage<1, 1, bool>                                                       hasScaleFactorOverride;
    // NOLINTEND
};
#else // @header-generator platform
struct ParsedFontAliasData {};
#endif // @header-generator platform

} // namespace FontLoadingUtils
#endif // @header-generator platform
