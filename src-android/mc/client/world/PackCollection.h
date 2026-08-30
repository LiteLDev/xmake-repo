#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/PackDetails.h"

namespace World {

struct PackCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentType>                    mContentType;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mActive;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mGlobal;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mAvailable;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mRealms;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mUnowned;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCollection(PackCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::World::PackCollection& operator=(::World::PackCollection const&);

    MCNAPI ::World::PackCollection& operator=(::World::PackCollection&&);

    MCNAPI ~PackCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
