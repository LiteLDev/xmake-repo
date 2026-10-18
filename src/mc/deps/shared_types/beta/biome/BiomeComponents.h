#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/biome/BiomeComponents.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::Beta {

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeComponents : public ::SharedTypes::v1_26_30::BiomeComponents {};
#else // @header-generator platform
struct BiomeComponents : public ::SharedTypes::v1_26_30::BiomeComponents {
public:
    // BiomeComponents inner types define
    using Parent = ::SharedTypes::v1_26_30::BiomeComponents;
};
#endif // @header-generator platform

} // namespace SharedTypes::Beta
