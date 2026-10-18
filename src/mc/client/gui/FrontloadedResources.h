#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class FrontloadedResources {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::span<ResourceLocation> getTextures();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class FrontloadedResources {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::gsl::span<::ResourceLocation> getTextures();
    // NOLINTEND
};
#else // @header-generator platform
class FrontloadedResources {};
#endif // @header-generator platform
#endif // @header-generator platform
