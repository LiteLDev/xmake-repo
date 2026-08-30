#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/SyncedClientOptionsUpdate.h"

struct UpdateClientOptionsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, ::SyncedClientOptionsUpdate> mUpdate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UpdateClientOptionsPacketPayload(::SyncedClientOptionsUpdate const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SyncedClientOptionsUpdate const&);
    // NOLINTEND
};
