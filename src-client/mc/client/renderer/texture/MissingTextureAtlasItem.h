#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TextureAtlasItem;
struct TextureAtlasItemTextureSetTranslation;
// clang-format on

namespace MissingTextureAtlasItem {
// static variables
// NOLINTBEGIN
MCNAPI ::TextureAtlasItem const& missingTextureItem();

MCNAPI ::TextureAtlasItemTextureSetTranslation const& missingTextureSetTranslation();
// NOLINTEND

} // namespace MissingTextureAtlasItem
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
