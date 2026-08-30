#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayerIDs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> primaryID;
    ::ll::TypedStorage<8, 24, std::string> secondaryID;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerIDs& operator=(PlayerIDs const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerIDs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
