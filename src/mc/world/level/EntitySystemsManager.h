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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<EntitySystems>> mEntitySystems;
    ::ll::TypedStorage<1, 1, bool const>                     mIsClientSide;
    ::ll::UntypedStorage<1, 7>                               mSubClientId;
    ::ll::UntypedStorage<1, 16>                              mEntityRegistry;
    ::ll::UntypedStorage<1, 16>                              mPauseManager;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EntitySystems>> mEntitySystems;
    ::ll::TypedStorage<1, 1, bool const>                         mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId const>                mSubClientId;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>>       mEntityRegistry;
    ::ll::TypedStorage<8, 16, ::WeakRef<::PauseManager>>         mPauseManager;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemsManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EntitySystemsManager(
        bool,
        ::SubClientId,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<StackRefResult<PauseManager>> const&
#else // @header-generator platform
    MCAPI EntitySystemsManager(
        bool                                                       isClientSide,
        ::SubClientId                                              subClientId,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::gsl::not_null<::StackRefResult<::PauseManager>> const&   pauseManager
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCAPI void tickEntitySystems();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        bool,
        ::SubClientId,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        ::gsl::not_null<StackRefResult<PauseManager>> const&
#else // @header-generator platform
    MCAPI void* $ctor(
        bool                                                       isClientSide,
        ::SubClientId                                              subClientId,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::gsl::not_null<::StackRefResult<::PauseManager>> const&   pauseManager
#endif // @header-generator platform
    );
    // NOLINTEND
};
