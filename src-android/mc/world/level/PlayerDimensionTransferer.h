#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
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
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayerDimensionTransferer();

    virtual ::Bedrock::PubSub::Connector<void (DimensionType)>& getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();

    virtual ::Bedrock::PubSub::Connector<void ()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();

    virtual void playerSaveLimboActors(::Player&, ::ChangeDimensionRequest&, ::Dimension&, ::PlayerLimboActorManager*);

    virtual void playerDestroyRemotePlayers(::GameplayUserManager&);

    virtual void playerStartChangeDimensionSuspendRegion(::Player&, ::DimensionType);

    virtual void setTransitionLocation(::Player&, ::ChangeDimensionRequest&, ::Dimension&);

    virtual void syncTransitionComponentTargetPosition(::Player&, ::ChangeDimensionRequest const&);

    virtual void playerDestroyRegion(::Player&, ::ChangeDimensionRequest const&);

    virtual void playerPrepareRegion(::Player&, ::ChangeDimensionRequest const&, ::Dimension const&);

    virtual bool playerWaitForServer(::Player&, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>);

    virtual bool playerWaitForDimensionTransitionSystem(::Player const&, ::EntityRegistry&);

    virtual void sendClientRespawnMovePacketFromServer(::Player const&, ::ChangeDimensionRequest&);

    virtual bool waitForSubChunks(::Player&, ::Dimension const&);

    virtual void startWaitForRespawn(::Player const&);

    virtual void playerSwitchDimension(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);

    virtual bool doRespawnIfReady(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);

    virtual void setPacketSender(::PacketSender&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerDimensionTransferer(
        std::unique_ptr<IPlayerDimensionTransferProxy>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>,
        std::unique_ptr<ISharedSpawnGetter>,
        ::Bedrock::NonOwnerPointer<LevelStorage>,
        ::Bedrock::NonOwnerPointer<LoadingScreenIdManager>
    );

    MCNAPI void _finalizeDimensionChange(::Player&, ::ChangeDimensionRequest const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<IPlayerDimensionTransferProxy>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PortalForcer>>,
        std::unique_ptr<ISharedSpawnGetter>,
        ::Bedrock::NonOwnerPointer<LevelStorage>,
        ::Bedrock::NonOwnerPointer<LoadingScreenIdManager>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
    );

    MCNAPI bool $playerWaitForDimensionTransitionSystem(::Player const&, ::EntityRegistry&);

    MCNAPI void $sendClientRespawnMovePacketFromServer(::Player const&, ::ChangeDimensionRequest&);

    MCNAPI bool $waitForSubChunks(::Player&, ::Dimension const&);

    MCNAPI void $startWaitForRespawn(::Player const&);

    MCNAPI void $playerSwitchDimension(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);

    MCNAPI bool $doRespawnIfReady(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*);

    MCNAPI void $setPacketSender(::PacketSender&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
