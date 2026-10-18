#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/filters/FilterInputDefinition.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class FilterInput;
#else // @header-generator platform
struct FilterInputDefinition;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct FilterStringMap : public ::std::unordered_map<std::string, FilterInputDefinition> {
public:
    // prevent constructor by default
    FilterStringMap& operator=(FilterStringMap const&);
};
#else // @header-generator platform
struct FilterStringMap : public ::std::unordered_map<::std::string, ::FilterInputDefinition> {};
#endif // @header-generator platform
