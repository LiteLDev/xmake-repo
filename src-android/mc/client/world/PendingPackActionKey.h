#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackAction.h"
#include "mc/client/world/WorldID.h"

namespace World {

struct PendingPackActionKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                   mWorldID;
    ::ll::TypedStorage<1, 1, ::World::PackAction> mPackAction;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingPackActionKey& operator=(PendingPackActionKey const&);
    PendingPackActionKey(PendingPackActionKey const&);
    PendingPackActionKey();
};

} // namespace World
