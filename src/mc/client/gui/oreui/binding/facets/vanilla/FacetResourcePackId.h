#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

// auto generated forward declare list
// clang-format off
struct PackContentItem;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct FacetResourcePackId : public ::NewType<std::string> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetResourcePackId : public ::NewType<::std::string> {};
#else // @header-generator platform
struct FacetResourcePackId {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
