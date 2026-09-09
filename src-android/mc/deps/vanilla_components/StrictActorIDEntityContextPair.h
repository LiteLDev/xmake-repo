#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct StrictActorIDEntityContextPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mEntity;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mActorID;
    // NOLINTEND

public:
    // prevent constructor by default
    StrictActorIDEntityContextPair& operator=(StrictActorIDEntityContextPair const&);
};
