#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class EntitySystems;
class PauseManager;
// clang-format on

class EntitySystemsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<EntitySystems>> mEntitySystems;
    ::ll::TypedStorage<1, 1, bool const>                     mIsClientSide;
    ::ll::UntypedStorage<1, 7>                               mSubClientId;
    ::ll::UntypedStorage<1, 16>                              mEntityRegistry;
    ::ll::UntypedStorage<1, 16>                              mPauseManager;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntitySystemsManager(
        bool,
        ::SubClientId,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<StackRefResult<PauseManager>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        bool,
        ::SubClientId,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<StackRefResult<PauseManager>> const&
    );
    // NOLINTEND
};
