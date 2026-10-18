#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/ItemData.h"
#include "mc/client/gui/geometry_atlas/PaperDollData.h"
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct TileHandleSharedState; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/ItemData.h"
#include "mc/client/gui/geometry_atlas/PaperDollData.h"
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct TileHandleSharedState; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct InsertTilePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::GeometryAtlas::TileDefinition>                                     mDefinition;
    ::ll::TypedStorage<8, 40, std::variant<GeometryAtlas::ItemData, GeometryAtlas::PaperDollData>> mInitialState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::TileHandleSharedState>>               mShared;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct InsertTilePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::GeometryAtlas::TileDefinition>                                           mDefinition;
    ::ll::TypedStorage<8, 40, ::std::variant<::GeometryAtlas::ItemData, ::GeometryAtlas::PaperDollData>> mInitialState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::TileHandleSharedState>>                 mShared;
    // NOLINTEND
};
#else // @header-generator platform
struct InsertTilePayload {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
