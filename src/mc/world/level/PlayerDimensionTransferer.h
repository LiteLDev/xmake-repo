#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/IPlayerDimensionTransferer.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
class Dimension;
class EntityRegistry;
class GameplayUserManager;
class IPlayerDimensionTransferProxy;
class ISharedSpawnGetter;
class LevelStorage;
class LoadingScreenIdManager;
class PacketSender;
class Player;
class PlayerLimboActorManager;
class PortalForcer;
struct AddLimboActorHelper;
struct DimensionType;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PlayerDimensionTransferer : public ::IPlayerDimensionTransferer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerDimensionTransferProxy>> const> mPlayerDimensionTransferProxy;
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::UntypedStorage<8, 24> mPortalForcer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ISharedSpawnGetter>> const> mSharedSpawnGetter;
    ::ll::UntypedStorage<8, 24> mLevelStorage;
    ::ll::UntypedStorage<8, 24> mLoadingScreenIdManager;
    ::ll::UntypedStorage<8, 24> mPacketSender;
    ::ll::UntypedStorage<8, 88> mOnAnyPlayerChangeDimensionPreSuspendRegion;
    ::ll::UntypedStorage<8, 88> mOnAnyPlayerChangeDimensionPrepareRegionComplete;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerDimensionTransferProxy>> const>
                                                                                   mPlayerDimensionTransferProxy;
    ::ll::TypedStorage<1, 1, bool const>                                           mIsClientSide;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PortalForcer> const> mPortalForcer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ISharedSpawnGetter>> const> mSharedSpawnGetter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelStorage> const>              mLevelStorage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> const>    mLoadingScreenIdManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                    mPacketSender;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::DimensionType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnAnyPlayerChangeDimensionPreSuspendRegion;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnAnyPlayerChangeDimensionPrepareRegionComplete;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PlayerDimensionTransferer();
#else // @header-generator platform
    virtual ~PlayerDimensionTransferer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (DimensionType)>& getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();
#else // @header-generator platform
    virtual void playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void ()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();
#else // @header-generator platform
    virtual void playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerSaveLimboActors(::Player&, ::ChangeDimensionRequest&, ::Dimension&, ::PlayerLimboActorManager*);
#else // @header-generator platform
    virtual void playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerDestroyRemotePlayers(::GameplayUserManager&);
#else // @header-generator platform
    virtual void setTransitionLocation(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::Dimension&              toDimension
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerStartChangeDimensionSuspendRegion(::Player&, ::DimensionType);
#else // @header-generator platform
    virtual void
    syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTransitionLocation(::Player&, ::ChangeDimensionRequest&, ::Dimension&);
#else // @header-generator platform
    virtual void playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void syncTransitionComponentTargetPosition(::Player&, ::ChangeDimensionRequest const&);
#else // @header-generator platform
    virtual void playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerDestroyRegion(::Player&, ::ChangeDimensionRequest const&);
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerPrepareRegion(::Player&, ::ChangeDimensionRequest const&, ::Dimension const&);
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>&
    getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool playerWaitForServer(::Player&, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>);
#else // @header-generator platform
    virtual bool
    playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool playerWaitForDimensionTransitionSystem(::Player const&, ::EntityRegistry&);
#else // @header-generator platform
    virtual bool
    playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendClientRespawnMovePacketFromServer(::Player const&, ::ChangeDimensionRequest&);
#else // @header-generator platform
    virtual void
    sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool waitForSubChunks(::Player&, ::Dimension const&);
#else // @header-generator platform
    virtual bool waitForSubChunks(::Player& player, ::Dimension const& toDimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startWaitForRespawn(::Player const&);
#else // @header-generator platform
    virtual void startWaitForRespawn(::Player const& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerSwitchDimension(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);
#else // @header-generator platform
    virtual void playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool doRespawnIfReady(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);
#else // @header-generator platform
    virtual bool doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPacketSender(::PacketSender&);
    // clang-format on
#else // @header-generator platform
    virtual void setPacketSender(::PacketSender& packetSender) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerDimensionTransferer(
        std::unique_ptr<IPlayerDimensionTransferProxy>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>,
        std::unique_ptr<ISharedSpawnGetter>,
        ::Bedrock::NonOwnerPointer<LevelStorage>,
        ::Bedrock::NonOwnerPointer<LoadingScreenIdManager>
#else // @header-generator platform
    MCAPI PlayerDimensionTransferer(
        ::std::unique_ptr<::IPlayerDimensionTransferProxy>   playerDimensionTransferProxy,
        bool                                                 isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>        portalForcer,
        ::std::unique_ptr<::ISharedSpawnGetter>              sharedSpawnGetter,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> loadingScreenIdManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalizeDimensionChange(::Player&, ::ChangeDimensionRequest const&);
#else // @header-generator platform
    MCAPI void _finalizeDimensionChange(::Player& player, ::ChangeDimensionRequest const& changeRequest);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unique_ptr<IPlayerDimensionTransferProxy>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>,
        std::unique_ptr<ISharedSpawnGetter>,
        ::Bedrock::NonOwnerPointer<LevelStorage>,
        ::Bedrock::NonOwnerPointer<LoadingScreenIdManager>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::IPlayerDimensionTransferProxy>   playerDimensionTransferProxy,
        bool                                                 isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>        portalForcer,
        ::std::unique_ptr<::ISharedSpawnGetter>              sharedSpawnGetter,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> loadingScreenIdManager
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(DimensionType)>& $getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();

    MCNAPI void $playerSaveLimboActors(::Player&, ::ChangeDimensionRequest&, ::Dimension&, ::PlayerLimboActorManager*);

    MCNAPI void $playerDestroyRemotePlayers(::GameplayUserManager&);

    MCNAPI void $playerStartChangeDimensionSuspendRegion(::Player&, ::DimensionType);

    MCNAPI void $setTransitionLocation(::Player&, ::ChangeDimensionRequest&, ::Dimension&);

    MCNAPI void $syncTransitionComponentTargetPosition(::Player&, ::ChangeDimensionRequest const&);

    MCNAPI void $playerDestroyRegion(::Player&, ::ChangeDimensionRequest const&);

    MCNAPI void $playerPrepareRegion(::Player&, ::ChangeDimensionRequest const&, ::Dimension const&);

    MCNAPI bool $playerWaitForServer(
        ::Player&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
#else // @header-generator platform
    MCAPI void $playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $playerWaitForDimensionTransitionSystem(::Player const&, ::EntityRegistry&);
#else // @header-generator platform
    MCAPI void $playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendClientRespawnMovePacketFromServer(::Player const&, ::ChangeDimensionRequest&);
#else // @header-generator platform
    MCAPI void $playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $waitForSubChunks(::Player&, ::Dimension const&);
#else // @header-generator platform
    MCAPI void
    $setTransitionLocation(::Player& player, ::ChangeDimensionRequest& changeRequest, ::Dimension& toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startWaitForRespawn(::Player const&);
#else // @header-generator platform
    MCAPI void $syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerSwitchDimension(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);
#else // @header-generator platform
    MCAPI void $playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $doRespawnIfReady(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);
#else // @header-generator platform
    MCAPI void $playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPacketSender(::PacketSender&);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    $getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();

    MCAPI bool $playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime);

    MCAPI bool $playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry);

    MCAPI void $sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest);

    MCAPI bool $waitForSubChunks(::Player& player, ::Dimension const& toDimension);

    MCAPI void $startWaitForRespawn(::Player const& player);

    MCAPI void $playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    );

    MCAPI bool $doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    );

    MCAPI void $setPacketSender(::PacketSender& packetSender);


#endif // @header-generator platform
    // NOLINTEND
};
