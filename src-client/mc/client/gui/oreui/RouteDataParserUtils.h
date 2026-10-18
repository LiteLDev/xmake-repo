#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct RouteData; }
// clang-format on

namespace OreUI::RouteDataParserUtils {
// functions
// NOLINTBEGIN
MCAPI void parseJson(
    ::std::vector<::OreUI::RouteData>& routes,
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator> const& doc
);
// NOLINTEND

} // namespace OreUI::RouteDataParserUtils
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
