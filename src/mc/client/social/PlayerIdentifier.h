#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct PlayerIdentifier {};
#endif // @header-generator platform

} // namespace Social
