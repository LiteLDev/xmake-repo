#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#endif // @header-generator platform
#include "mc/common/SubClientId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/platform/PlatformType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deviceinfo/DeviceMemoryTier.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class FrameUpdateContextBase;
#else // @header-generator platform
#endif // @header-generator platform
class IContainerManager;
class IPacketObserver;
class InventoryTransaction;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackNetManagerServer;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class ResolvedTextObject;
class ServerNetworkSystem;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerPlayerEventCoordinator;
#else // @header-generator platform
#endif // @header-generator platform
class TextObjectRoot;
class Vec3;
struct DimensionType;
struct INpcDialogueData;
struct KnockbackParameters;
struct PlayerAuthenticationInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerMovementSettings;
#else // @header-generator platform
#endif // @header-generator platform
struct SyncedClientOptionsComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct SyncedClientOptionsUpdate;
#else // @header-generator platform
#endif // @header-generator platform
struct VariantParameterList;
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
#endif // @header-generator platform
namespace mce { class UUID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class FrameUpdateContextBase;
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    using OnPlayerLoadedCallback = std::function<void(ServerPlayer&)>;
#else // @header-generator platform
    using OnPlayerLoadedCallback = ::std::function<void(::ServerPlayer&)>;

public:
    LLNDAPI static ServerPlayer* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::PlatformType>                          mPlatformType;
    ::ll::TypedStorage<8, 32, ::std::string>                          mLanguageCode;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&>                  mNetwork;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ServerPlayer&)>> mOnPlayerLoadedCallback;
    ::ll::TypedStorage<8, 112, ::InventoryMenu>                       mInventoryMenu;
    ::ll::TypedStorage<1, 1, ::ContainerID>                           mContainerCounter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                        mCloseContainerToken;
    ::ll::TypedStorage<4, 4, uint>                                    mMaxChunkRadius;
    ::ll::TypedStorage<1, 1, bool>                                    mIsInitialPlayerLoadHappening;
    ::ll::TypedStorage<1, 1, bool>                                    mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>                                    mLocalPlayerInitialized;
    ::ll::TypedStorage<1, 1, bool>                                    mWaitingForTickingAreasPreload;
    ::ll::TypedStorage<8, 8, ::Tick>                                  mPrevShieldBlockingTick;
    ::ll::TypedStorage<4, 4, uint>                                    mClientViewRadius;
    ::ll::TypedStorage<4, 4, uint>                                    mClientRequestedRadius;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCompatibleWithClientSideChunkGen;
    ::ll::TypedStorage<8, 48, ::std::optional<::PlayerPartyInfo>>     mPartyInfo;
    ::ll::TypedStorage<4, 4, int>                                     mRemainingStructureRefreshTicks;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mCurrentStructureFeature;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ServerPlayer::NearbyActor>> mNearbyActors;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorPlayer>>                          mEditorServerPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::DDUI::DataStoreSyncServer>>             mDataStoreSync;
    ::ll::TypedStorage<1, 1, bool>                                                                mHasQueuedViewMove;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsPendingDisconnect;
    ::ll::TypedStorage<4, 52, ::std::array<::HudVisibility, 13>>             mHudElementsVisibilityState;
    ::ll::TypedStorage<8, 24, ::ServerLocatorBar>                            mServerLocatorBar;
    ::ll::TypedStorage<8, 24, ::VanillaWaypointManager>                      mVanillaWaypointManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IPacketObserver>> mPacketObserver;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerPlayer();
#else // @header-generator platform
    virtual ~ServerPlayer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _serverInitItemStackIds();
#else // @header-generator platform
    virtual void aiStep() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void normalTick();
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidTarget(::Actor*) const;
#else // @header-generator platform
    virtual void
    knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    virtual void die(::ActorDamageSource const& source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot const, ::ItemStack const&);
#else // @header-generator platform
    virtual void moveView() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOffhandSlot(::ItemStack const&);
#else // @header-generator platform
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canChangeDimensionsUsingPortal() const;
#else // @header-generator platform
    virtual bool isValidTarget(::Actor* attacker) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void changeDimension(::DimensionType);
