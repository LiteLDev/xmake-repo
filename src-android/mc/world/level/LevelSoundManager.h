#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ServerSoundDefinitionRegistry.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/LevelSoundEventPacket.h"
#include "mc/world/level/ILevelSoundManagerConnector.h"
#include "mc/world/level/ServerSoundInstanceManager.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class IDimension;
class LevelEventCoordinator;
class PacketSender;
class Player;
class ResourcePackManager;
class ServerSoundHandle;
class ServerSoundInstance;
class SoundPlayerInterface;
class Vec3;
struct ClientboundUpdateSoundDataPacketPayload;
struct DimensionType;
struct PlaySoundOptions;
struct SoundEventIdentifier;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LevelSoundManager : public ::ILevelSoundManagerConnector {
public:
    // LevelSoundManager inner types declare
    // clang-format off
    struct QueuedSoundSendPacket;
    struct QueuedSoundBroadcastPacket;
    struct QueuedSoundBroadcastUserIdPacket;
    struct QueuedSoundBroadcastMultipleUserIdsPacket;
    // clang-format on

    // LevelSoundManager inner types define
    struct QueuedSoundSendPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 160> mPacket;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundSendPacket& operator=(QueuedSoundSendPacket const&);
        QueuedSoundSendPacket(QueuedSoundSendPacket const&);
        QueuedSoundSendPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundSendPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 160> mPacket;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundBroadcastPacket& operator=(QueuedSoundBroadcastPacket const&);
        QueuedSoundBroadcastPacket(QueuedSoundBroadcastPacket const&);
        QueuedSoundBroadcastPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundBroadcastPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastUserIdPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 160>                             mPacket;
        ::ll::TypedStorage<8, 184, ::NetworkIdentifierWithSubId> mNetworkId;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundBroadcastUserIdPacket& operator=(QueuedSoundBroadcastUserIdPacket const&);
        QueuedSoundBroadcastUserIdPacket(QueuedSoundBroadcastUserIdPacket const&);
        QueuedSoundBroadcastUserIdPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundBroadcastUserIdPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastMultipleUserIdsPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 160>                                       mPacket;
        ::ll::TypedStorage<8, 24, std::vector<NetworkIdentifierWithSubId>> mNetworkIds;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundBroadcastMultipleUserIdsPacket& operator=(QueuedSoundBroadcastMultipleUserIdsPacket const&);
        QueuedSoundBroadcastMultipleUserIdsPacket(QueuedSoundBroadcastMultipleUserIdsPacket const&);
        QueuedSoundBroadcastMultipleUserIdsPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundBroadcastMultipleUserIdsPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using QueuedSoundPacket = std::variant<
        LevelSoundManager::QueuedSoundSendPacket,
        LevelSoundManager::QueuedSoundBroadcastPacket,
        LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
        LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::ServerSoundDefinitionRegistry> mServerSoundDefinitionRegistry;
    ::ll::TypedStorage<8, 168, ::ServerSoundInstanceManager> mServerSoundInstanceManager;
    ::ll::UntypedStorage<8, 24> mSoundPlayer;
    ::ll::UntypedStorage<8, 24> mLevelPacketSender;
    ::ll::TypedStorage<1, 1, bool> mIsClientSide;
    ::ll::TypedStorage<1, 1, bool> mServerAuthSoundEnabled;
    ::ll::UntypedStorage<8, 24> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<LevelSoundManager::QueuedSoundSendPacket, LevelSoundManager::QueuedSoundBroadcastPacket, LevelSoundManager::QueuedSoundBroadcastUserIdPacket, LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket>>> mSoundPacketQueue;
    ::ll::UntypedStorage<8, 88> mOnLevelSoundEvent;
    ::ll::UntypedStorage<8, 88> mOnLevelSoundEventWithVolumeAndPitch;
    ::ll::UntypedStorage<8, 88> mOnStopLevelSoundEvent;
    ::ll::UntypedStorage<8, 88> mOnStopAllLevelSoundsEvent;
    ::ll::UntypedStorage<8, 88> mOnStopMusicEvent;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelSoundManager();

    virtual ::Bedrock::PubSub::Connector<void (const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool)>& getOnLevelSoundEventConnector();

    virtual ::Bedrock::PubSub::Connector<void (const PlaySoundOptions&)>& getOnLevelSoundEventWithVolumeAndPitchConnector();

    virtual ::Bedrock::PubSub::Connector<void (const std::string&)>& getOnStopLevelSoundEventConnector();

    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopAllLevelSoundsEventConnector();

    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopMusicEventConnector();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelSoundManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>>,
        bool
    );

    MCNAPI void broadcastSoundEvent(
        ::IDimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        ::Player*,
        std::optional<Vec3> const&
    );

    MCNAPI void broadcastSoundEvent(
        ::IDimension&,
        ::SoundEventIdentifier const&,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        ::Player*,
        std::optional<Vec3> const&
    );

    MCNAPI std::optional<ServerSoundInstance>
           createServerSoundInstance(std::string const&, int, std::optional<NetworkIdentifierWithSubId>);

    MCNAPI ::Bedrock::PubSub::Connector<void(ServerSoundHandle)>& getOnTrackedSoundCompletedConnector();

    MCNAPI ::ServerSoundDefinitionRegistry& getServerSoundDefinitionRegistry();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> getSoundPlayer() const;

    MCNAPI void handleUpdateSoundData(::ClientboundUpdateSoundDataPacketPayload const&);

    MCNAPI void loadServerSoundDefinitions(::cereal::ReflectionCtx const&, ::ResourcePackManager const&, bool);

    MCNAPI void playPredictiveSynchronizedSound(
        ::IDimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        ::Player*,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
    );

    MCNAPI void playPredictiveSynchronizedSound(
        ::IDimension&,
        ::SoundEventIdentifier const&,
        ::Vec3 const&,
        ::Player*,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
    );

    MCNAPI void playSound(::PlaySoundOptions const&);

    MCNAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, float const, float const);

    MCNAPI void
    playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool);

    MCNAPI void playSoundForPlayerInDimension(
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        ::Player*
    );

    MCNAPI void playSynchronizedSound_DEPRECATED(
        ::IDimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        ::Player*,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
    );

    MCNAPI void processQueuedSoundPackets();

    MCNAPI void stopAllSounds();

    MCNAPI void stopMusicEvent();

    MCNAPI void stopSoundEvent(std::string const&);

    MCNAPI void tickSounds(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>>,
        bool
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
    MCNAPI ::Bedrock::PubSub::Connector<
        void(const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool)>&
    $getOnLevelSoundEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const PlaySoundOptions&)>&
    $getOnLevelSoundEventWithVolumeAndPitchConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const std::string&)>& $getOnStopLevelSoundEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopAllLevelSoundsEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopMusicEventConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
