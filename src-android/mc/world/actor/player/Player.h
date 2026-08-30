#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/Side.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/ContainerID.h"
#include "mc/world/PlayerUIContainer.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/PlayerItemInUse.h"
#include "mc/world/actor/player/PlayerSpawnFallbackType.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/inventory/FurnaceOptions.h"
#include "mc/world/inventory/InventoryOptions.h"
#include "mc/world/inventory/transaction/InventoryTransactionManager.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorHurtResult;
class ActorOwnerComponent;
class AddPlayerPacket;
class Agent;
class AnimationComponent;
class Attribute;
class Block;
class BlockActor;
class BlockSource;
class BodyControl;
class ChalkboardBlockActor;
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class ContainerManagerModel;
class CreativeItemRegistry;
class DataLoadHelper;
class EnderChestContainer;
class EntityContext;
class FrameUpdateContextBase;
class GameMode;
class GetCollisionShapeInterface;
class HashedString;
class HudContainerManagerModel;
class IConstBlockSource;
class IContainerManager;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class ILevel;
class IMinecraftEventing;
class ISparseContainerSetListener;
class InteractionResult;
class InventoryTransaction;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class ItemStackNetManagerBase;
class LayeredAbilities;
class LegacyTelemetryEventPacket;
class NetworkChunkPublisher;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PersonaPiece;
class PlayerEventCoordinator;
class PlayerInventory;
class PlayerListener;
class PlayerRespawnRandomizer;
class ResolvedTextObject;
class SerializedSkinRef;
class ShieldItem;
class SubChunkPos;
class TextObjectRoot;
class UserEntityIdentifierComponent;
class Vec2;
struct AABBShapeComponent;
struct ActorRotationComponent;
struct HurtParameters;
struct INpcDialogueData;
struct MutableAttributeWithContext;
struct PlayerAuthenticationInfo;
struct PlayerComponent;
struct PlayerDestroyProgressCacheComponent;
struct PlayerMovementSettings;
struct PlayerPartyInfo;
struct SoundEventIdentifier;
struct StateVectorComponent;
struct Tick;
struct VariantParameterList;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    struct CachedSpawnData;
    struct PlayerSpawnPoint;
    struct AttackParameters;
    struct FixedSpawnPositionData_DEPRECATED;
    struct FixedSpawnPositionData;
    // clang-format on

    // Player inner types define
    enum class SpawnPositionState : int {
        InitializeSpawnPositionRandomizer = 0,
        WaitForClientAck                  = 1,
        DetermineDimension                = 2,
        ChangeDimension                   = 3,
        WaitForDimension                  = 4,
        ChooseSpawnArea                   = 5,
        CheckLoadedChunk                  = 6,
        ChooseSpawnPosition               = 7,
        SpawnComplete                     = 8,
    };

    enum class SpawnPositionSource : int {
        Randomizer = 0,
        Respawn    = 1,
        Teleport   = 2,
        Static     = 3,
    };

    struct CachedSpawnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::DimensionType> mRespawnDimensionId;
        ::ll::TypedStorage<4, 12, ::Vec3>         mActualRespawnPosition;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mRequestedRespawnPosition;
        ::ll::TypedStorage<1, 1, bool>            mHasRespawnPosition;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSharedSpawnPosition;
        ::ll::TypedStorage<1, 1, bool>            mRespawnReady;
        ::ll::TypedStorage<4, 12, ::Vec3>         mPlayerPos;
        ::ll::TypedStorage<1, 1, bool>            mIsForcedRespawn;
        ::ll::TypedStorage<1, 1, bool>            mIsAdventure;
        ::ll::TypedStorage<1, 1, bool>            mIsFlyingOrNotOverworld;
        ::ll::TypedStorage<1, 1, bool>            mPositionLoadedFromSave;
        // NOLINTEND
    };

    struct PlayerSpawnPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSpawnBlockPos;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mPlayerPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
        // NOLINTEND
    };

    struct AttackParameters {
    public:
        // AttackParameters inner types define
        enum class Sound : int {
            NONE           = 0,
            PREDICTIVE     = 1,
            NON_PREDICTIVE = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Player::AttackParameters::Sound> mSound;
        ::ll::TypedStorage<1, 1, bool>                              mTriggerCooldown;
        ::ll::TypedStorage<1, 1, bool>                              mCanCrit;
        ::ll::TypedStorage<4, 16, std::optional<Vec3>>              mAimDirection;
        // NOLINTEND
    };

    struct FixedSpawnPositionData_DEPRECATED {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
        ::ll::TypedStorage<1, 1, bool>    mIsAboveLeaves;
        // NOLINTEND

    public:
        // prevent constructor by default
        FixedSpawnPositionData_DEPRECATED();
    };

    struct FixedSpawnPositionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                   mPosition;
        ::ll::TypedStorage<4, 4, ::PlayerSpawnFallbackType> mSpawnFallbackType;
        // NOLINTEND

    public:
        // prevent constructor by default
        FixedSpawnPositionData();
    };

    using PlayerListenerList = std::vector<PlayerListener*>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mFroglights;
    ::ll::TypedStorage<4, 4, float const> mSneakHeight;
    ::ll::TypedStorage<4, 4, float const> mSneakOffset;
    ::ll::TypedStorage<4, 4, int> mScore;
    ::ll::TypedStorage<4, 4, ::BuildPlatform> mBuildPlatform;
    ::ll::TypedStorage<8, 24, std::string> mUniqueName;
    ::ll::TypedStorage<8, 24, std::string> mServerId;
    ::ll::TypedStorage<8, 24, std::string> mSelfSignedId;
    ::ll::TypedStorage<8, 24, std::string> mPlatformOfflineId;
    ::ll::TypedStorage<8, 8, ulong> mClientRandomId;
    ::ll::TypedStorage<8, 24, std::string> mPlatformId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPendingVehicleID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPendingLeftShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPendingRightShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mInteractTarget;
    ::ll::TypedStorage<4, 12, ::Vec3> mInteractTargetPos;
    ::ll::TypedStorage<1, 1, bool> mHasFakeInventory;
    ::ll::TypedStorage<1, 1, bool> mIsRegionSuspended;
    ::ll::TypedStorage<1, 1, bool> mUpdateMobs;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkViewSource>> mChunkSource;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkViewSource>> mSpawnChunkSource;
    ::ll::TypedStorage<4, 12, ::Vec3> mCapePosO;
    ::ll::TypedStorage<4, 12, ::Vec3> mCapePos;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerManagerModel>> mContainerManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (const ContainerManagerModel*), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mContainerManagerSubscribers;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerInventory>> mInventory;
    ::ll::TypedStorage<4, 20, ::InventoryOptions> mInventoryOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions> mFurnaceOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions> mBlastFurnaceOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions> mSmokerOptions;
    ::ll::TypedStorage<4, 4, float> mDistanceSinceTransformEvent;
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mCreativeItemList;
    ::ll::TypedStorage<8, 24, std::string> mPlatformOnlineId;
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionState> mSpawnPositionState;
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionSource> mSpawnPositionSource;
    ::ll::TypedStorage<4, 12, ::Vec3> mSpawnPositioningTestPosition;
    ::ll::TypedStorage<4, 4, uint> mRespawnChunkBuilderPolicyHandle;
    ::ll::TypedStorage<4, 64, ::Player::CachedSpawnData> mCachedSpawnData;
    ::ll::UntypedStorage<1, 16> mSpawnBlockSource;
    ::ll::TypedStorage<8, 56, ::Stopwatch> mRespawnStopwatch_Searching;
    ::ll::TypedStorage<4, 12, ::Vec3> mRespawnOriginalPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType> mRespawnOriginalDimension;
    ::ll::TypedStorage<8, 24, std::string> mRespawnMessage;
    ::ll::TypedStorage<1, 1, bool> mRespawnReady;
    ::ll::TypedStorage<1, 1, bool> mIsInitialSpawnDone;
    ::ll::TypedStorage<1, 1, bool> mRespawningFromTheEnd;
    ::ll::TypedStorage<1, 1, bool> mPositionLoadedFromSave;
    ::ll::TypedStorage<1, 1, bool> mBlockRespawnUntilClientMessage;
    ::ll::TypedStorage<1, 1, bool> mHasSeenCredits;
    ::ll::TypedStorage<4, 8, std::optional<PlayerSpawnFallbackType>> mSpawnFallbackType;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mSpawnFallbackPosition;
    ::ll::TypedStorage<8, 168, ::PlayerItemInUse> mItemInUse;
    ::ll::TypedStorage<4, 4, ::ActorType> mLastHurtBy;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPreviousInteractEntity;
    ::ll::TypedStorage<4, 4, int> mPreviousCarriedItem;
    ::ll::TypedStorage<4, 4, int> mEmoteTicks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<NetworkChunkPublisher>> mChunkPublisherView;
    ::ll::TypedStorage<8, 8, ::PacketSender&> mPacketSender;
    ::ll::TypedStorage<8, 16, std::shared_ptr<HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EnderChestContainer>> mEnderChestInventory;
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> mTrackedBossIDs;
    ::ll::TypedStorage<8, 136, ::ItemGroup> mCursorSelectedItemGroup;
    ::ll::TypedStorage<8, 344, ::PlayerUIContainer> mPlayerUIContainer;
    ::ll::TypedStorage<8, 48, ::InventoryTransactionManager> mTransactionManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameMode>> mGameMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerRespawnRandomizer>> mSpawnRandomizer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SerializedSkinRef>> mSkin;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackNetManagerBase>> mItemStackNetManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>> mUIAnimationComponent;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>> mMapAnimationComponent;
    ::ll::TypedStorage<4, 28, ::Player::PlayerSpawnPoint> mPlayerRespawnPoint;
    ::ll::TypedStorage<4, 4, float> mServerBuildRatio;
    ::ll::TypedStorage<1, 1, ::SubClientId> mClientId;
    ::ll::TypedStorage<1, 1, bool> mInteractDataDirty;
    ::ll::TypedStorage<1, 1, bool> mShouldClientGenerateChunks;
    ::ll::TypedStorage<8, 24, std::vector<BiomeIdType>> mOceanBiomes;
    ::ll::TypedStorage<1, 1, bool> mUseMapAnimationComponent;
    ::ll::TypedStorage<1, 1, bool> mIsDeferredRenderingFirstPersonObjects;
    ::ll::TypedStorage<1, 1, bool> mDestroyingBlock;
    ::ll::TypedStorage<1, 1, bool> mPlayerLevelChanged;
    ::ll::TypedStorage<4, 4, int> mPreviousLevelRequirement;
    ::ll::TypedStorage<4, 4, int> mLastLevelUpTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>> mFirstPersonAnimationComponent;
    ::ll::TypedStorage<8, 24, std::vector<PlayerListener*>> mListeners;
    ::ll::TypedStorage<4, 12, ::Vec3> mRespawnPositionCandidate;
    ::ll::TypedStorage<4, 12, ::Vec3> mPreDimensionTransferSpawnPosition;
    ::ll::TypedStorage<4, 4, int> mEnchantmentSeed;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mOnScreenAnimationTextures;
    ::ll::TypedStorage<4, 4, int> mOnScreenAnimationTicks;
    ::ll::TypedStorage<4, 4, uint> mChunkRadius;
    ::ll::TypedStorage<4, 4, int> mMapIndex;
    ::ll::TypedStorage<4, 4, float> mElytraVolume;
    ::ll::TypedStorage<8, 8, ulong> mElytraLoop;
    ::ll::TypedStorage<8, 8, long> mStartedBlockingTimeStamp;
    ::ll::TypedStorage<8, 8, long> mBlockedUsingShieldTimeStamp;
    ::ll::TypedStorage<8, 8, long> mBlockedUsingDamagedShieldTimeStamp;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mChatNamePrefix;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mChatNameSuffix;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mChatMessagePrefix;
    ::ll::TypedStorage<8, 24, std::string> mLastEmotePlayed;
    ::ll::TypedStorage<8, 8, long> mEmoteEasterEggEndTime;
    ::ll::TypedStorage<4, 4, uint> mEmoteMessageCount;
    ::ll::TypedStorage<8, 24, std::string> mDeviceId;
    ::ll::TypedStorage<1, 1, bool> mFlagClientForBAIReset;
    ::ll::TypedStorage<1, 1, bool> mSendInventoryOptionsToClient;
    ::ll::TypedStorage<1, 1, bool> mIsHostingPlayer;
    ::ll::TypedStorage<1, 1, bool> mPrevBlockedUsingShield;
    ::ll::TypedStorage<1, 1, bool> mPrevBlockedUsingDamagedShield;
    ::ll::TypedStorage<1, 1, bool> mUsedPotion;
    ::ll::TypedStorage<8, 8, ::PlayerDestroyProgressCacheComponent&> mDestroyProgressCache;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Player();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _serverInitItemStackIds();

    virtual void resetUserPos(::ActorResetRule);

    virtual void remove();

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    virtual bool isFireImmune() const;

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual std::unique_ptr<Packet> tryCreateAddActorPacket();

    virtual void normalTick();

    virtual void passengerTick();

    virtual bool startRiding(::Actor&, bool);

    virtual ::mce::Color getNameTagTextColor() const;

    virtual float getShadowRadius() const;

    virtual bool canInteractWithOtherEntitiesInGame() const;

    virtual bool isImmobile() const;

    virtual bool isSilentObserver() const;

    virtual bool isSleeping() const;

    virtual void setSleeping(bool);

    virtual bool isBlocking() const;

    virtual bool isDamageBlocked(::ActorDamageSource const&) const;

    virtual ::ActorHurtResult attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual void feed(int);

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual ::HashedString const& getActorRendererId() const;

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    virtual void setCarriedItem(::ItemStack const&);

    virtual ::ItemStack const& getCarriedItem() const;

    virtual void setOffhandSlot(::ItemStack const&);

    virtual ::ItemStack const& getEquippedTotem() const;

    virtual bool consumeTotem();

    virtual bool canFreeze() const;

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual void onSynchedDataUpdate(int);

    virtual bool canAddPassenger(::Actor&) const;

    virtual bool canBePulledIntoVehicle() const;

    virtual void sendMotionPacketIfNeeded();

    virtual void startSwimming();

    virtual void stopSwimming();

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    virtual bool canObstructSpawningAndBlockPlacement() const;

    virtual ::AnimationComponent& getAnimationComponent();

    virtual void useItem(::ItemStackBase&, ::ItemUseMethod, bool);

    virtual float getMapDecorationRotation() const;

    virtual bool add(::ItemStack&);

    virtual bool drop(::ItemStack const&, bool const);

    virtual void die(::ActorDamageSource const&);

    virtual bool shouldDropDeathLoot() const;

    virtual std::optional<BlockPos> getLastDeathPos() const;

    virtual std::optional<DimensionType> getLastDeathDimension() const;

    virtual bool hasDiedBefore() const;

    virtual void doEnterWaterSplashEffect();

    virtual void doExitWaterSplashEffect();

    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, ::ItemStack const&) const;

    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual float getSpeed() const;

    virtual void setSpeed(float);

    virtual void damageCarriedItemOnAttack(::Actor&, float);

    virtual void aiStep();

    virtual int getItemUseDuration() const;

    virtual float getItemUseStartupProgress() const;

    virtual float getItemUseIntervalProgress() const;

    virtual std::vector<const ItemStack*> getAllHandEquipment() const;

    virtual std::vector<const ItemStack*> getAllEquipment() const;

    virtual void dropEquipmentOnDeath();

    virtual void dropEquipmentOnDeath(::ActorDamageSource const&);

    virtual void clearVanishEnchantedItemsOnDeath();

    virtual void sendInventory(bool);

    virtual bool canExistWhenDisallowMob() const;

    virtual std::unique_ptr<BodyControl> initBodyControl();

    virtual void prepareRegion(::ChunkSource&);

    virtual void destroyRegion();

    virtual void suspendRegion();

    virtual void _fireDimensionChanged();

    virtual void changeDimensionWithCredits(::DimensionType);

    virtual void tickWorld(::Tick const&);

    virtual void frameUpdate(::FrameUpdateContextBase&) = 0;

    virtual std::vector<ChunkPos> const& getTickingOffsets() const;

    virtual void moveView();

    virtual void moveSpawnView(::Vec3 const&, ::DimensionType);

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

    virtual void displayChatMessage(std::string const&, std::string const&, std::optional<std::string> const);

    virtual void displayClientMessage(std::string const&, std::optional<std::string> const);

    virtual void displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);

    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    virtual void displayTextObjectWhisperMessage(::ResolvedTextObject const&, std::string const&, std::string const&);

    virtual void displayWhisperMessage(std::string const&, std::string const&, std::optional<std::string> const, std::string const&, std::string const&);

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const&, bool, float);

    virtual void stopSleepInBed(bool, bool);

    virtual bool canStartSleepInBed();

    virtual void openSign(::BlockPos const&, bool);

    virtual void playEmote(std::string const&, bool const);

    virtual bool isLoading() const;

    virtual bool isPlayerInitialized() const;

    virtual void stopLoading();

    virtual void setPlayerGameType(::GameType);

    virtual void initHUDContainerManager();

    virtual void emitCriticalHitParticles(::Actor const&, int);

    virtual ::IMinecraftEventing* getEventing() const;

    virtual uint getUserId() const;

    virtual void addExperience(int);

    virtual void addLevels(int);

    virtual void setContainerData(::IContainerManager&, int, int) = 0;

    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) = 0;

    virtual void refreshContainer(::IContainerManager&) = 0;

    virtual void deleteContainerManager();

    virtual bool isActorRelevant(::Actor const&);

    virtual bool isTeacher() const = 0;

    virtual void onSuspension();

    virtual void onLinkedSlotsChanged();

    virtual void sendInventoryTransaction(::InventoryTransaction const&) const = 0;

    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const = 0;

    virtual void sendNetworkPacket(::Packet&) const;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    virtual bool isSimulated() const;

    virtual std::string getXuid() const;

    virtual ::PlayerMovementSettings const& getMovementSettings() const;

    virtual std::optional<PlayerPartyInfo> getPartyInfo_UNTRUSTED() const;

    virtual void requestMissingSubChunk(::SubChunkPos const&);

    virtual uchar getMaxChunkBuildRadius() const;

    virtual void setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);

    virtual void setRemotePlayerTicked(bool);

    virtual std::unique_ptr<ISparseContainerSetListener> createSparseContainerListener();

    virtual void addChunksToQueue(std::vector<ChunkPos> const&);

    virtual void onMovePlayerPacketNormal(::Vec3 const&, ::Vec2 const&, float);

    virtual std::shared_ptr<ChunkViewSource> _createChunkSource(::ChunkSource&);

    virtual void setAbilities(::LayeredAbilities const&);

    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> getEditorPlayer() const = 0;

    virtual void destroyEditorPlayer() = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Player(
        ::ILevel&,
        ::PacketSender&,
        ::GameType,
        bool,
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        ::EntityContext&,
        std::string const&,
        std::string const&
    );

    MCNAPI bool _canChangeGameType(::GameType) const;

    MCNAPI bool _checkAndFixSpawnPosition(::Vec3&, std::vector<gsl::not_null<BlockSource*>>, bool, bool, bool);

    MCNAPI void _checkMovementShouldStopEmoting();

    MCNAPI void _ensureSafeSpawnPosition(::Vec3&);

    MCNAPI void _enterBedSleepState(::BlockPos const&, float);

    MCNAPI bool _findFallbackSpawnPosition(::Vec3&, std::vector<gsl::not_null<BlockSource*>>, uint const, bool const);

    MCNAPI void _fireWillChangeDimension();

    MCNAPI void _handleCarriedItemInteractText();

    MCNAPI bool _isChunkSourceLoaded(::Vec3 const&, ::BlockSource const&) const;

    MCNAPI void _setPlayerGameType(::GameType);

    MCNAPI void _setPreDimensionTransferSpawnPosition(::Vec3 const);

    MCNAPI void _setStartedBlockingTimeStamp(long);

    MCNAPI ::BedSleepingResult _validateCanSleepInBed(::BlockPos const&) const;

    MCNAPI ::BedSleepingResult _validateSleepConditions(::BlockPos const&) const;

    MCNAPI bool _validateSpawnPositionAvailability(::Vec3 const&, ::BlockSource*, ::Vec3 const* const) const;

    MCNAPI void addListener(::PlayerListener&);

    MCNAPI ::ActorHurtResult
    attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&, ::Player::AttackParameters const&);

    MCNAPI void broadcastPlayerSpawnedMobEvent(::ActorType, ::MobSpawnMethod);

    MCNAPI bool canBeSeenOnMap() const;

    MCNAPI bool canJump();

    MCNAPI bool canOpenContainerScreen();

    MCNAPI bool canSleep() const;

    MCNAPI bool canStackInOffhand(::ItemStack const&) const;

    MCNAPI bool canUseAbility(::AbilitiesIndex) const;

    MCNAPI bool canUseOperatorBlocks() const;

    MCNAPI void causeFoodExhaustion(float);

    MCNAPI bool checkBed(::BlockSource*, ::Vec3 const* const);

    MCNAPI bool checkNeedAutoJump(float, float);

    MCNAPI bool checkSpawnBlock(::BlockSource const&) const;

    MCNAPI void clearRespawnPosition();

    MCNAPI void completeUsingItem();

    MCNAPI void crackBlock(::BlockPos const&, uchar);

    MCNAPI void eat(::ItemStack const&);

    MCNAPI void eat(int, float);

    MCNAPI bool equippedArmorItemCanBeMoved(::ItemStack const&) const;

    MCNAPI void fireDimensionChangedEvent(::DimensionType, ::DimensionType);

    MCNAPI bool forceAllowEating() const;

    MCNAPI ::LayeredAbilities const& getAbilities() const;

    MCNAPI ::LayeredAbilities& getAbilities();

    MCNAPI ::Agent* getAgent() const;

    MCNAPI ::ActorUniqueID getAgentID() const;

    MCNAPI ::Agent* getAgentIfAllowed(bool, ::ActorUniqueID) const;

    MCNAPI ::SoundEventIdentifier getAttackHitSound() const;

    MCNAPI ::SoundEventIdentifier getAttackMissSound() const;

    MCNAPI ::BlockPos const& getBedPosition() const;

    MCNAPI ::FurnaceOptions const& getBlastFurnaceOptions() const;

    MCNAPI long getBlockedUsingDamagedShieldTimeStamp() const;

    MCNAPI long getBlockedUsingShieldTimeStamp() const;

    MCNAPI long getBlockingStartTimeStamp() const;

    MCNAPI ::Vec3 getCapePos(float);

    MCNAPI std::string getChatDisplayName() const;

    MCNAPI std::optional<std::string> const& getChatMessagePrefix() const;

    MCNAPI std::optional<std::string> const& getChatNamePrefix() const;

    MCNAPI std::optional<std::string> const& getChatNameSuffix() const;

    MCNAPI uint getChunkRadius() const;

    MCNAPI std::weak_ptr<IContainerManager> getContainerManager() const;

    MCNAPI std::weak_ptr<ContainerManagerModel> getContainerManagerModel() const;

    MCNAPI ::gsl::not_null<StackRefResult<IContainerRegistryAccess>> getContainerRegistryAccess() const;

    MCNAPI ::gsl::not_null<StackRefResult<IContainerRegistryTracker>> getContainerRegistryTracker() const;

    MCNAPI std::vector<ItemInstance> const& getCreativeItemList() const;

    MCNAPI ::ItemStack const& getCurrentActiveShield() const;

    MCNAPI uint getCurrentOnScreenAnimationEffectID() const;

    MCNAPI float getDestroyProgress(::Block const&);

    MCNAPI int getDirection() const;

    MCNAPI ::gsl::not_null<StackRefResult<IDynamicContainerSerialization>> getDynamicContainerSerialization() const;

    MCNAPI int getEnchantmentSeed() const;

    MCNAPI ::DimensionType getExpectedSpawnDimensionId() const;

    MCNAPI ::BlockPos const& getExpectedSpawnPosition() const;

    MCNAPI ::FurnaceOptions const& getFurnaceOptions() const;

    MCNAPI ::GameMode& getGameMode() const;

    MCNAPI std::weak_ptr<HudContainerManagerModel> getHudContainerManagerModel() const;

    MCNAPI std::string getInteractText() const;

    MCNAPI std::string const& getInteractTextKey() const;

    MCNAPI ::Container& getInventory();

    MCNAPI ::InventoryOptions const& getInventoryOptions() const;

    MCNAPI ::ItemStack const& getItem(int) const;

    MCNAPI int getItemCooldownLeft(::HashedString const&) const;

    MCNAPI int getItemCooldownLeft(ulong const) const;

    MCNAPI float getItemCooldownProgress(::HashedString const&) const;

    MCNAPI ::ItemStack const& getItemInUse() const;

    MCNAPI int getItemInUseSlot() const;

    MCNAPI std::string getItemInteractText(::Item const&) const;

    MCNAPI ::ItemStackNetManagerBase const* getItemStackNetManager() const;

    MCNAPI ::ItemStackNetManagerBase* getItemStackNetManager();

    MCNAPI ::ActorType getLastHurtBy() const;

    MCNAPI float getLevelProgress() const;

    MCNAPI float getLuck();

    MCNAPI int getMapIndex();

    MCNAPI int getMaxItemCooldownLeft() const;

    MCNAPI std::string const& getName() const;

    MCNAPI void getNewEnchantmentSeed();

    MCNAPI std::vector<BiomeIdType>& getOceanBiomes();

    MCNAPI int getOnScreenAnimationTicks() const;

    MCNAPI ::AABB getPickupArea() const;

    MCNAPI ::BuildPlatform getPlatform() const;

    MCNAPI std::string const& getPlatformOnlineId() const;

    MCNAPI ::GameType getPlayerGameType() const;

    MCNAPI int getPlayerIndex() const;

    MCNAPI int getPlayerLevel() const;

    MCNAPI ::PlayerPermissionLevel getPlayerPermissionLevel() const;

    MCNAPI std::string const& getPlayerSessionId() const;

    MCNAPI ::ItemStack const& getPlayerUIItem(::PlayerUISlot);

    MCNAPI ::BlockPos const& getRespawnAnchorPosition() const;

    MCNAPI ::ItemStack const& getSelectedItem() const;

    MCNAPI int getSelectedItemSlot() const;

    MCNAPI ::SerializedSkinRef const& getSkin() const;

    MCNAPI float getSleepRotation() const;

    MCNAPI ::FurnaceOptions const& getSmokerOptions() const;

    MCNAPI ::DimensionType getSpawnDimension() const;

    MCNAPI ::BlockPos const& getSpawnPosition() const;

    MCNAPI ::PlayerInventory const& getSupplies() const;

    MCNAPI ::PlayerInventory& getSupplies();

    MCNAPI int getTicksUsingItem() const;

    MCNAPI std::vector<ActorUniqueID> const& getTrackedBosses() const;

    MCNAPI bool getUsedPotion();

    MCNAPI int getXpEarnedAtCurrentLevel() const;

    MCNAPI uint getXpNeededForLevelRange(int, int) const;

    MCNAPI int getXpNeededForNextLevel() const;

    MCNAPI void
    handleMovePlayerPacket(::PlayerPositionModeComponent::PositionMode, ::Vec3 const&, ::Vec2 const&, float, int, int);

    MCNAPI bool hasBedPosition() const;

    MCNAPI bool hasOpenContainer() const;

    MCNAPI bool hasOpenContainerOfContainerType(::SharedTypes::Legacy::ContainerType) const;

    MCNAPI bool hasOwnedChunkSource() const;

    MCNAPI bool hasResource(::ItemDescriptor const&);

    MCNAPI bool hasRespawnAnchorPosition() const;

    MCNAPI bool hasRespawnPosition() const;

    MCNAPI bool hasSleepFlagSet();

    MCNAPI ::InteractionResult interact(::Actor&, ::Vec3 const&);

    MCNAPI void inventoryChanged(::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    MCNAPI bool is2DPositionRelevant(::DimensionType, ::BlockPos const&);

    MCNAPI bool isCrawling();

    MCNAPI bool isEditorPlayer() const;

    MCNAPI bool isEmoteMessageEasterEgg() const;

    MCNAPI bool isEmoting() const;

    MCNAPI bool isEquipmentHidden() const;

    MCNAPI bool isFlying() const;

    MCNAPI bool isForcedRespawn() const;

    MCNAPI bool isHostingPlayer() const;

    MCNAPI bool isHungry() const;

    MCNAPI bool isHurt();

    MCNAPI bool isItemOnCooldown(::HashedString const&) const;

    MCNAPI bool isItemOnCooldown(::Item const&) const;

    MCNAPI bool isOperator() const;

    MCNAPI bool isRespawningFromTheEnd() const;

    MCNAPI bool isScoping() const;

    MCNAPI bool isSleepingLongEnough() const;

    MCNAPI bool isSpawned() const;

    MCNAPI bool isUsingItem() const;

    MCNAPI bool isValidSpawn() const;

    MCNAPI void onMobStatusChanged(::ActorUniqueID);

    MCNAPI void onResetBAI(int);

    MCNAPI void passengerCheckMovementStats();

    MCNAPI void playPredictiveSynchronizedSound(::SoundEventIdentifier const&, ::Vec3 const&, int, bool);

    MCNAPI void queueOnScreenTextureAnimation(uint const);

    MCNAPI void registerTrackedBoss(::ActorUniqueID);

    MCNAPI void releaseUsingItem();

    MCNAPI void removeListener(::PlayerListener&);

    MCNAPI void resendAllChunks();

    MCNAPI void resetEmoteMessageData();

    MCNAPI void resetOnScreenAnimationTicks();

    MCNAPI void resetPlayerLevel();

    MCNAPI void resetPublisherInitialSpawn();

    MCNAPI void resetToDefaultGameMode();

    MCNAPI void sendEventPacket(::LegacyTelemetryEventPacket&) const;

    MCNAPI void sendPlayerTeleported();

    MCNAPI void sendSpawnExperienceOrbPacketToServer(::Vec3 const&, int);

    MCNAPI void setAgent(::Agent*);

    MCNAPI void setBedRespawnPosition(::BlockPos const&);

    MCNAPI void setBlastFurnaceOptions(::FurnaceOptions const&);

    MCNAPI void setBlockRespawnUntilClientMessage(bool const);

    MCNAPI void setChatMessagePrefix(std::optional<std::string>);

    MCNAPI void setChatNamePrefix(std::optional<std::string>);

    MCNAPI void setChatNameSuffix(std::optional<std::string>);

    MCNAPI void setChunkRadius(uint);

    MCNAPI void setCommandPermissions(::CommandPermissionLevel);

    MCNAPI void setContainerManagerModel(std::shared_ptr<ContainerManagerModel>);

    MCNAPI void setCursorSelectedItem(::ItemStack const&);

    MCNAPI void setCursorSelectedItemGroup(::ItemGroup const&);

    MCNAPI void setEmotingStatus(uint);

    MCNAPI void setEnchantmentSeed(int);

    MCNAPI void setFurnaceOptions(::FurnaceOptions const&);

    MCNAPI void setHasSeenCredits(bool);

    MCNAPI void setInventoryOptions(::InventoryOptions const&);

    MCNAPI void setIsDeferredRenderingFirstPersonObjects(bool);

    MCNAPI void setItem(::ItemStack const&, int);

    MCNAPI void setLastHurtBy(::ActorType);

    MCNAPI void setMapIndex(int);

    MCNAPI void setName(std::string const&);

    MCNAPI void setPlatform(::BuildPlatform const);

    MCNAPI void setPlatformOnlineId(std::string const&);

    MCNAPI void setPlayerIndex(int);

    MCNAPI void setPlayerUIItem(::PlayerUISlot, ::ItemStack const&, bool);

    MCNAPI void setRespawnPosition(::BlockPos const&, ::DimensionType);

    MCNAPI void setRespawnPosition(::BlockPos const&, ::DimensionType, ::BlockPos const&);

    MCNAPI void setRespawnPositionCandidate();

    MCNAPI void setRespawnReady(::Vec3 const&);

    MCNAPI void setSelectedItem(::ItemStack const&);

    MCNAPI ::ItemStack const& setSelectedSlot(int);

    MCNAPI void setSmokerOptions(::FurnaceOptions const&);

    MCNAPI bool setSpawnBlockRespawnPosition(::BlockPos const&, ::DimensionType);

    MCNAPI void setUsedPotion(bool);

    MCNAPI bool shouldShowCredits() const;

    MCNAPI void startDestroying();

    MCNAPI void startGliding();

    MCNAPI void startItemCooldown(::Item const&, bool);

    MCNAPI void startItemCooldown(::HashedString const&, int, bool);

    MCNAPI void startItemUseOn(uchar, ::BlockPos const&, ::BlockPos const&, ::ItemStack const&);

    MCNAPI void startUsingItem(::ItemStack const&, int);

    MCNAPI void stopDestroying();

    MCNAPI void stopGliding();

    MCNAPI void stopItemUseOn(::BlockPos const&, ::ItemStack const&);

    MCNAPI void stopUsingItem();

    MCNAPI bool take(::Actor&, int, int);

    MCNAPI bool tryStartGliding();

    MCNAPI void unRegisterTrackedBoss(::ActorUniqueID);

    MCNAPI void updateCreativeItemList(::CreativeItemRegistry const&);

    MCNAPI bool updateEmoteMessageData(::PersonaPiece const&);

    MCNAPI void updateInventoryTransactions();

    MCNAPI void updateSkin(::SerializedSkinRef const&, int);

    MCNAPI void updateTouch();

    MCNAPI void useMapAnimationComponent(bool);

    MCNAPI void useSelectedItem(::ItemUseMethod, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isDangerousBlockForSpawn(::Block const&);

    MCNAPI static bool checkNeedAutoJump(
        ::IConstBlockSource const&,
        ::AABBShapeComponent const&,
        ::ActorRotationComponent const&,
        float,
        ::StateVectorComponent const&,
        ::optional_ref<const GetCollisionShapeInterface>,
        float,
        float
    );

    MCNAPI static std::optional<SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob const&, ::SharedTypes::Legacy::ActorDamageCause);

    MCNAPI static bool isDangerousVolumeForSpawn(::BlockSource&, ::AABB const&);

    MCNAPI static ::Player const* tryGetFromComponent(::PlayerComponent const&, ::ActorOwnerComponent const&, bool);

    MCNAPI static ::Player* tryGetFromComponent(::PlayerComponent const&, ::ActorOwnerComponent&, bool);

    MCNAPI static ::Player* tryGetFromEntity(::EntityContext&, bool const);

    MCNAPI static ::Player* tryGetFromEntity(::StackRefResult<EntityContext>, bool);

    MCNAPI static void updatePlayerGameTypeEntityData(::EntityContext&, ::GameType, ::GameType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_BB_HEIGHT();

    MCNAPI static float const& DEFAULT_BB_WIDTH();

    MCNAPI static float const& DEFAULT_PLAYER_EYE_OFFSET();

    MCNAPI static float const& DEFAULT_PLAYER_HEIGHT_OFFSET();

    MCNAPI static float const& DEFAULT_WALK_SPEED();

    MCNAPI static float const& DISTANCE_TO_TRANSFORM_EVENT();

    MCNAPI static float const& DISTANCE_TO_TRAVELLED_EVENT();

    MCNAPI static ::Attribute const& EXHAUSTION();

    MCNAPI static ::Attribute const& EXPERIENCE();

    MCNAPI static int const& GLIDE_STOP_DELAY();

    MCNAPI static ::Attribute const& HUNGER();

    MCNAPI static ::Attribute const& LEVEL();

    MCNAPI static float const& PLAYER_ALIVE_HEIGHT();

    MCNAPI static float const& PLAYER_ALIVE_WIDTH();

    MCNAPI static float const& PLAYER_DEAD_HEIGHT();

    MCNAPI static float const& PLAYER_DEAD_WIDTH();

    MCNAPI static int const& PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS();

    MCNAPI static float const& PLAYER_SLEEPING_HEIGHT();

    MCNAPI static float const& PLAYER_SLEEPING_WIDTH();

    MCNAPI static ::Attribute const& SATURATION();

    MCNAPI static uint const& SPAWN_CHUNK_LARGE_JUMP();

    MCNAPI static uint const& SPAWN_CHUNK_RADIUS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevel&,
        ::PacketSender&,
        ::GameType,
        bool,
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        ::EntityContext&,
        std::string const&,
        std::string const&
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $_serverInitItemStackIds();

    MCNAPI void $resetUserPos(::ActorResetRule);

    MCNAPI void $remove();

    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCNAPI bool $isFireImmune() const;

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI std::unique_ptr<Packet> $tryCreateAddActorPacket();

    MCNAPI void $normalTick();

    MCNAPI void $passengerTick();

    MCNAPI bool $startRiding(::Actor&, bool);

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $canInteractWithOtherEntitiesInGame() const;

    MCNAPI bool $isImmobile() const;

    MCNAPI bool $isSilentObserver() const;

    MCNAPI bool $isSleeping() const;

    MCNAPI void $setSleeping(bool);

    MCNAPI bool $isBlocking() const;

    MCNAPI bool $isDamageBlocked(::ActorDamageSource const&) const;

    MCNAPI ::ActorHurtResult $attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI void $feed(int);

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI ::HashedString const& $getActorRendererId() const;

    MCNAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    MCNAPI void $setCarriedItem(::ItemStack const&);

    MCNAPI ::ItemStack const& $getCarriedItem() const;

    MCNAPI void $setOffhandSlot(::ItemStack const&);

    MCNAPI ::ItemStack const& $getEquippedTotem() const;

    MCNAPI bool $consumeTotem();

    MCNAPI bool $canFreeze() const;

    MCNAPI bool $canChangeDimensionsUsingPortal() const;

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI bool $canAddPassenger(::Actor&) const;

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI void $sendMotionPacketIfNeeded();

    MCNAPI void $startSwimming();

    MCNAPI void $stopSwimming();

    MCNAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;

    MCNAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCNAPI ::AnimationComponent& $getAnimationComponent();

    MCNAPI void $useItem(::ItemStackBase&, ::ItemUseMethod, bool);

    MCNAPI float $getMapDecorationRotation() const;

    MCNAPI bool $add(::ItemStack&);

    MCNAPI bool $drop(::ItemStack const&, bool const);

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI bool $shouldDropDeathLoot() const;

    MCNAPI std::optional<BlockPos> $getLastDeathPos() const;

    MCNAPI std::optional<DimensionType> $getLastDeathDimension() const;

    MCNAPI bool $hasDiedBefore() const;

    MCNAPI void $doEnterWaterSplashEffect();

    MCNAPI void $doExitWaterSplashEffect();

    MCNAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, ::ItemStack const&) const;

    MCNAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI float $getSpeed() const;

    MCNAPI void $setSpeed(float);

    MCNAPI void $damageCarriedItemOnAttack(::Actor&, float);

    MCNAPI void $aiStep();

    MCNAPI int $getItemUseDuration() const;

    MCNAPI float $getItemUseStartupProgress() const;

    MCNAPI float $getItemUseIntervalProgress() const;

    MCNAPI std::vector<const ItemStack*> $getAllHandEquipment() const;

    MCNAPI std::vector<const ItemStack*> $getAllEquipment() const;

    MCNAPI void $dropEquipmentOnDeath();

    MCNAPI void $dropEquipmentOnDeath(::ActorDamageSource const&);

    MCNAPI void $clearVanishEnchantedItemsOnDeath();

    MCNAPI void $sendInventory(bool);

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI std::unique_ptr<BodyControl> $initBodyControl();

    MCNAPI void $prepareRegion(::ChunkSource&);

    MCNAPI void $destroyRegion();

    MCNAPI void $suspendRegion();

    MCNAPI void $_fireDimensionChanged();

    MCNAPI void $changeDimensionWithCredits(::DimensionType);

    MCNAPI void $tickWorld(::Tick const&);

    MCNAPI std::vector<ChunkPos> const& $getTickingOffsets() const;

    MCNAPI void $moveView();

    MCNAPI void $moveSpawnView(::Vec3 const&, ::DimensionType);

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

    MCNAPI void $displayChatMessage(std::string const&, std::string const&, std::optional<std::string> const);

    MCNAPI void $displayClientMessage(std::string const&, std::optional<std::string> const);

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

    MCNAPI ::BedSleepingResult $startSleepInBed(::BlockPos const&, bool, float);

    MCNAPI void $stopSleepInBed(bool, bool);

    MCNAPI bool $canStartSleepInBed();

    MCNAPI void $openSign(::BlockPos const&, bool);

    MCNAPI void $playEmote(std::string const&, bool const);

    MCNAPI bool $isLoading() const;

    MCNAPI bool $isPlayerInitialized() const;

    MCNAPI void $stopLoading();

    MCNAPI void $setPlayerGameType(::GameType);

    MCNAPI void $initHUDContainerManager();

    MCNAPI void $emitCriticalHitParticles(::Actor const&, int);

    MCNAPI ::IMinecraftEventing* $getEventing() const;

    MCNAPI uint $getUserId() const;

    MCNAPI void $addExperience(int);

    MCNAPI void $addLevels(int);

    MCNAPI void $deleteContainerManager();

    MCNAPI bool $isActorRelevant(::Actor const&);

    MCNAPI void $onSuspension();

    MCNAPI void $onLinkedSlotsChanged();

    MCNAPI void $sendNetworkPacket(::Packet&) const;

    MCNAPI bool $isSimulated() const;

    MCNAPI std::string $getXuid() const;

    MCNAPI ::PlayerMovementSettings const& $getMovementSettings() const;

    MCNAPI std::optional<PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;

    MCNAPI void $requestMissingSubChunk(::SubChunkPos const&);

    MCNAPI uchar $getMaxChunkBuildRadius() const;

    MCNAPI void $setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);

    MCNAPI void $setRemotePlayerTicked(bool);

    MCNAPI std::unique_ptr<ISparseContainerSetListener> $createSparseContainerListener();

    MCNAPI void $addChunksToQueue(std::vector<ChunkPos> const&);

    MCNAPI void $onMovePlayerPacketNormal(::Vec3 const&, ::Vec2 const&, float);

    MCNAPI std::shared_ptr<ChunkViewSource> $_createChunkSource(::ChunkSource&);

    MCNAPI void $setAbilities(::LayeredAbilities const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
