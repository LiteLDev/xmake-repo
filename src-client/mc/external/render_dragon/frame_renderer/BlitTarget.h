#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::framerenderer::drawcommands {

struct BlitTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource*>       mTexture;
    ::ll::TypedStorage<1, 1, uchar>                                    mMip;
    ::ll::TypedStorage<2, 4, ::glm::vec<2, ushort, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<1, 1, uchar>                                    mDepth;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawcommands
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
