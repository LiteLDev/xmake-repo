#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/TextureData.h"
#include "mc/external/render_dragon/texture_streaming/TextureDataTelemetryMixin.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming::detail::dense {

#if defined(LL_PLAT_A) // @header-generator platform
struct WithTelemetry : public ::dragon::texturestreaming::TextureData,
                       public ::dragon::texturestreaming::TextureDataTelemetryMixin {};
#else // @header-generator platform
struct WithTelemetry {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming::detail::dense
