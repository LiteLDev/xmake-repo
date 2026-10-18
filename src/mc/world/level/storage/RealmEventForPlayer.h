#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventId.h"

struct RealmEventForPlayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RealmEventId>     mRealmEventId;
    ::ll::TypedStorage<8, 24, std::string const> mPlayerXuid;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RealmEventId>       mRealmEventId;
    ::ll::TypedStorage<8, 32, ::std::string const> mPlayerXuid;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RealmEventForPlayer& operator=(RealmEventForPlayer const&);
    RealmEventForPlayer(RealmEventForPlayer const&);
    RealmEventForPlayer();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmEventForPlayer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
