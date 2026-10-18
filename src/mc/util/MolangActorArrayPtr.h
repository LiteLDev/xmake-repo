#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct MolangActorArrayPtr {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Actor*>> mActors;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>> mActors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MolangActorArrayPtr();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MolangActorArrayPtr(::std::vector<::Actor*> actors);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::Actor*> actors);
    // NOLINTEND
#endif // @header-generator platform
};
