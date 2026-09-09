#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayerIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> xuid;
    ::ll::TypedStorage<8, 24, std::string> platformId;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerIdentifier(PlayerIdentifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
