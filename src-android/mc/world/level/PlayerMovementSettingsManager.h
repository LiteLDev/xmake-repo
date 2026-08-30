#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct PlayerMovementSettings;
// clang-format on

class PlayerMovementSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mEntityRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMovementSettingsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerMovementSettingsManager(::gsl::not_null<StackRefResult<EntityRegistry>> const&);

    MCNAPI ::PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCNAPI void setPlayerMovementSettings(::PlayerMovementSettings const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<StackRefResult<EntityRegistry>> const&);
    // NOLINTEND
};
