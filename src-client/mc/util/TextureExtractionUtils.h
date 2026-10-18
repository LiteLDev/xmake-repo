#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ServerPBRTextureData;
struct SimpleTextureData;
// clang-format on

namespace TextureExtractionUtils {
// functions
// NOLINTBEGIN
MCNAPI ::ServerPBRTextureData extractServerTexture(
    ::SimpleTextureData const& texture0,
    ::SimpleTextureData const* texture1,
    ::SimpleTextureData const* texture2
);
// NOLINTEND

} // namespace TextureExtractionUtils
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
