#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on

class EntityOptionalOwnerRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 32> mOwnedEntity;
    ::ll::UntypedStorage<1, 24> mWeakEntity;
    // NOLINTEND
};
