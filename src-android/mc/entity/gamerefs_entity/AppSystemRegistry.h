#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ITickingSystem;
struct TickingSystemRegistrationToken;
// clang-format on

class AppSystemRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>                                           mEntityRegistry;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<ITickingSystem>>> mTickingSystems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppSystemRegistry();

    MCNAPI ::StackRefResult<EntityRegistry> getEntityRegistry();

    MCNAPI void registerEvents();

    MCNAPI ::TickingSystemRegistrationToken registerTickingSystem(std::unique_ptr<ITickingSystem>);

    MCNAPI void tick();

    MCNAPI ~AppSystemRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
