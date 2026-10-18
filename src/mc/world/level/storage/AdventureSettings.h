#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> noPvM;
    ::ll::TypedStorage<1, 1, bool> noMvP;
    ::ll::TypedStorage<1, 1, bool> immutableWorld;
    ::ll::TypedStorage<1, 1, bool> showNameTags;
    ::ll::TypedStorage<1, 1, bool> autoJump;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::AdventureSettings const&) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
