#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class MapItemSavedData;
// clang-format on

struct MapInfoRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mMapId;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<uint, ushort>>> mClientPixels;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mMapId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, ushort>>> mClientPixels;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MapInfoRequestPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MapInfoRequestPacketPayload(::ActorUniqueID);

    MCNAPI MapInfoRequestPacketPayload(::ActorUniqueID, ::MapItemSavedData&);

    MCNAPI bool replaceServerPixels(::MapItemSavedData&) const;
#else // @header-generator platform
    MCAPI MapInfoRequestPacketPayload(::ActorUniqueID mapId, ::MapItemSavedData& map);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorUniqueID);

    MCNAPI void* $ctor(::ActorUniqueID, ::MapItemSavedData&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorUniqueID mapId, ::MapItemSavedData& map);
#endif // @header-generator platform
    // NOLINTEND
};
