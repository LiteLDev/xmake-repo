#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/actor/player/PlayerPartyInfo.h"
#include "mc/world/actor/player/ServerLocatorBar.h"
#include "mc/world/actor/player/VanillaWaypointManager.h"
#include "mc/world/inventory/InventoryMenu.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockActor;
class BlockPos;
class ChunkPos;
class ChunkSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class ContainerManagerModel;
class DataLoadHelper;
class EntityContext;
class FrameUpdateContextBase;
class IContainerManager;
class IPacketObserver;
class InventoryTransaction;
class ItemStack;
class ItemStackNetManagerServer;
class Level;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class ResolvedTextObject;
class ServerNetworkSystem;
class ServerPlayerEventCoordinator;
class TextObjectRoot;
class Vec3;
struct DimensionType;
struct INpcDialogueData;
struct KnockbackParameters;
struct PlayerAuthenticationInfo;
struct PlayerMovementSettings;
struct SyncedClientOptionsComponent;
struct SyncedClientOptionsUpdate;
struct VariantParameterList;
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace mce { class UUID; }
// clang-format on

class ServerPlayer : public ::Player {
public:
    // ServerPlayer inner types declare
    // clang-format off
    struct NearbyActor;
    // clang-format on

    // ServerPlayer inner types define
    struct NearbyActor {
    public:
        // NearbyActor inner types define
        enum class State : int {
            Unknown  = 0,
            New      = 1,
            Exist    = 2,
            DidExist = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                               isAutonomous;
        ::ll::TypedStorage<4, 4, ::ServerPlayer::NearbyActor::State> state;
        ::ll::TypedStorage<8, 8, ::Actor*>                           tempActor;
        // NOLINTEND
    };

    using OnPlayerLoadedCallback = std::function<void(ServerPlayer&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlatformType>                  mPlatformType;
    ::ll::TypedStorage<8, 24, std::string>                    mLanguageCode;
    ::ll::TypedStorage<8, 16, ::ServerNetworkSystem&>         mNetwork;
    ::ll::UntypedStorage<8, 48>                               mOnPlayerLoadedCallback;
    ::ll::TypedStorage<8, 112, ::InventoryMenu>               mInventoryMenu;
    ::ll::TypedStorage<1, 1, ::ContainerID>                   mContainerCounter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                mCloseContainerToken;
    ::ll::TypedStorage<4, 4, uint>                            mMaxChunkRadius;
    ::ll::TypedStorage<1, 1, bool>                            mIsInitialPlayerLoadHappening;
    ::ll::TypedStorage<1, 1, bool>                            mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>                            mLocalPlayerInitialized;
    ::ll::TypedStorage<1, 1, bool>                            mWaitingForTickingAreasPreload;
    ::ll::TypedStorage<8, 8, ::Tick>                          mPrevShieldBlockingTick;
    ::ll::TypedStorage<4, 4, uint>                            mClientViewRadius;
    ::ll::TypedStorage<4, 4, uint>                            mClientRequestedRadius;
    ::ll::TypedStorage<1, 1, bool>                            mIsCompatibleWithClientSideChunkGen;
    ::ll::TypedStorage<8, 40, std::optional<PlayerPartyInfo>> mPartyInfo;
    ::ll::TypedStorage<4, 4, int>                             mRemainingStructureRefreshTicks;
    ::ll::TypedStorage<8, 40, ::HashedString>                 mCurrentStructureFeature;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, ServerPlayer::NearbyActor>> mNearbyActors;
    ::ll::UntypedStorage<8, 8>                                                              mEditorServerPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::DDUI::DataStoreSyncServer>>           mDataStoreSync;
    ::ll::TypedStorage<1, 1, bool>                                                          mHasQueuedViewMove;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsPendingDisconnect;
    ::ll::TypedStorage<4, 52, std::array<HudVisibility, 13>>                                mHudElementsVisibilityState;
    ::ll::TypedStorage<8, 24, ::ServerLocatorBar>                                           mServerLocatorBar;
    ::ll::TypedStorage<8, 24, ::VanillaWaypointManager>                                     mVanillaWaypointManager;
    ::ll::UntypedStorage<8, 32>                                                             mPacketObserver;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerPlayer();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _serverInitItemStackIds();

    virtual void normalTick();

    virtual bool isValidTarget(::Actor*) const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot const, ::ItemStack const&);

    virtual void setOffhandSlot(::ItemStack const&);

    virtual bool load(::CompoundTag const&, ::DataLoadHelper&);

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual void changeDimension(::DimensionType);

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual bool swing(::ActorSwingSource);

    virtual void die(::ActorDamageSource const&);

    virtual void knockback(::Actor*, float, float, float, ::KnockbackParameters const&);

    virtual void aiStep();

    virtual void hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);

    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    virtual void sendArmorDamage(std::bitset<5> const);

    virtual void sendArmor(std::bitset<5> const);

