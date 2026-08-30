#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/TextureData.h"
#include "mc/external/render_dragon/texture_streaming/TextureDataTelemetryMixin.h"

namespace dragon::texturestreaming::detail::dense {

struct WithTelemetry : public ::dragon::texturestreaming::TextureData,
                       public ::dragon::texturestreaming::TextureDataTelemetryMixin {};

} // namespace dragon::texturestreaming::detail::dense
