#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TextureAtlasItemTextureSetTranslation;
namespace mce::framebuilder { struct PBRTextureDataDescription; }
// clang-format on

namespace TextureAtlasHelpers {
// functions
// NOLINTBEGIN
MCNAPI ::mce::framebuilder::PBRTextureDataDescription getPBRTextureDataDescription(
    ::TextureAtlasItemTextureSetTranslation const& translation,
    ::glm::vec4 const&                             fallbackMERS,
    ushort                                         colorMipCount
);
// NOLINTEND

} // namespace TextureAtlasHelpers
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
