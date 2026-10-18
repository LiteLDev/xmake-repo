#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Scoreboard;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ResolveData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Actor*> const>      mActor;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Scoreboard*> const> mScoreboard;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk97b86c;
    ::ll::UntypedStorage<8, 8> mUnke64306;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ResolveData& operator=(ResolveData const&);
    ResolveData(ResolveData const&);
#endif // @header-generator platform
    ResolveData();
};
