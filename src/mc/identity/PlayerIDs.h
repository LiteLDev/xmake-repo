#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayerIDs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> primaryID;
    ::ll::TypedStorage<8, 24, std::string> secondaryID;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkdfe99d;
    ::ll::UntypedStorage<8, 32> mUnkd4b5d1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerIDs& operator=(PlayerIDs const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PlayerIDs(PlayerIDs const&);
    PlayerIDs();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerIDs();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~PlayerIDs();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social
