#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class BaseLightTextureImageBuilder;
class Level;
class Scheduler;
// clang-format on

namespace LightTextureImageBuilderFactory {
// functions
// NOLINTBEGIN
MCNAPI void registerCustomDimensionLightImageBuilder(
    ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& builderFactory,
    ::std::string_view                                                 dimensionName
);

MCNAPI void
registerLightImageBuilders(::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& builderFactory);
// NOLINTEND

} // namespace LightTextureImageBuilderFactory
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
