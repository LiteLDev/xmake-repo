#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
class IRenderContext {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRenderContext() = default;

    virtual ::dragon::atlas::IAtlasUserOperations& getFrontend() = 0;

    virtual bool
    renderItemToTile(::dragon::atlas::AtlasTileHandle const& tile, ::GeometryAtlas::ItemData const& data) = 0;

    virtual void
    renderDollToTile(::dragon::atlas::AtlasTileHandle const& tile, ::GeometryAtlas::PaperDollData const& data) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