#else // @header-generator platform
    virtual bool swing(::ActorSwingSource swingSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID getControllingPlayer() const;
#else // @header-generator platform
    virtual void
    hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool swing(::ActorSwingSource);
#else // @header-generator platform
    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void die(::ActorDamageSource const&);
#else // @header-generator platform
    virtual void sendArmor(::std::bitset<5> const armorSlots) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void knockback(::Actor*, float, float, float, ::KnockbackParameters const&);
#else // @header-generator platform
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void aiStep();
#else // @header-generator platform
    virtual void sendInventory(bool shouldSelectSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);
#else // @header-generator platform
    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);
#else // @header-generator platform
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendArmorDamage(std::bitset<5> const);
#else // @header-generator platform
    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendArmor(std::bitset<5> const);
#else // @header-generator platform
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearVanishEnchantedItemsOnDeath();
#else // @header-generator platform
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& textObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendInventory(bool);
#else // @header-generator platform
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void prepareRegion(::ChunkSource&);
#else // @header-generator platform
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroyRegion();
#else // @header-generator platform
    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void changeDimensionWithCredits(::DimensionType);
#else // @header-generator platform
    virtual void openPortfolio() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void frameUpdate(::FrameUpdateContextBase&);
#else // @header-generator platform
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveView();
#else // @header-generator platform
    virtual void openInventory() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveSpawnView(::Vec3 const&, ::DimensionType);
#else // @header-generator platform
    virtual void openBook(int, bool, int, ::BlockActor* lectern) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkMovementStats(::Vec3 const&);
#else // @header-generator platform
    virtual void openSign(::BlockPos const& position, bool isFrontSide) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HashedString getCurrentStructureFeature() const;
#else // @header-generator platform
    virtual void checkMovementStats(::Vec3 const& d) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void respawn();
#else // @header-generator platform
    virtual ::HashedString getCurrentStructureFeature() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openPortfolio();
