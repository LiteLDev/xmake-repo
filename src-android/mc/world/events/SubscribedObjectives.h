#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class SubscribedObjectives {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>        mPlayer;
    ::ll::TypedStorage<8, 24, std::set<HashedString>> mObjectives;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscribedObjectives& operator=(SubscribedObjectives const&);
    SubscribedObjectives(SubscribedObjectives const&);
    SubscribedObjectives();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addObjective(std::string const&);

    MCNAPI void removeObjective(std::string const&);
    // NOLINTEND
};
