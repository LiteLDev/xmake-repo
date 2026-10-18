#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::texturestreaming { struct TextureStreamingConfiguration; }
// clang-format on

namespace mce::TextureStreamingConfigHelper {
// functions
// NOLINTBEGIN
MCNAPI ::dragon::texturestreaming::TextureStreamingConfiguration createTextureStreamingConfig();
// NOLINTEND

} // namespace mce::TextureStreamingConfigHelper
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
