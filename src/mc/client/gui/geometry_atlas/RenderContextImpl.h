#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IRenderContext.h"
#include "mc/client/gui/geometry_atlas/RenderContextArgs.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IRenderContext.h"
#include "mc/client/gui/geometry_atlas/RenderContextArgs.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct ItemData; }
namespace GeometryAtlas { struct PaperDollData; }
namespace dragon::atlas { class IAtlasUserOperations; }
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderContextImpl : public ::GeometryAtlas::IRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::GeometryAtlas::RenderContextArgs> mArgs;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderContextImpl : public ::GeometryAtlas::IRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::GeometryAtlas::RenderContextArgs> mArgs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::dragon::atlas::IAtlasUserOperations& getFrontend() /*override*/;

    virtual bool
    renderItemToTile(::dragon::atlas::AtlasTileHandle const& tile, ::GeometryAtlas::ItemData const& data) /*override*/;

    virtual void renderDollToTile(
        ::dragon::atlas::AtlasTileHandle const& tile,
        ::GeometryAtlas::PaperDollData const&   data
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::dragon::atlas::IAtlasUserOperations& $getFrontend();

    MCAPI bool $renderItemToTile(::dragon::atlas::AtlasTileHandle const& tile, ::GeometryAtlas::ItemData const& data);

    MCAPI void
    $renderDollToTile(::dragon::atlas::AtlasTileHandle const& tile, ::GeometryAtlas::PaperDollData const& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RenderContextImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
