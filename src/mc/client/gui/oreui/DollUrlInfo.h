#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct DollUrlInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::GeometryAtlas::TileDefinition>                                  mDefinition;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<GeometryAtlas::PaperDollHandle>>> mDoll;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DollUrlInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::GeometryAtlas::TileDefinition>                                      mDefinition;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::PaperDollHandle>>> mDoll;
    // NOLINTEND
};
#else // @header-generator platform
struct DollUrlInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
