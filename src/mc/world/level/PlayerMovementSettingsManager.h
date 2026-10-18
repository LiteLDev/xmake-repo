#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16> mEntityRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>> mEntityRegistry;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerMovementSettingsManager();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerMovementSettingsManager(::gsl::not_null<StackRefResult<EntityRegistry>> const&);
#else // @header-generator platform
    MCAPI ::PlayerMovementSettings const& getPlayerMovementSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCNAPI void setPlayerMovementSettings(::PlayerMovementSettings const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<StackRefResult<EntityRegistry>> const&);
#else // @header-generator platform
    MCAPI void setPlayerMovementSettings(::PlayerMovementSettings const& settings);
#endif // @header-generator platform
    // NOLINTEND
};
