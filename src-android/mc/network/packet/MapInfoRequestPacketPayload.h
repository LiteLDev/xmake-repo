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
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mMapId;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<uint, ushort>>> mClientPixels;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MapInfoRequestPacketPayload(::ActorUniqueID);

    MCNAPI MapInfoRequestPacketPayload(::ActorUniqueID, ::MapItemSavedData&);

    MCNAPI bool replaceServerPixels(::MapItemSavedData&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorUniqueID);

    MCNAPI void* $ctor(::ActorUniqueID, ::MapItemSavedData&);
    // NOLINTEND
};
