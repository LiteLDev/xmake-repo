#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/external/render_dragon/frame_renderer/SortMode.h"

namespace dragon::framerenderer::modules::atlas {

struct TileDrawParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::drawutils::SortMode> mSortMode;
    ::ll::TypedStorage<8, 40, ::HashedString>                              mPassName;
    ::ll::TypedStorage<8, 24, std::string>                                 mPhaseName;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::atlas
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
