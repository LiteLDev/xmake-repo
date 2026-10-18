#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas {

struct AtlasConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, uint>         mAtlasWidth;
    ::ll::TypedStorage<4, 4, uint>         mAtlasHeight;
    ::ll::TypedStorage<4, 4, uint>         mPadding;
    ::ll::TypedStorage<4, 4, uint>         mMaxTileRendersPerFrame;
    // NOLINTEND
};

} // namespace dragon::atlas
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
