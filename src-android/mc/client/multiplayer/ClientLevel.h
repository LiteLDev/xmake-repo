#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
