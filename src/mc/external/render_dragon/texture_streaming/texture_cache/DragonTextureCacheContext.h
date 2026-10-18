#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/AlphaUsage.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct DragonTextureCacheContext {
public:
    // DragonTextureCacheContext inner types define
    using LoadbackParameters = std::pair<ResourceLocation, mce::AlphaUsage>;
};
#else // @header-generator platform
struct DragonTextureCacheContext {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
