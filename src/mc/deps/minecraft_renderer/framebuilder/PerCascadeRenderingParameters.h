#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeDrawingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeSamplingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeUpdateParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct PerCascadeRenderingParameters : public ::mce::framebuilder::PerCascadeDrawingParameters,
                                       public ::mce::framebuilder::PerCascadeSamplingParameters,
                                       public ::mce::framebuilder::PerCascadeUpdateParameters {};
#else // @header-generator platform
struct PerCascadeRenderingParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
