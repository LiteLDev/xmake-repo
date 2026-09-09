#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/EventCoordinatorManager.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
class ServerLevelEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerPlayerEventCoordinator;
// clang-format on

class ServerEventCoordinatorManager : public ::EventCoordinatorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mServerLevelEventCoordinator;
    ::ll::UntypedStorage<8, 16> mServerPlayerEventCoordinator;
    ::ll::UntypedStorage<8, 16> mServerNetworkEventCoordinator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerEventCoordinatorManager();

    virtual ::Bedrock::NonOwnerPointer<ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>> getLevelEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerEventCoordinatorManager();
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
    MCNAPI ::Bedrock::NonOwnerPointer<ServerPlayerEventCoordinator> $getServerPlayerEventCoordinator();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>> $getLevelEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<ServerLevelEventCoordinator> $getServerLevelEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<ServerNetworkEventCoordinator> $getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
