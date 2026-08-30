#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/WorldID.h"

namespace World {

struct PendingPackActivation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>             worldID;
    ::ll::TypedStorage<8, 8, ::ContentType> contentType;
    ::ll::TypedStorage<8, 24, std::string>  packId;
    ::ll::TypedStorage<1, 1, bool>          isEduMode;
    ::ll::TypedStorage<1, 1, bool>          force;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingPackActivation& operator=(PendingPackActivation const&);
    PendingPackActivation(PendingPackActivation const&);
    PendingPackActivation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PendingPackActivation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
