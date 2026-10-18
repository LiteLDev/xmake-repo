#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/multiplayer/BeforeLevelForLevelHoldingOwnership.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/PlayerSleepManager.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ArmorTrimIconGenerator;
class ArmorTrimUnloader;
class AtomicClientEntityManager;
class BlockSource;
class CameraRegistry;
class ChunkSource;
class ClientSubChunkLighter;
class DisplayActorManager;
class EntityContext;
class EntitySystems;
class Experiments;
class ISubChunkLighter;
class LevelChunk;
class LevelSettings;
class MapDataManager;
class NetworkIdentifier;
class ResourcePackManager;
class SerializedSkinRef;
class SubChunkManager;
class SubChunkPacket;
class SubChunkPacketHandler;
class SubChunkPos;
class SubChunkRequestManager;
class TickTimeManager;
class TickTimeManagerClient;
class TrustedSkinHelper;
class VolumeEntityManagerClient;
class WeakEntityRef;
class WorldClockRegistryClient;
struct ActorUniqueID;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct ClientLevelArguments;
struct DimensionType;
struct SubChunkChange;
struct Tick;
namespace GameModeExt { struct MessengerFactory; }
// clang-format on

class ClientLevel : public ::Level, public ::BeforeLevelForLevelHoldingOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                mTrustedSkinHelper;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<CameraRegistry>>> mCameraRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<EntitySystems>>>  mCameraSystems;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VolumeEntityManagerClient>>       mVolumeEntityManager;
    ::ll::UntypedStorage<1, 16>                                                mTickTimeManager;
    ::ll::UntypedStorage<8, 16>                                                mSubChunkManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mOnSubChunkLoaded;
    ::ll::UntypedStorage<8, 16>                                                mDisplayActorManager;
    ::ll::TypedStorage<8, 40, ::PlayerSleepManager>                            mPlayerSleepManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ArmorTrimIconGenerator>>          mArmorTrimIconGenerator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ArmorTrimUnloader>>               mArmorTrimUnloader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AtomicClientEntityManager>>       mAtomicClientEntityManager;
    ::ll::UntypedStorage<8, 16>                                                mMapDataManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientSubChunkLighter>>          mClientSubChunkLighter;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientLevel& operator=(ClientLevel const&);
    ClientLevel(ClientLevel const&);
    ClientLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientLevel();

    virtual bool initialize(std::string const&, ::LevelSettings const&, ::Experiments const&, std::string const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>);

    virtual void startLeaveGame();

    virtual ::Actor* addEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    virtual void removeDisplayEntity(::WeakEntityRef);

    virtual ::Bedrock::NonOwnerPointer<DisplayActorManager> getDisplayActorManager();

    virtual ::OwnerPtr<EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef);

    virtual ::OwnerPtr<EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&);

    virtual ::Tick const getCurrentServerTick() const;

    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const;

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    virtual ::Bedrock::NonOwnerPointer<SubChunkManager> getSubChunkManager();

    virtual ::ResourcePackManager* getClientResourcePackManager() const;

    virtual bool canUseSkin(::SerializedSkinRef const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const;

    virtual ::Bedrock::NonOwnerPointer<const TrustedSkinHelper> getTrustedSkinHelper() const;

    virtual std::weak_ptr<ISubChunkLighter> getSubChunkLighter() const;

    virtual void notifySubChunkRequestManager(::SubChunkPacket const&);

    virtual ::SubChunkRequestManager* getSubChunkRequestManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> getMapDataManager();

    virtual ::ClientLevel* asClientLevel();

    virtual ::Bedrock::NonOwnerPointer<CameraRegistry> getCameraRegistry();

    virtual ::Bedrock::NonOwnerPointer<const CameraRegistry> getCameraRegistry() const;

    virtual ::Bedrock::NonOwnerPointer<EntitySystems> getCameraSystems();

    virtual void subChunkTickAndSendRequests();

    virtual ::MapDataManager& _getMapDataManager();

    virtual ::TickTimeManager& _getTickTimeManager();

    virtual ::TickTimeManager const& _getTickTimeManager() const;

    virtual ::ArmorTrimUnloader* getArmorTrimUnloader();

    virtual ::PlayerSleepManager& getPlayerSleepManager();

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const;

    virtual void _subTick();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientLevel(::ClientLevelArguments&&);

    MCNAPI void _onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCNAPI void cameraTick();

    MCNAPI ::ArmorTrimIconGenerator& getArmorTrimIconGenerator();

    MCNAPI ::AtomicClientEntityManager* getAtomicClientEntityManager() const;

    MCNAPI std::weak_ptr<ClientSubChunkLighter> getClientSubChunkLighter() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientLevelArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $initialize(
        std::string const&,
        ::LevelSettings const&,
        ::Experiments const&,
        std::string const*,
        std::optional<std::reference_wrapper<
            std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>
    );

    MCNAPI void $startLeaveGame();

    MCNAPI ::Actor* $addEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* $addDisplayEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    MCNAPI void $removeDisplayEntity(::WeakEntityRef);

    MCNAPI ::Bedrock::NonOwnerPointer<DisplayActorManager> $getDisplayActorManager();

    MCNAPI ::OwnerPtr<EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef);

    MCNAPI ::OwnerPtr<EntityContext> $takeEntity(::WeakEntityRef, ::LevelChunk&);

    MCNAPI ::Tick const $getCurrentServerTick() const;

    MCNAPI ::GameModeExt::MessengerFactory $createMessengerFactory() const;

    MCNAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCNAPI ::Bedrock::NonOwnerPointer<SubChunkManager> $getSubChunkManager();

    MCNAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCNAPI bool $canUseSkin(::SerializedSkinRef const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<const TrustedSkinHelper> $getTrustedSkinHelper() const;

    MCNAPI std::weak_ptr<ISubChunkLighter> $getSubChunkLighter() const;

    MCNAPI void $notifySubChunkRequestManager(::SubChunkPacket const&);

    MCNAPI ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> $getMapDataManager();

    MCNAPI ::ClientLevel* $asClientLevel();

    MCNAPI ::Bedrock::NonOwnerPointer<CameraRegistry> $getCameraRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<const CameraRegistry> $getCameraRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<EntitySystems> $getCameraSystems();

    MCNAPI void $subChunkTickAndSendRequests();

    MCNAPI ::MapDataManager& $_getMapDataManager();

    MCNAPI ::TickTimeManager& $_getTickTimeManager();

    MCNAPI ::TickTimeManager const& $_getTickTimeManager() const;

    MCNAPI ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCNAPI ::PlayerSleepManager& $getPlayerSleepManager();

    MCNAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCNAPI void $_subTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/multiplayer/BeforeLevelForLevelHoldingOwnership.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/PlayerSleepManager.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ArmorTrimIconGenerator;
class ArmorTrimUnloader;
class AtomicClientEntityManager;
class BlockSource;
class CameraRegistry;
class ChunkSource;
class ClientSubChunkLighter;
class DisplayActorManager;
class EntityContext;
class EntitySystems;
class Experiments;
class ISubChunkLighter;
class LevelChunk;
class LevelSettings;
class MapDataManager;
class NetworkIdentifier;
class ResourcePackManager;
class SerializedSkinRef;
class SubChunkManager;
class SubChunkPacket;
class SubChunkRequestManager;
class TickTimeManager;
class TickTimeManagerClient;
class TrustedSkinHelper;
class VolumeEntityManagerClient;
class WeakEntityRef;
struct ActorUniqueID;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct ClientLevelArguments;
struct Tick;
namespace GameModeExt { struct MessengerFactory; }
// clang-format on

class ClientLevel : public ::Level, public ::BeforeLevelForLevelHoldingOwnership {
public:
    // ClientLevel inner types define
    using ActorIdMap = ::std::map<int, ::Actor*>;

    using ActorSet = ::std::set<::Actor*>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TrustedSkinHelper>>> mTrustedSkinHelper;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::CameraRegistry>>>  mCameraRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::EntitySystems>>>   mCameraSystems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VolumeEntityManagerClient>>        mVolumeEntityManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::TickTimeManagerClient>>> mTickTimeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::SubChunkManager>>> mSubChunkManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                   mOnSubChunkLoaded;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::DisplayActorManager>>>
                                                                             mDisplayActorManager;
    ::ll::TypedStorage<8, 40, ::PlayerSleepManager>                          mPlayerSleepManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ArmorTrimIconGenerator>>    mArmorTrimIconGenerator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ArmorTrimUnloader>>         mArmorTrimUnloader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AtomicClientEntityManager>> mAtomicClientEntityManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::MapDataManager>>> mMapDataManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientSubChunkLighter>>                       mClientSubChunkLighter;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientLevel& operator=(ClientLevel const&);
    ClientLevel(ClientLevel const&);
    ClientLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientLevel() /*override*/ = default;

    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;

    virtual ::Tick const getCurrentServerTick() const /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    virtual ::Actor* addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef) /*override*/;

    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc) /*override*/;

    virtual ::Actor* addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual void removeDisplayEntity(::WeakEntityRef entity) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() /*override*/;

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;

    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;

    virtual void notifySubChunkRequestManager(::SubChunkPacket const& packet) /*override*/;

    virtual ::SubChunkRequestManager* getSubChunkRequestManager() /*override*/;

    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() /*override*/;

    virtual bool canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const /*override*/;

    virtual ::ClientLevel* asClientLevel() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    virtual ::ArmorTrimUnloader* getArmorTrimUnloader() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const /*override*/;

    virtual void subChunkTickAndSendRequests() /*override*/;

    virtual ::std::weak_ptr<::ISubChunkLighter> getSubChunkLighter() const /*override*/;

    virtual ::TickTimeManager const& _getTickTimeManager() const /*override*/;

    virtual ::TickTimeManager& _getTickTimeManager() /*override*/;

    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    virtual void _subTick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientLevel(::ClientLevelArguments&& args);

    MCAPI void _onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCAPI void cameraTick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientLevelArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCAPI ::Tick const $getCurrentServerTick() const;

    MCAPI void $startLeaveGame();

    MCAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::OwnerPtr<::EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI ::OwnerPtr<::EntityContext> $takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc);

    MCAPI ::Actor* $addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI void $removeDisplayEntity(::WeakEntityRef entity);

    MCAPI ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCAPI ::PlayerSleepManager& $getPlayerSleepManager();

    MCAPI void $notifySubChunkRequestManager(::SubChunkPacket const& packet);

    MCAPI ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCAPI void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCAPI ::Bedrock::NonOwnerPointer<::SubChunkManager> $getSubChunkManager();

    MCAPI bool $canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCAPI ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> $getTrustedSkinHelper() const;

    MCFOLD ::ClientLevel* $asClientLevel();

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCAPI ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> $getMapDataManager();

    MCAPI ::GameModeExt::MessengerFactory $createMessengerFactory() const;

    MCAPI void $subChunkTickAndSendRequests();

    MCAPI ::std::weak_ptr<::ISubChunkLighter> $getSubChunkLighter() const;

    MCAPI ::TickTimeManager const& $_getTickTimeManager() const;

    MCAPI ::TickTimeManager& $_getTickTimeManager();

    MCAPI ::MapDataManager& $_getMapDataManager();

    MCAPI void $_subTick();
    // NOLINTEND
};
#else // @header-generator platform
class ClientLevel {};
#endif // @header-generator platform
#endif // @header-generator platform
