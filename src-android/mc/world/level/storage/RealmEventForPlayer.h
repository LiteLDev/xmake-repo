#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventId.h"

struct RealmEventForPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RealmEventId>     mRealmEventId;
    ::ll::TypedStorage<8, 24, std::string const> mPlayerXuid;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEventForPlayer& operator=(RealmEventForPlayer const&);
    RealmEventForPlayer(RealmEventForPlayer const&);
    RealmEventForPlayer();
};
