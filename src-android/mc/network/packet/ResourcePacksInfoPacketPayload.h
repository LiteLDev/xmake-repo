#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/network/packet/PackInfoData.h"

// auto generated forward declare list
// clang-format off
struct PacksInfoData;
// clang-format on

struct ResourcePacksInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                       mResourcePackRequired;
    ::ll::TypedStorage<1, 1, bool>                       mHasAddonPacks;
    ::ll::TypedStorage<1, 1, bool>                       mHasScripts;
    ::ll::TypedStorage<1, 1, bool>                       mForceDisableVibrantVisuals;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>           mWorldTemplateIdAndVersion;
    ::ll::TypedStorage<8, 24, std::vector<PackInfoData>> mResourcePacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePacksInfoPacketPayload(bool, std::vector<PackInfoData>, bool, ::PackIdVersion const&, bool);

    MCNAPI ::PacksInfoData toPacksInfoData() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, std::vector<PackInfoData>, bool, ::PackIdVersion const&, bool);
    // NOLINTEND
};
