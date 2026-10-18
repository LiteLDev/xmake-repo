#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ChangeDimensionRequest;
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
class DimensionManager;
class EntityContext;
class EntityRegistry;
class GameplayUserManager;
class ILevelCrashDumpManager;
#if defined(LL_PLAT_A) // @header-generator platform
class IPlayerDimensionTransferConnector;
#else // @header-generator platform
#endif // @header-generator platform
class IPlayerDimensionTransferer;
#if defined(LL_PLAT_A) // @header-generator platform
class PacketSender;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class PlayerLimboActorManager;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PlayerDimensionTransferManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerLimboActorManager> const> mPlayerLimboActorManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerDimensionTransferer>> const> mPlayerDimensionTransferer;
    ::ll::UntypedStorage<8, 24> mGameplayUserManager;
    ::ll::UntypedStorage<8, 24> mDimensionManager;
    ::ll::UntypedStorage<1, 16> mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelCrashDumpManager>> const> mLevelCrashDumpManager;
    ::ll::TypedStorage<1, 1, bool> mLevelFinishedInitializing;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerLimboActorManager> const> mPlayerLimboActorManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerDimensionTransferer>> const>
                                                                                          mPlayerDimensionTransferer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry> const>                          mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelCrashDumpManager>> const> mLevelCrashDumpManager;
    ::ll::TypedStorage<1, 1, bool>                             mLevelFinishedInitializing;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerDimensionTransferManager(
        std::unique_ptr<PlayerLimboActorManager>,
        std::unique_ptr<IPlayerDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        std::unique_ptr<ILevelCrashDumpManager>
#else // @header-generator platform
    MCAPI PlayerDimensionTransferManager(
        ::std::unique_ptr<::PlayerLimboActorManager>               playerLimboActorManager,
        ::std::unique_ptr<::IPlayerDimensionTransferer>            playerDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>          dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager>       gameplayUserManager,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::std::unique_ptr<::ILevelCrashDumpManager>                levelCrashDumpManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isPlayerSuspended(::Player const&) const;
#else // @header-generator platform
    MCAPI bool _isPlayerSuspended(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserRemoved(::EntityContext&);
#else // @header-generator platform
    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _playerChangeDimension(::Player&, ::ChangeDimensionRequest&);
#else // @header-generator platform
    MCAPI bool _playerChangeDimension(::Player& player, ::ChangeDimensionRequest& changeRequest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IPlayerDimensionTransferConnector& getPlayerDimensionTransferConnector();
#else // @header-generator platform
    MCAPI void handleChangeDimensionRequests();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleChangeDimensionRequests();
#else // @header-generator platform
    MCAPI void requestPlayerChangeDimension(::Player const& player, ::ChangeDimensionRequest&& changeRequest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadAllOwnedLimboActors();

    MCNAPI void requestPlayerChangeDimension(::Player const&, ::ChangeDimensionRequest&&);

    MCNAPI void setLevelFinishedInitializing();

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID, ::Actor&);

    MCNAPI ~PlayerDimensionTransferManager();
#else // @header-generator platform
    MCAPI ~PlayerDimensionTransferManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unique_ptr<PlayerLimboActorManager>,
        std::unique_ptr<IPlayerDimensionTransferer>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        ::gsl::not_null<StackRefResult<EntityRegistry>> const&,
        std::unique_ptr<ILevelCrashDumpManager>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::PlayerLimboActorManager>               playerLimboActorManager,
        ::std::unique_ptr<::IPlayerDimensionTransferer>            playerDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>          dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager>       gameplayUserManager,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::std::unique_ptr<::ILevelCrashDumpManager>                levelCrashDumpManager
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
