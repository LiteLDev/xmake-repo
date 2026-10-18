#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IAtlasTile.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IAtlasTile.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct PaperDollPayload; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class IPaperDollTile : public ::GeometryAtlas::IAtlasTile {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IPaperDollTile : public ::GeometryAtlas::IAtlasTile {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollTile() /*override*/ = default;

    virtual void submitUpdate(::GeometryAtlas::PaperDollPayload&& payload) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPaperDollTile {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
