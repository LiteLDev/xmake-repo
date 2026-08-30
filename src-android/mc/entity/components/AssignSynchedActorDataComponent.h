#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SynchedActorData.h"

struct AssignSynchedActorDataComponent {
public:
    // AssignSynchedActorDataComponent inner types declare
    // clang-format off
    struct Args;
    // clang-format on

    // AssignSynchedActorDataComponent inner types define
    struct Args {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                     mItems;
        ::ll::TypedStorage<8, 16, std::optional<ulong>> mTargetFrame;
        // NOLINTEND

    public:
        // prevent constructor by default
        Args& operator=(Args const&);
        Args();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AssignSynchedActorDataComponent::Args>> mValuesToAssign;
    // NOLINTEND

public:
    // prevent constructor by default
    AssignSynchedActorDataComponent& operator=(AssignSynchedActorDataComponent const&);
};
