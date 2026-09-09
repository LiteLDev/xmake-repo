#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/EventCoordinatorManager.h"

// auto generated forward declare list
// clang-format off
class ClientLevelEventCoordinator;
class ClientPlayerEventCoordinator;
class LevelEventCoordinator;
class PlayerEventCoordinator;
// clang-format on

class ClientEventCoordinatorManager : public ::EventCoordinatorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mClientLevelEventCoordinator;
    ::ll::UntypedStorage<8, 16> mRemotePlayerEventCoordinator;
    ::ll::UntypedStorage<8, 16> mClientPlayerEventCoordinator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientEventCoordinatorManager();

    virtual ::Bedrock::NonOwnerPointer<PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>> getLevelEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientEventCoordinatorManager();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<PlayerEventCoordinator> $getRemotePlayerEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<ClientPlayerEventCoordinator> $getClientPlayerEventCoordinator();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>> $getLevelEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
