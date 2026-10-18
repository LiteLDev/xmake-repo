#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ServerSoundDefinitionRegistry.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/LevelSoundEventPacket.h"
#include "mc/world/level/ILevelSoundManagerConnector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/ServerSoundDefinitionRegistry.h"
#endif // @header-generator platform
#include "mc/world/level/ServerSoundInstanceManager.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class IDimension;
class LevelEventCoordinator;
class PacketSender;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePackManager;
class ServerSoundHandle;
#else // @header-generator platform
#endif // @header-generator platform
class ServerSoundInstance;
class SoundPlayerInterface;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ClientboundUpdateSoundDataPacketPayload;
struct DimensionType;
#else // @header-generator platform
#endif // @header-generator platform
struct PlaySoundOptions;
struct SoundEventIdentifier;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelSoundManager : public ::ILevelSoundManagerConnector {
public:
    // LevelSoundManager inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueuedSoundSendPacket;
#else // @header-generator platform
    struct QueuedSoundBroadcastMultipleUserIdsPacket;
#endif // @header-generator platform
    struct QueuedSoundBroadcastPacket;
    struct QueuedSoundBroadcastUserIdPacket;
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueuedSoundBroadcastMultipleUserIdsPacket;
#else // @header-generator platform
    struct QueuedSoundSendPacket;
#endif // @header-generator platform
    // clang-format on

    // LevelSoundManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueuedSoundSendPacket {
#else // @header-generator platform
    struct QueuedSoundBroadcastMultipleUserIdsPacket {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket>                    mPacket;
        ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>> mNetworkIds;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct QueuedSoundBroadcastPacket {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket> mPacket;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct QueuedSoundBroadcastUserIdPacket {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 160>                             mPacket;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket>      mPacket;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 184, ::NetworkIdentifierWithSubId> mNetworkId;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct QueuedSoundBroadcastMultipleUserIdsPacket {
#else // @header-generator platform
    struct QueuedSoundSendPacket {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket> mPacket;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using QueuedSoundPacket = std::variant<
        LevelSoundManager::QueuedSoundSendPacket,
        LevelSoundManager::QueuedSoundBroadcastPacket,
        LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
        LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket>;
#else // @header-generator platform
    using QueuedSoundPacket = ::std::variant<
        ::LevelSoundManager::QueuedSoundSendPacket,
        ::LevelSoundManager::QueuedSoundBroadcastPacket,
        ::LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
        ::LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ServerSoundDefinitionRegistry>                    mServerSoundDefinitionRegistry;
    ::ll::TypedStorage<8, 200, ::ServerSoundInstanceManager>                      mServerSoundInstanceManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SoundPlayerInterface>> mSoundPlayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender>>      mLevelPacketSender;
    ::ll::TypedStorage<1, 1, bool>                                                mIsClientSide;
    ::ll::TypedStorage<1, 1, bool>                                                mServerAuthSoundEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const> mLevelEventCoordinator;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::LevelSoundManager::QueuedSoundSendPacket,
            ::LevelSoundManager::QueuedSoundBroadcastPacket,
            ::LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
            ::LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket>>>
        mSoundPacketQueue;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::SoundEventIdentifier const&, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnLevelSoundEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::PlaySoundOptions const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnLevelSoundEventWithVolumeAndPitch;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStopLevelSoundEvent;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStopAllLevelSoundsEvent;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStopMusicEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LevelSoundManager();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<
        void(::SoundEventIdentifier const&, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    getOnLevelSoundEventConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool)>& getOnLevelSoundEventConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::PlaySoundOptions const&)>&
    getOnLevelSoundEventWithVolumeAndPitchConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const PlaySoundOptions&)>& getOnLevelSoundEventWithVolumeAndPitchConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::std::string const&)>& getOnStopLevelSoundEventConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const std::string&)>& getOnStopLevelSoundEventConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopAllLevelSoundsEventConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopAllLevelSoundsEventConnector();

    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopMusicEventConnector();
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopMusicEventConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelSoundManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>>,
        bool
#else // @header-generator platform
    MCAPI LevelSoundManager(
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>  soundPlayer,
        bool                                                   isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>          packetSender,
        bool                                                   isServerAuthSoundEnabled
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastSoundEvent(
        ::IDimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        ::Player*,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI void _queueSoundPacket(
        ::std::variant<
            ::LevelSoundManager::QueuedSoundSendPacket,
            ::LevelSoundManager::QueuedSoundBroadcastPacket,
            ::LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
            ::LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket> packet
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastSoundEvent(
        ::IDimension&,
        ::SoundEventIdentifier const&,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        ::Player*,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI void broadcastSoundEvent(
        ::IDimension&                  dimension,
        ::SoundEventIdentifier const&  soundEvent,
        ::Vec3 const&                  pos,
        int                            data,
        ::ActorSoundIdentifier const&  actorSoundIdentifier,
        bool                           isGlobal,
        ::Player*                      primaryLocalPlayer,
        ::std::optional<::Vec3> const& fireAtPosition
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void broadcastSoundEvent(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::Player*                              primaryLocalPlayer,
        ::std::optional<::Vec3> const&         fireAtPosition
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void playPredictiveSynchronizedSound(
        ::IDimension&,
        ::SoundEventIdentifier const&,
        ::Vec3 const&,
        ::Player*,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI ::std::optional<::ServerSoundInstance> createServerSoundInstance(
        ::std::string const&                          soundEventName,
        int                                           loopCount,
        ::std::optional<::NetworkIdentifierWithSubId> recipient
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void playPredictiveSynchronizedSound(
        ::IDimension&                  dimension,
        ::SoundEventIdentifier const&  soundEvent,
        ::Vec3 const&                  pos,
        ::Player*                      targetPlayer,
        int                            data,
        ::ActorSoundIdentifier const&  actorSoundIdentifier,
        bool                           isGlobal,
        ::std::optional<::Vec3> const& fireAtPosition
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void playSynchronizedSound_DEPRECATED(
        ::IDimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        ::Player*,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI void playPredictiveSynchronizedSound(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              targetPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void processQueuedSoundPackets();

    MCNAPI void stopAllSounds();

    MCNAPI void stopMusicEvent();

    MCNAPI void stopSoundEvent(std::string const&);

    MCNAPI void tickSounds(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
#else // @header-generator platform
    MCAPI void playSynchronizedSound_DEPRECATED(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              primaryLocalPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>>,
        bool,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>>,
        bool
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>  soundPlayer,
        bool                                                   isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>          packetSender,
        bool                                                   isServerAuthSoundEnabled
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
    MCNAPI ::Bedrock::PubSub::Connector<
        void(const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool)>&
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<
        void(::SoundEventIdentifier const&, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
#endif // @header-generator platform
    $getOnLevelSoundEventConnector();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(const PlaySoundOptions&)>&
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::PlaySoundOptions const&)>&
#endif // @header-generator platform
    $getOnLevelSoundEventWithVolumeAndPitchConnector();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(const std::string&)>& $getOnStopLevelSoundEventConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::std::string const&)>& $getOnStopLevelSoundEventConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopAllLevelSoundsEventConnector();
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnStopAllLevelSoundsEventConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopMusicEventConnector();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopMusicEventConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