    virtual void clearVanishEnchantedItemsOnDeath();

    virtual void sendInventory(bool);

    virtual void prepareRegion(::ChunkSource&);

    virtual void destroyRegion();

    virtual void changeDimensionWithCredits(::DimensionType);

    virtual void frameUpdate(::FrameUpdateContextBase&);

    virtual void moveView();

    virtual void moveSpawnView(::Vec3 const&, ::DimensionType);

    virtual void checkMovementStats(::Vec3 const&);

    virtual ::HashedString getCurrentStructureFeature() const;

    virtual void respawn();

    virtual void openPortfolio();

    virtual void openBook(int, bool, int, ::BlockActor*);

    virtual void openTrading(::ActorUniqueID const&, bool);

    virtual void openNpcInteractScreen(std::shared_ptr<INpcDialogueData>);

    virtual void openInventory();

    virtual void displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);

    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    virtual void displayTextObjectWhisperMessage(::ResolvedTextObject const&, std::string const&, std::string const&);

    virtual void displayWhisperMessage(std::string const&, std::string const&, std::optional<std::string> const, std::string const&, std::string const&);

    virtual void stopSleepInBed(bool, bool);

    virtual void openSign(::BlockPos const&, bool);

    virtual bool isLoading() const;

    virtual bool isPlayerInitialized() const;

    virtual void setPlayerGameType(::GameType);

    virtual void setContainerData(::IContainerManager&, int, int);

    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    virtual void refreshContainer(::IContainerManager&);

    virtual bool isActorRelevant(::Actor const&);

    virtual bool isTeacher() const;

    virtual void onSuspension();

    virtual void onLinkedSlotsChanged();

    virtual void sendInventoryTransaction(::InventoryTransaction const&) const;

    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;

    virtual void sendNetworkPacket(::Packet&) const;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator();

    virtual std::optional<PlayerPartyInfo> getPartyInfo_UNTRUSTED() const;

    virtual uchar getMaxChunkBuildRadius() const;

    virtual void addChunksToQueue(std::vector<ChunkPos> const&);

    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> getEditorPlayer() const;

    virtual void destroyEditorPlayer();

    virtual int _getSpawnChunkLimit() const;

    virtual void _updateChunkPublisherView(::Vec3 const&, float);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerPlayer(
        ::Level&,
        ::PacketSender&,
        ::ServerNetworkSystem&,
        ::ClientBlobCache::Server::ActiveTransfersManager&,
        ::GameType,
        bool,
        ::NetworkIdentifier const&,
        ::SubClientId const,
        std::function<void(ServerPlayer&)>,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        int,
        bool,
        ::EntityContext&,
        ::PlatformType,
        ::InputMode,
        ::SyncedClientOptionsComponent
    );

    MCNAPI void
        _logCDEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCNAPI ::ContainerID _nextContainerCounter();

    MCNAPI void _setContainerManagerModel(std::shared_ptr<ContainerManagerModel>);

    MCNAPI void addActorToReplicationList(::gsl::not_null<Actor*>, bool);

    MCNAPI void disconnect();

    MCNAPI void doDeleteContainerManager(bool);

    MCNAPI void doInitialSpawn();

    MCNAPI ::Bedrock::DDUI::DataStoreSyncServer& getDataStoreSync();

    MCNAPI bool getFilterProfanity() const;

    MCNAPI std::array<HudVisibility, 13> const& getHudVisibilityState() const;

    MCNAPI ::ItemStackNetManagerServer& getItemStackNetManagerServer();

    MCNAPI std::string getLanguageCode() const;

    MCNAPI int getMaxClientViewDistance() const;

    MCNAPI ::DeviceMemoryTier getMemoryTier() const;

    MCNAPI ::PlatformType getPlatformType() const;

    MCNAPI ::ServerLocatorBar& getServerLocatorBar();

    MCNAPI std::optional<int> getTextFilteringDebugTimeoutMilliSeconds() const;

    MCNAPI void handleActorPickRequestOnServer(::Actor&, bool const, bool const);

    MCNAPI void handleBlockPickRequestOnServer(::BlockPos const&, bool);

    MCNAPI void hideAllExcept(std::optional<std::vector<HudElement>> const&);

    MCNAPI void initiateContainerClose();

    MCNAPI bool isCompatibleWithClientSideChunkGen() const;

    MCNAPI bool isInPickRangeOf(::BlockPos const&) const;

    MCNAPI bool isPendingDisconnect() const;

    MCNAPI bool isShowingCredits() const;

    MCNAPI ::ContainerID
        openUnmanagedContainer(::SharedTypes::Legacy::ContainerType, std::variant<BlockPos, ActorUniqueID>);

    MCNAPI void postLoad(bool);

    MCNAPI void postReplicationTick(::Tick const&);

    MCNAPI void preReplicationTick(::Tick const&);

    MCNAPI bool selectItem(::ItemStack const&);

    MCNAPI void sendMobEffectPackets();

    MCNAPI void sendPlayerAuthInputReceivedEvent();

    MCNAPI void sendPlayerContainerClosedEvent();

    MCNAPI void
        sendPlayerContainerOpenedEvent(::SharedTypes::Legacy::ContainerType, std::variant<BlockPos, ActorUniqueID>);

    MCNAPI void setClientChunkRadius(uint, uchar);

    MCNAPI void setHudVisibilityState(::HudVisibility, std::optional<std::vector<HudElement>> const&);

    MCNAPI void setIsCompatibleWithClientSideChunkGen(bool);

    MCNAPI void setIsPendingDisconnect(bool);

    MCNAPI void setIsShowingCredits(bool);

    MCNAPI void setLanguageCode(std::string const&);

    MCNAPI void setLocalPlayerAsInitialized();

    MCNAPI void triggerRespawnFromCompletingTheEnd();

    MCNAPI void updateClientOptions(::SyncedClientOptionsUpdate const&);

    MCNAPI void updatePartyState(std::optional<PlayerPartyInfo>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ServerPlayer* tryGetFromEntity(::EntityContext&, bool const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> DefaultLanguageCode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Level&,
        ::PacketSender&,
        ::ServerNetworkSystem&,
        ::ClientBlobCache::Server::ActiveTransfersManager&,
        ::GameType,
        bool,
        ::NetworkIdentifier const&,
        ::SubClientId const,
        std::function<void(ServerPlayer&)>,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        int,
        bool,
        ::EntityContext&,
        ::PlatformType,
        ::InputMode,
        ::SyncedClientOptionsComponent
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
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $_serverInitItemStackIds();

    MCNAPI void $normalTick();

    MCNAPI bool $isValidTarget(::Actor*) const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot const, ::ItemStack const&);

    MCNAPI void $setOffhandSlot(::ItemStack const&);

    MCNAPI bool $load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $canChangeDimensionsUsingPortal() const;

    MCNAPI void $changeDimension(::DimensionType);

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI bool $swing(::ActorSwingSource);

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI void $knockback(::Actor*, float, float, float, ::KnockbackParameters const&);

    MCNAPI void $aiStep();

    MCNAPI void $hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);

    MCNAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    MCNAPI void $sendArmorDamage(std::bitset<5> const);

    MCNAPI void $sendArmor(std::bitset<5> const);

    MCNAPI void $clearVanishEnchantedItemsOnDeath();

    MCNAPI void $sendInventory(bool);

    MCNAPI void $prepareRegion(::ChunkSource&);

    MCNAPI void $destroyRegion();

    MCNAPI void $changeDimensionWithCredits(::DimensionType);

    MCNAPI void $frameUpdate(::FrameUpdateContextBase&);

    MCNAPI void $moveView();

    MCNAPI void $moveSpawnView(::Vec3 const&, ::DimensionType);

    MCNAPI void $checkMovementStats(::Vec3 const&);

    MCNAPI ::HashedString $getCurrentStructureFeature() const;

    MCNAPI void $respawn();

    MCNAPI void $openPortfolio();

    MCNAPI void $openBook(int, bool, int, ::BlockActor*);

    MCNAPI void $openTrading(::ActorUniqueID const&, bool);

    MCNAPI void $openNpcInteractScreen(std::shared_ptr<INpcDialogueData>);

    MCNAPI void $openInventory();

    MCNAPI void $displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);

    MCNAPI void $displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    MCNAPI void $displayTextObjectWhisperMessage(::ResolvedTextObject const&, std::string const&, std::string const&);

    MCNAPI void $displayWhisperMessage(
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&
    );

    MCNAPI void $stopSleepInBed(bool, bool);

    MCNAPI void $openSign(::BlockPos const&, bool);

    MCNAPI bool $isLoading() const;

    MCNAPI bool $isPlayerInitialized() const;

    MCNAPI void $setPlayerGameType(::GameType);

    MCNAPI void $setContainerData(::IContainerManager&, int, int);

    MCNAPI void $slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    MCNAPI void $refreshContainer(::IContainerManager&);

    MCNAPI bool $isActorRelevant(::Actor const&);

    MCNAPI bool $isTeacher() const;

    MCNAPI void $onSuspension();

    MCNAPI void $onLinkedSlotsChanged();

    MCNAPI void $sendInventoryTransaction(::InventoryTransaction const&) const;

    MCNAPI void $sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;

    MCNAPI void $sendNetworkPacket(::Packet&) const;

    MCNAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCNAPI std::optional<PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;

    MCNAPI uchar $getMaxChunkBuildRadius() const;

    MCNAPI void $addChunksToQueue(std::vector<ChunkPos> const&);

    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> $getEditorPlayer() const;

    MCNAPI void $destroyEditorPlayer();

    MCNAPI int $_getSpawnChunkLimit() const;

    MCNAPI void $_updateChunkPublisherView(::Vec3 const&, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
