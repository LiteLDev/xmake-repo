#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace OreUI { struct GeometryAtlasKnownTiles; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace OreUI { struct GeometryAtlasKnownTiles; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResourceHandlerKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::GeometryAtlasKnownTiles>> mKnownTiles;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Gameface::IResourceHandler>>     mHandler;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResourceHandlerKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::GeometryAtlasKnownTiles>> mKnownTiles;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::IResourceHandler>>     mHandler;
    // NOLINTEND
};
#else // @header-generator platform
struct ResourceHandlerKnownTiles {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
