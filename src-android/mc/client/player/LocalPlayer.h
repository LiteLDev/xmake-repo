#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/world/actor/player/ClientLocatorBar.h"
#include "mc/common/Brightness.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/Side.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/network/packet/PlayerRespawnState.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/inventory/InventoryMenu.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/chunk/NetworkChunkSubscriber.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorHurtResult;
class BlockActor;
class BlockSource;
class ChalkboardBlockActor;
class ChangeDimensionPacket;
class ChunkPos;
class ChunkSource;
class ClientPlayerEventCoordinator;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class DataLoadHelper;
class Dimension;
class EntityContext;
class FrameUpdateContext;
class FrameUpdateContextBase;
class HitResult;
class IClientInstance;
class IContainerManager;
class IMinecraftEventing;
class IPacketObserver;
class ISparseContainerSetListener;
class InventoryTransaction;
class ItemStackNetManagerClient;
class LayeredAbilities;
class Level;
class MobEffectInstance;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerAutomationObserver;
class PlayerEventCoordinator;
class SubChunkPos;
class SubChunkRequestSubscriber;
class TextObjectRoot;
class Vec2;
struct ActorUniqueID;
struct ArmorSlotAndDamagePair;
struct DimensionType;
struct FurnaceOptions;
struct HurtParameters;
struct INpcDialogueData;
struct InventoryOptions;
struct LegacySetSlot;
struct PlayerAuthenticationInfo;
struct Tick;
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

class LocalPlayer : public ::Player {
public:
    // LocalPlayer inner types declare
    // clang-format off
    class EmoteExpediateData;
    class UndergroundTelemetryHeuristic;
    class FellFromWorldHeightAchievementTracker;
    struct ContainerCloseInfo;
    class RegionListener;
    // clang-format on

    // LocalPlayer inner types define
    class EmoteExpediateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, long> mEmoteButtonDownStartTime;
        ::ll::TypedStorage<1, 1, bool> mIsExpediateSelectionActive;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void emoteButtonEntered();

        MCNAPI long getEmoteButtonDownStartTime() const;

        MCNAPI bool getIsExpediateSelectionActive() const;

        MCNAPI void reset();