#else // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openBook(int, bool, int, ::BlockActor*);
#else // @header-generator platform
    virtual void setContainerData(::IContainerManager& menu, int id, int value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openTrading(::ActorUniqueID const&, bool);
#else // @header-generator platform
    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openNpcInteractScreen(std::shared_ptr<INpcDialogueData>);
#else // @header-generator platform
    virtual void refreshContainer(::IContainerManager& menu) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openInventory();
#else // @header-generator platform
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot const armorSlot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayTextObjectWhisperMessage(::ResolvedTextObject const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::optional<std::string> const, std::string const&, std::string const&);
#else // @header-generator platform
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopSleepInBed(bool, bool);
#else // @header-generator platform
    virtual void changeDimension(::DimensionType toId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openSign(::BlockPos const&, bool);
#else // @header-generator platform
    virtual void changeDimensionWithCredits(::DimensionType dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLoading() const;
#else // @header-generator platform
    virtual void setPlayerGameType(::GameType gameType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayerInitialized() const;
#else // @header-generator platform
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlayerGameType(::GameType);
#else // @header-generator platform
    virtual bool isActorRelevant(::Actor const& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerData(::IContainerManager&, int, int);
#else // @header-generator platform
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void destroyRegion() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshContainer(::IContainerManager&);
#else // @header-generator platform
    virtual void onSuspension() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isActorRelevant(::Actor const&);
#else // @header-generator platform
    virtual void onLinkedSlotsChanged() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTeacher() const;
#else // @header-generator platform
    virtual bool isTeacher() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSuspension();
#else // @header-generator platform
    virtual bool isLoading() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLinkedSlotsChanged();
#else // @header-generator platform
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const;
#else // @header-generator platform
    virtual bool isPlayerInitialized() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;
#else // @header-generator platform
    virtual void respawn() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendNetworkPacket(::Packet&) const;
#else // @header-generator platform
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator();
#else // @header-generator platform
    virtual void destroyEditorPlayer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<PlayerPartyInfo> getPartyInfo_UNTRUSTED() const;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar getMaxChunkBuildRadius() const;
#else // @header-generator platform
    virtual uchar getMaxChunkBuildRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addChunksToQueue(std::vector<ChunkPos> const&);
#else // @header-generator platform
    virtual ::std::optional<::PlayerPartyInfo> getPartyInfo_UNTRUSTED() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> getEditorPlayer() const;

    virtual void destroyEditorPlayer();
#else // @header-generator platform
    virtual void addChunksToQueue(::std::vector<::ChunkPos> const& chunkPostions) /*override*/;
#endif // @header-generator platform

    virtual int _getSpawnChunkLimit() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _updateChunkPublisherView(::Vec3 const&, float);
    // clang-format on
#else // @header-generator platform
    virtual void _updateChunkPublisherView(::Vec3 const& position, float minDistance);

    virtual void _serverInitItemStackIds() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ServerPlayer(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        bool                                               isHostingPlayer,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             onPlayerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::PlatformType                                     platformType,
        ::InputMode                                        inputMode,
        ::SyncedClientOptionsComponent                     clientOptions
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
        _logCDEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);
#else // @header-generator platform
    MCAPI void _logCDEvent(
        ::CrashDumpLogStringID option1,
        ::CrashDumpLogStringID option2,
        ::CrashDumpLogStringID option3,
        ::CrashDumpLogStringID option4
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerID _nextContainerCounter();
#else // @header-generator platform
    MCAPI void _removeNearbyEntities();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setContainerManagerModel(std::shared_ptr<ContainerManagerModel>);
#else // @header-generator platform
    MCAPI void _setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> menu);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addActorToReplicationList(::gsl::not_null<Actor*>, bool);
#else // @header-generator platform
    MCAPI void addActorToReplicationList(::gsl::not_null<::Actor*> actor, bool autonomous);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disconnect();
#else // @header-generator platform
    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void doDeleteContainerManager(bool);
#else // @header-generator platform
    MCAPI void disconnect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void doInitialSpawn();
#else // @header-generator platform
    MCAPI void doDeleteContainerManager(bool forceDisconnect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::DDUI::DataStoreSyncServer& getDataStoreSync();
#else // @header-generator platform
    MCAPI void doInitialSpawn();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getFilterProfanity() const;
#else // @header-generator platform
    MCAPI ::std::string getLanguageCode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::array<HudVisibility, 13> const& getHudVisibilityState() const;
#else // @header-generator platform
    MCAPI void handleActorPickRequestOnServer(::Actor& target, bool withData, bool isActorAgentAndEduMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetManagerServer& getItemStackNetManagerServer();
#else // @header-generator platform
    MCAPI void handleBlockPickRequestOnServer(::BlockPos const& position, bool withData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getLanguageCode() const;
#else // @header-generator platform
    MCAPI void hideAllExcept(::std::optional<::std::vector<::HudElement>> const& hudElements);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getMaxClientViewDistance() const;
#else // @header-generator platform
    MCAPI void initiateContainerClose();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DeviceMemoryTier getMemoryTier() const;
#else // @header-generator platform
    MCAPI bool isInPickRangeOf(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlatformType getPlatformType() const;
#else // @header-generator platform
    MCAPI ::ContainerID openUnmanagedContainer(
        ::SharedTypes::Legacy::ContainerType        containerType,
        ::std::variant<::BlockPos, ::ActorUniqueID> owner
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerLocatorBar& getServerLocatorBar();
#else // @header-generator platform
    MCAPI void postReplicationTick(::Tick const& currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<int> getTextFilteringDebugTimeoutMilliSeconds() const;
#else // @header-generator platform
    MCAPI void preReplicationTick(::Tick const& currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleActorPickRequestOnServer(::Actor&, bool const, bool const);
#else // @header-generator platform
    MCAPI bool selectItem(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleBlockPickRequestOnServer(::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI void sendPlayerContainerClosedEvent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void hideAllExcept(std::optional<std::vector<HudElement>> const&);
#else // @header-generator platform
    MCAPI void sendPlayerContainerOpenedEvent(
        ::SharedTypes::Legacy::ContainerType        type,
        ::std::variant<::BlockPos, ::ActorUniqueID> owner
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initiateContainerClose();
#else // @header-generator platform
    MCAPI void setClientChunkRadius(uint requestedRadius, uchar clientMaxChunkRadius);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCompatibleWithClientSideChunkGen() const;
#else // @header-generator platform
    MCAPI void setHudVisibilityState(
        ::HudVisibility                                     hudVisibility,
        ::std::optional<::std::vector<::HudElement>> const& hudElements
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void updatePartyState(::std::optional<::PlayerPartyInfo> partyInfo);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        bool                                               isHostingPlayer,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             onPlayerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::PlatformType                                     platformType,
        ::InputMode                                        inputMode,
        ::SyncedClientOptionsComponent                     clientOptions
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_serverInitItemStackIds();
#else // @header-generator platform
    MCAPI void $aiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidTarget(::Actor*) const;
#else // @header-generator platform
    MCAPI void $knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot const, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void $moveView();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOffhandSlot(::ItemStack const&);
#else // @header-generator platform
    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $load(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCFOLD void $frameUpdate(::FrameUpdateContextBase&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangeDimensionsUsingPortal() const;
#else // @header-generator platform
    MCAPI bool $isValidTarget(::Actor* attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $changeDimension(::DimensionType);
#else // @header-generator platform
    MCAPI bool $swing(::ActorSwingSource swingSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getControllingPlayer() const;
#else // @header-generator platform
    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $swing(::ActorSwingSource);
#else // @header-generator platform
    MCAPI void $sendArmorDamage(::std::bitset<5> const damagedSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $knockback(::Actor*, float, float, float, ::KnockbackParameters const&);
#else // @header-generator platform
    MCAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $aiStep();
#else // @header-generator platform
    MCAPI void $sendInventory(bool shouldSelectSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtArmorSlots(::ActorDamageSource const&, int, std::bitset<5> const);
#else // @header-generator platform
    MCAPI void $sendInventoryTransaction(::InventoryTransaction const& transaction) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void $sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendArmorDamage(std::bitset<5> const);
#else // @header-generator platform
    MCAPI void $sendNetworkPacket(::Packet& packet) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopSleepInBed(bool, bool);
#else // @header-generator platform
    MCAPI void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& textObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $openSign(::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLoading() const;
#else // @header-generator platform
    MCAPI void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPlayerInitialized() const;
#else // @header-generator platform
    MCAPI void $openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPlayerGameType(::GameType);
#else // @header-generator platform
    MCFOLD void $openPortfolio();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerData(::IContainerManager&, int, int);
#else // @header-generator platform
    MCFOLD void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $openInventory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshContainer(::IContainerManager&);
#else // @header-generator platform
    MCAPI void $openBook(int, bool, int, ::BlockActor* lectern);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isActorRelevant(::Actor const&);
#else // @header-generator platform
    MCAPI void $openSign(::BlockPos const& position, bool isFrontSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTeacher() const;
#else // @header-generator platform
    MCAPI void $checkMovementStats(::Vec3 const& d);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSuspension();
#else // @header-generator platform
    MCAPI ::HashedString $getCurrentStructureFeature() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLinkedSlotsChanged();
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent id, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendInventoryTransaction(::InventoryTransaction const&) const;
#else // @header-generator platform
    MCAPI void $setContainerData(::IContainerManager& menu, int id, int value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;
#else // @header-generator platform
    MCAPI void $slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendNetworkPacket(::Packet&) const;
#else // @header-generator platform
    MCAPI void $refreshContainer(::IContainerManager& menu);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();
#else // @header-generator platform
    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;
#else // @header-generator platform
    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot const armorSlot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getMaxChunkBuildRadius() const;
#else // @header-generator platform
    MCAPI void $setOffhandSlot(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addChunksToQueue(std::vector<ChunkPos> const&);
#else // @header-generator platform
    MCAPI void $clearVanishEnchantedItemsOnDeath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> $getEditorPlayer() const;
#else // @header-generator platform
    MCAPI bool $canChangeDimensionsUsingPortal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroyEditorPlayer();
#else // @header-generator platform
    MCAPI void $changeDimension(::DimensionType toId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $_getSpawnChunkLimit() const;
#else // @header-generator platform
    MCAPI void $changeDimensionWithCredits(::DimensionType dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_updateChunkPublisherView(::Vec3 const&, float);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $setPlayerGameType(::GameType gameType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI bool $isActorRelevant(::Actor const& actor);

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI void $destroyRegion();

    MCAPI void $onSuspension();

    MCAPI void $onLinkedSlotsChanged();

    MCAPI bool $isTeacher() const;

    MCAPI bool $isLoading() const;

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $isPlayerInitialized() const;

    MCAPI void $respawn();

    MCAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCAPI void $destroyEditorPlayer();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getEditorPlayer() const;

    MCAPI uchar $getMaxChunkBuildRadius() const;

    MCAPI ::std::optional<::PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;

    MCAPI void $addChunksToQueue(::std::vector<::ChunkPos> const& chunkPostions);

    MCAPI int $_getSpawnChunkLimit() const;

    MCAPI void $_updateChunkPublisherView(::Vec3 const& position, float minDistance);

    MCAPI void $_serverInitItemStackIds();


#endif // @header-generator platform
    // NOLINTEND
};
