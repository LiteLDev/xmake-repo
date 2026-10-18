#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayFabAccountInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> userId;
    ::ll::TypedStorage<8, 24, std::string> key;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabAccountInfo& operator=(PlayFabAccountInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayFabAccountInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
