#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AdventureSettings.h"

struct UpdateAdventureSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::AdventureSettings> mAdventureSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fillIn(::AdventureSettings&) const;
    // NOLINTEND
};
