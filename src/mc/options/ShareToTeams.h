#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShareToTeams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         enabled;
    ::ll::TypedStorage<8, 24, std::string> openWorldUrl;
    ::ll::TypedStorage<1, 1, bool>         manageShareEnabled;
    ::ll::TypedStorage<1, 1, bool>         joinCodeShareEnabled;
    ::ll::TypedStorage<8, 24, std::string> joinWorldUrl;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkba749a;
    ::ll::UntypedStorage<8, 32> mUnkd41dd8;
    ::ll::UntypedStorage<1, 1>  mUnkede9d2;
    ::ll::UntypedStorage<1, 1>  mUnk8bf7b9;
    ::ll::UntypedStorage<8, 32> mUnk410d87;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ShareToTeams& operator=(ShareToTeams const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ShareToTeams(ShareToTeams const&);
#endif // @header-generator platform
    ShareToTeams();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ShareToTeams& operator=(::ShareToTeams&&);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
