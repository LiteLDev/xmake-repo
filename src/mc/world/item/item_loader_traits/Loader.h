#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/category/CategoryLoader.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ItemLoaderTraits { struct MergedTraits; }
// clang-format on

#endif // @header-generator platform
namespace ItemLoaderTraits {

#if defined(LL_PLAT_A) // @header-generator platform
struct Loader : public ::Bedrock::Resources::CategoryLoader<ItemLoaderTraits::MergedTraits> {};
#else // @header-generator platform
struct Loader : public ::Bedrock::Resources::CategoryLoader<::ItemLoaderTraits::MergedTraits> {};
#endif // @header-generator platform

} // namespace ItemLoaderTraits