        MCNAPI void setIsExpediateSelectionActive(bool);
        // NOLINTEND
    };

    class UndergroundTelemetryHeuristic {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>         mIsUndergroundCurrentTick;
        ::ll::TypedStorage<1, 1, bool>         mWasUndergroundPreviousTick;
        ::ll::TypedStorage<1, 1, bool>         mForceInitialEventingPropertyUpdate;
        ::ll::TypedStorage<4, 12, ::BlockPos>  mPreviousBlockPos;
        ::ll::TypedStorage<1, 1, ::Brightness> mPreviousNaturalLightLevel;
        // NOLINTEND
    };

    class FellFromWorldHeightAchievementTracker {
    public:
        // FellFromWorldHeightAchievementTracker inner types define
        enum class FallState : uchar {
            Falling             = 0,
            TickCheckAliveTicks = 1,
            CheckForAlive       = 2,
            Done                = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::LocalPlayer::FellFromWorldHeightAchievementTracker::FallState> mState;
        ::ll::TypedStorage<4, 4, int>                                                             mCheckAliveTicks;
        ::ll::TypedStorage<1, 1, bool>                                                            mHasSentAchievement;
        // NOLINTEND
    };

    struct ContainerCloseInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerTypeToClose;
        ::ll::TypedStorage<1, 1, bool>                                 mShouldCloseContainerScreen;
        // NOLINTEND
    };

    class RegionListener {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~RegionListener() = default;

        virtual void onRegionDestroyed() = 0;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 112, ::InventoryMenu> mInventoryMenu;
    ::ll::TypedStorage<4, 4, float> mPortalEffectTime;
    ::ll::TypedStorage<4, 4, float> mOPortalEffectTime;
    ::ll::TypedStorage<8, 16, ::LocalPlayer::EmoteExpediateData> mEmoteExpediateData;
    ::ll::TypedStorage<4, 20, ::LocalPlayer::UndergroundTelemetryHeuristic> mUndergroundTelemetryHeuristic;
    ::ll::TypedStorage<4, 12, ::LocalPlayer::FellFromWorldHeightAchievementTracker> mFellFromWorldHeightAchievementTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLowMemorySubscription;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<4, 4, int> mCanCloseScreenOnHurtAfterTime;
    ::ll::TypedStorage<4, 12, ::Vec3> mlastFrameDelta;
    ::ll::TypedStorage<1, 1, bool> mEnablePortalEffect;
    ::ll::TypedStorage<8, 152, ::ItemStack> mSentOffhandItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mSentInventoryItem;
    ::ll::TypedStorage<4, 4, int> mSentSelectedSlot;
    ::ll::TypedStorage<1, 2, ::LocalPlayer::ContainerCloseInfo> mContainerCloseInfo;
    ::ll::TypedStorage<8, 48, ::ClientLocatorBar> mClientLocatorBar;
    ::ll::TypedStorage<8, 8, ulong> mSessionTickCount;
    ::ll::TypedStorage<8, 24, std::vector<LocalPlayer::RegionListener*>> mRegionListeners;
    ::ll::TypedStorage<1, 1, bool> mDamagedByMobThisFrame;
    ::ll::TypedStorage<1, 1, bool> mIsTeacher;
    ::ll::TypedStorage<1, 1, bool> mHasBeenInitialized;
    ::ll::TypedStorage<1, 1, bool> mPrevTransitionBlocking;
    ::ll::TypedStorage<8, 24, std::string> mInventorySearchString;
    ::ll::TypedStorage<8, 24, std::string> mFurnaceSearchString;
    ::ll::TypedStorage<8, 24, std::string> mBlastFurnaceSearchString;
    ::ll::TypedStorage<8, 24, std::string> mSmokerSearchString;
    ::ll::TypedStorage<8, 40, std::unordered_set<mce::UUID>> mAllSentEmotePieceIds;
    ::ll::TypedStorage<8, 40, ::HashedString> mCurrentStructureFeature;
    ::ll::TypedStorage<8, 152, ::ItemStack> mItemActivationItem;
    ::ll::TypedStorage<4, 4, int> mItemActivationTicks;
    ::ll::TypedStorage<4, 4, float> mItemActivationOffsetX;
    ::ll::TypedStorage<4, 4, float> mItemActivationOffsetY;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerAutomationObserver>> mAutomationObserver;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubChunkRequestSubscriber>> mSubChunkSubscriber;
    ::ll::TypedStorage<4, 4, uint> mTickingAreaChunkIndexToCheckForRequests;
    ::ll::TypedStorage<8, 32, ::NetworkChunkSubscriber> mChunkSubscriberView;
    ::ll::TypedStorage<1, 1, ::PlayerRespawnState> mClientRespawnState;
    ::ll::TypedStorage<4, 12, ::Vec3> mClientRespawnPotentialPosition;
    ::ll::TypedStorage<4, 4, int> mRenderChunkRadiusLowMemoryWatermark;
    ::ll::TypedStorage<8, 24, std::string> mLastDeathInfo;
    ::ll::UntypedStorage<8, 8> mEditorClientPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::DDUI::DataStoreSyncClient>> mDataStoreSync;
    ::ll::TypedStorage<4, 4, float> mCurrentExpCache;
    ::ll::TypedStorage<4, 4, int> mCurrentLevelCache;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastLevelChangedTimePoint;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastXPContainerClosedTimePoint;
    ::ll::TypedStorage<1, 1, bool> mPreparedMainChunkSource;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mVisibleTouchJoystickLockSubscription;
    ::ll::UntypedStorage<8, 40> mClientPlayerGameTypePublisher;
    ::ll::UntypedStorage<8, 40> mLocalPlayerDeathPublisher;
    ::ll::UntypedStorage<8, 40> mLocalPlayerRespawnPublisher;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayer& operator=(LocalPlayer const&);
    LocalPlayer(LocalPlayer const&);
    LocalPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LocalPlayer();

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void resetUserPos(::ActorResetRule);

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual void normalTick();

    virtual bool startRiding(::Actor&, bool);

    virtual void setSneaking(bool);

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    virtual void setOffhandSlot(::ItemStack const&);

    virtual void handleInsidePortal(::BlockPos const&);

    virtual void changeDimension(::ChangeDimensionPacket const&);

    virtual void changeDimension(::DimensionType);

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual void onEffectRemoved(::MobEffectInstance&);

    virtual bool swing(::ActorSwingSource);

    virtual void die(::ActorDamageSource const&);

    virtual void applySnapshot(::EntityContext const&, ::MovementDataExtractionUtility::SnapshotAccessor const&);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void setSprinting(bool);

    virtual void aiStep();

    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    virtual void prepareRegion(::ChunkSource&);

    virtual void destroyRegion();

    virtual void suspendRegion();

    virtual void _fireDimensionChanged();

    virtual void tickWorld(::Tick const&);

    virtual void frameUpdate(::FrameUpdateContextBase&);

    virtual std::vector<ChunkPos> const& getTickingOffsets() const;

    virtual void checkMovementStats(::Vec3 const&);

    virtual ::HashedString getCurrentStructureFeature() const;

    virtual bool isAutoJumpEnabled() const;

    virtual void respawn();

    virtual void resetRot();

    virtual bool isInTrialMode();

    virtual void openPortfolio();

    virtual void openBook(int, bool, int, ::BlockActor*);

    virtual void openTrading(::ActorUniqueID const&, bool);

    virtual void openChalkboard(::ChalkboardBlockActor&, bool);

    virtual void openNpcInteractScreen(std::shared_ptr<INpcDialogueData>);

    virtual void openInventory();

    virtual void displayClientMessage(std::string const&, std::optional<std::string> const);

    virtual void displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);

    virtual void displayWhisperMessage(std::string const&, std::string const&, std::optional<std::string> const, std::string const&, std::string const&);

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const&, bool, float);

    virtual void stopSleepInBed(bool, bool);

    virtual bool canStartSleepInBed();

    virtual void playEmote(std::string const&, bool const);

    virtual bool isLoading() const;

    virtual void stopLoading();

    virtual void setPlayerGameType(::GameType);

    virtual void emitCriticalHitParticles(::Actor const&, int);

    virtual ::IMinecraftEventing* getEventing() const;

    virtual uint getUserId() const;

    virtual void addExperience(int);

    virtual void addLevels(int);

    virtual void setContainerData(::IContainerManager&, int, int);

    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    virtual void refreshContainer(::IContainerManager&);

    virtual void deleteContainerManager();

    virtual bool isActorRelevant(::Actor const&);

    virtual bool isTeacher() const;

    virtual void sendInventoryTransaction(::InventoryTransaction const&) const;

    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;

    virtual void sendNetworkPacket(::Packet&) const;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator();

    virtual void requestMissingSubChunk(::SubChunkPos const&);

    virtual uchar getMaxChunkBuildRadius() const;

    virtual void setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);

    virtual std::unique_ptr<ISparseContainerSetListener> createSparseContainerListener();

    virtual void setAbilities(::LayeredAbilities const&);

    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> getEditorPlayer() const;

    virtual void destroyEditorPlayer();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalPlayer(
        ::IClientInstance&,
        ::Level&,
        std::string const&,
        ::GameType,
        bool,
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        ::EntityContext&
    );

    MCNAPI void _applyTurnDelta(::Vec2 const&);

    MCNAPI void _forceCameraCut();

    MCNAPI ::CrashDumpLogStringID _getCrashDumpLogCategory();

    MCNAPI void
        _logCDEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCNAPI void _prepareMainChunkSource(::ChunkPos const&);

    MCNAPI void addRegionListener(::LocalPlayer::RegionListener*);

    MCNAPI float checkSecondsSinceLevelChanged();

    MCNAPI float checkSecondsSinceXPContainerClosed() const;

    MCNAPI void closeContainerScreen(::SharedTypes::Legacy::ContainerType);

    MCNAPI void closeNpcInteractScreen(::ActorUniqueID const&);

    MCNAPI void describeBlock();

    MCNAPI ::ItemStack const& getActivatedItem() const;

    MCNAPI std::string const& getBlastFurnaceSearchString() const;

    MCNAPI ::IClientInstance& getClientInstance() const;

    MCNAPI ::ClientLocatorBar& getClientLocatorBar();

    MCNAPI ::NetworkIdentifier const& getConnectionId() const;

    MCNAPI ::SharedTypes::Legacy::ContainerType getContainerTypeToClose();

    MCNAPI ::Bedrock::DDUI::DataStoreSyncClient& getDataStoreSync();

    MCNAPI ::LocalPlayer::EmoteExpediateData& getEmoteExpediateData();

    MCNAPI float getFieldOfViewModifier() const;

    MCNAPI std::string const& getFurnaceSearchString() const;

    MCNAPI ::InventoryMenu& getInventoryMenu();

    MCNAPI std::string const& getInventorySearchString() const;

    MCNAPI int getItemActivationOffsetX() const;

    MCNAPI int getItemActivationOffsetY() const;

    MCNAPI int getItemActivationTicks() const;

    MCNAPI ::ItemStackNetManagerClient& getItemStackNetManagerClient();

    MCNAPI std::string const& getLastDeathInfo() const;

    MCNAPI ::NetworkChunkSubscriber& getNetworkChunkSubscriber();

    MCNAPI float getOPortalEffectTime() const;

    MCNAPI float getPickRange() const;

    MCNAPI float getPortalEffectTime() const;

    MCNAPI std::string const& getSmokerSearchString() const;

    MCNAPI uint getViewBlockRadius() const;

    MCNAPI void handleArmorDamage(::ArmorSlotAndDamagePair const&);

    MCNAPI void handleChunkGenerationRequests(::ChunkPos const, int const, std::vector<ChunkPos> const&);

    MCNAPI bool hasBossRegistered(::ActorUniqueID) const;

    MCNAPI void hurtTo(int const);

    MCNAPI void initializeItemStackNetManager(bool);

    MCNAPI bool isAbleToRespawn() const;

    MCNAPI bool isPlaying() const;

    MCNAPI void localPlayerTurn(::Vec2 const&);

    MCNAPI void markUIAnimationComponentDirty();

    MCNAPI void missedSwing();

    MCNAPI void onStopRidingCameraForceCut();

    MCNAPI void openCodeScreen(::OpenCodeMethod);

    MCNAPI void pickBlock(::HitResult const&, bool);

    MCNAPI void playEmoteSlot(int, bool const);

    MCNAPI void pushChangeDimensionLoadingScreen(::DimensionType);

    MCNAPI ::Bedrock::PubSub::Subscription registerLocalPlayerDeathListener(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription registerLocalPlayerRespawnListener(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription registerPlayerGameTypeChangedListener(std::function<void()>);

    MCNAPI void removeRegionListener(::LocalPlayer::RegionListener*);

    MCNAPI void requestChunkRadius(uint);

    MCNAPI void resetLastDeathInfo();

    MCNAPI void sendInput();

    MCNAPI void setAllEmotePlayedTelemetryData(std::string const&, int);

    MCNAPI void setAndSaveBlastFurnaceOptions(::FurnaceOptions const&);

    MCNAPI void setAndSaveFurnaceOptions(::FurnaceOptions const&);

    MCNAPI void setAndSaveInventoryOptions(::InventoryOptions const&);

    MCNAPI void setAndSaveSmokerOptions(::FurnaceOptions const&);

    MCNAPI void setBlastFurnaceSearchString(std::string const&);

    MCNAPI void setClientRespawnPotentialPosition(::Vec3 const&);

    MCNAPI void setClientRespawnState(::PlayerRespawnState const&);

    MCNAPI void setConnectionId(::NetworkIdentifier const&);

    MCNAPI void setCurrentStructureFeature(::HashedString);

    MCNAPI void setFurnaceSearchString(std::string const&);

    MCNAPI void setInventorySearchString(std::string const&);

    MCNAPI void setLastDeathInfo(std::string const&);

    MCNAPI void setPlayerGameTypeWithoutServerNotification(::GameType);

    MCNAPI void setSmokerSearchString(std::string const&);

    MCNAPI bool shouldCloseContainer();

    MCNAPI bool shouldRotateWithCamera() const;

    MCNAPI void startPaddling(::SharedTypes::Side);

    MCNAPI void stopPaddling(::SharedTypes::Side);

    MCNAPI void updateSecondsSinceXPContainerClosed();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _populateLegacyTransactionRequest(
        ::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0>&,
        std::vector<LegacySetSlot>&,
        ::ItemStackNetManagerClient const&
    );

    MCNAPI static ::LocalPlayer* tryGetFromEntity(::EntityContext&, bool const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& MAX_DIMENSION_LOAD_IN_TIME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&,
        ::Level&,
        std::string const&,
        ::GameType,
        bool,
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        ::EntityContext&
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
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI void $resetUserPos(::ActorResetRule);

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI void $normalTick();

    MCNAPI bool $startRiding(::Actor&, bool);

    MCNAPI void $setSneaking(bool);

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    MCNAPI void $setOffhandSlot(::ItemStack const&);

    MCNAPI void $handleInsidePortal(::BlockPos const&);

    MCNAPI void $changeDimension(::ChangeDimensionPacket const&);

    MCNAPI void $changeDimension(::DimensionType);

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI void $onEffectRemoved(::MobEffectInstance&);

    MCNAPI bool $swing(::ActorSwingSource);

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI void $applySnapshot(::EntityContext const&, ::MovementDataExtractionUtility::SnapshotAccessor const&);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $setSprinting(bool);

    MCNAPI void $aiStep();

    MCNAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    MCNAPI void $prepareRegion(::ChunkSource&);

    MCNAPI void $destroyRegion();

    MCNAPI void $suspendRegion();

    MCNAPI void $_fireDimensionChanged();

    MCNAPI void $tickWorld(::Tick const&);

    MCNAPI void $frameUpdate(::FrameUpdateContextBase&);

    MCNAPI std::vector<ChunkPos> const& $getTickingOffsets() const;

    MCNAPI void $checkMovementStats(::Vec3 const&);

    MCNAPI ::HashedString $getCurrentStructureFeature() const;

    MCNAPI bool $isAutoJumpEnabled() const;

    MCNAPI void $respawn();

    MCNAPI void $resetRot();

    MCNAPI bool $isInTrialMode();

    MCNAPI void $openPortfolio();

    MCNAPI void $openBook(int, bool, int, ::BlockActor*);

    MCNAPI void $openTrading(::ActorUniqueID const&, bool);

    MCNAPI void $openChalkboard(::ChalkboardBlockActor&, bool);

    MCNAPI void $openNpcInteractScreen(std::shared_ptr<INpcDialogueData>);

    MCNAPI void $openInventory();

    MCNAPI void $displayClientMessage(std::string const&, std::optional<std::string> const);

    MCNAPI void $displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);

    MCNAPI void $displayWhisperMessage(
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&
    );

    MCNAPI ::BedSleepingResult $startSleepInBed(::BlockPos const&, bool, float);

    MCNAPI void $stopSleepInBed(bool, bool);

    MCNAPI bool $canStartSleepInBed();

    MCNAPI void $playEmote(std::string const&, bool const);

    MCNAPI bool $isLoading() const;

    MCNAPI void $stopLoading();

    MCNAPI void $setPlayerGameType(::GameType);

    MCNAPI void $emitCriticalHitParticles(::Actor const&, int);

    MCNAPI ::IMinecraftEventing* $getEventing() const;

    MCNAPI uint $getUserId() const;

    MCNAPI void $addExperience(int);

    MCNAPI void $addLevels(int);

    MCNAPI void $setContainerData(::IContainerManager&, int, int);

    MCNAPI void $slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    MCNAPI void $refreshContainer(::IContainerManager&);

    MCNAPI void $deleteContainerManager();

    MCNAPI bool $isActorRelevant(::Actor const&);

    MCNAPI bool $isTeacher() const;

    MCNAPI void $sendInventoryTransaction(::InventoryTransaction const&) const;

    MCNAPI void $sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;

    MCNAPI void $sendNetworkPacket(::Packet&) const;

    MCNAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCNAPI void $requestMissingSubChunk(::SubChunkPos const&);

    MCNAPI uchar $getMaxChunkBuildRadius() const;

    MCNAPI void $setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);

    MCNAPI std::unique_ptr<ISparseContainerSetListener> $createSparseContainerListener();

    MCNAPI void $setAbilities(::LayeredAbilities const&);

    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> $getEditorPlayer() const;

    MCNAPI void $destroyEditorPlayer();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
