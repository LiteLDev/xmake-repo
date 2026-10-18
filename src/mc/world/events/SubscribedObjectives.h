#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class SubscribedObjectives {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>        mPlayer;
    ::ll::TypedStorage<8, 24, std::set<HashedString>> mObjectives;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>            mPlayer;
    ::ll::TypedStorage<8, 16, ::std::set<::HashedString>> mObjectives;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SubscribedObjectives& operator=(SubscribedObjectives const&);
    SubscribedObjectives(SubscribedObjectives const&);
    SubscribedObjectives();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addObjective(std::string const&);

    MCNAPI void removeObjective(std::string const&);
#else // @header-generator platform
    MCAPI void addObjective(::std::string const& objective);
#endif // @header-generator platform
    // NOLINTEND
};
