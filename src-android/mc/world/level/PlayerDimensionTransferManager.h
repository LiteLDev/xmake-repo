#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ChangeDimensionRequest;
class Dimension;
class DimensionManager;
class EntityContext;
class EntityRegistry;
class GameplayUserManager;
class ILevelCrashDumpManager;
class IPlayerDimensionTransferConnector;
class IPlayerDimensionTransferer;
class PacketSender;
class Player;
class PlayerLimboActorManager;
struct ActorUniqueID;
// clang-format on

class PlayerDimensionTransferManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerLimboActorManager> const> mPlayerLimboActorManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerDimensionTransferer>> const> mPlayerDimensionTransferer;
    ::ll::UntypedStorage<8, 24> mGameplayUserManager;
    ::ll::UntypedStorage<8, 24> mDimensionManager;
    ::ll::UntypedStorage<1, 16> mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelCrashDumpManager>> const> mLevelCrashDumpManager;
    ::ll::TypedStorage<1, 1, bool> mLevelFinishedInitializing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerDimensionTransferManager(
        std::unique_ptr<PlayerLimboActorManager>,
        std::unique_ptr<IPlayerDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        std::unique_ptr<ILevelCrashDumpManager>
    );

    MCNAPI bool _isPlayerSuspended(::Player const&) const;

    MCNAPI void _onGameplayUserRemoved(::EntityContext&);

    MCNAPI bool _playerChangeDimension(::Player&, ::ChangeDimensionRequest&);

    MCNAPI ::IPlayerDimensionTransferConnector& getPlayerDimensionTransferConnector();

    MCNAPI void handleChangeDimensionRequests();

    MCNAPI void loadAllOwnedLimboActors();

    MCNAPI void requestPlayerChangeDimension(::Player const&, ::ChangeDimensionRequest&&);

    MCNAPI void setLevelFinishedInitializing();

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID, ::Actor&);

    MCNAPI ~PlayerDimensionTransferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<PlayerLimboActorManager>,
        std::unique_ptr<IPlayerDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        std::unique_ptr<ILevelCrashDumpManager>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
