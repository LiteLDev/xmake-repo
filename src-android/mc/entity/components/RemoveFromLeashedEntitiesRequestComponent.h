#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/brstd/flat_set.h"

struct RemoveFromLeashedEntitiesRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLeashedEntities;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveFromLeashedEntitiesRequestComponent& operator=(RemoveFromLeashedEntitiesRequestComponent const&);
};
