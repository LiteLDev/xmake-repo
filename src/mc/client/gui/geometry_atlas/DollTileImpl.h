#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/BaseTileImpl.h"
#include "mc/client/gui/geometry_atlas/IPaperDollTile.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/BaseTileImpl.h"
#include "mc/client/gui/geometry_atlas/IPaperDollTile.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct PaperDollPayload; }
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class DollTileImpl : public ::GeometryAtlas::IPaperDollTile, public ::GeometryAtlas::BaseTileImpl {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DollTileImpl : public ::GeometryAtlas::IPaperDollTile, public ::GeometryAtlas::BaseTileImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void submitUpdate(::GeometryAtlas::PaperDollPayload&& payload) /*override*/;

    virtual uint getUserID() const /*override*/;

    virtual ::dragon::atlas::AtlasTileHandle getBackendID() const /*override*/;

    virtual bool isInitialized() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $submitUpdate(::GeometryAtlas::PaperDollPayload&& payload);

    MCFOLD uint $getUserID() const;

    MCAPI ::dragon::atlas::AtlasTileHandle $getBackendID() const;

    MCAPI bool $isInitialized() const;
    // NOLINTEND
};
#else // @header-generator platform
class DollTileImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
