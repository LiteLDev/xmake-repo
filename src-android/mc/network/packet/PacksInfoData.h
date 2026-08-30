#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/network/packet/PackInfoData.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

struct PacksInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                       mResourcePackRequired;
    ::ll::TypedStorage<1, 1, bool>                       mHasAddonPacks;
    ::ll::TypedStorage<1, 1, bool>                       mHasScripts;
    ::ll::TypedStorage<1, 1, bool>                       mForceDisableVibrantVisuals;
    ::ll::UntypedStorage<8, 48>                          mWorldTemplateIdAndVersion;
    ::ll::TypedStorage<8, 24, std::vector<PackInfoData>> mResourcePacks;
    // NOLINTEND

public:
    // prevent constructor by default
    PacksInfoData(PacksInfoData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unordered_map<ContentIdentity, std::string> collectKeys() const;

    MCNAPI ulong getRequiredResourcePackSize() const;

    MCNAPI ulong getResourcePackSize() const;

    MCNAPI ~PacksInfoData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
