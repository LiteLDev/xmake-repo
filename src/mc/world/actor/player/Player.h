#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/certificates/Certificate.h"
#include "mc/entity/components/UserEntityIdentifierComponent.h"
#include "mc/network/NetworkPeer.h"
#include "mc/world/inventory/EnderChestContainer.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/Side.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/ContainerID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/PlayerUIContainer.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/Mob.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/MobSpawnMethod.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/BiomeIdType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorHurtResult;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorOwnerComponent;
class AddPlayerPacket;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class FrameUpdateContextBase;
#else // @header-generator platform
#endif // @header-generator platform
class GameMode;
class GetCollisionShapeInterface;
class HashedString;
class HudContainerManagerModel;
class IConstBlockSource;
class IContainerManager;
#if defined(LL_PLAT_A) // @header-generator platform
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class PlayerListener;
#else // @header-generator platform
#endif // @header-generator platform
class PlayerRespawnRandomizer;
class ResolvedTextObject;
class SerializedSkinRef;
#if defined(LL_PLAT_A) // @header-generator platform
class ShieldItem;
#else // @header-generator platform
#endif // @header-generator platform
class SubChunkPos;
class TextObjectRoot;
#if defined(LL_PLAT_A) // @header-generator platform
class UserEntityIdentifierComponent;
#else // @header-generator platform
#endif // @header-generator platform
class Vec2;
struct AABBShapeComponent;
struct ActorRotationComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeIdType;
#endif // @header-generator platform
struct HurtParameters;
struct INpcDialogueData;
#if defined(LL_PLAT_A) // @header-generator platform
struct MutableAttributeWithContext;
#else // @header-generator platform
#endif // @header-generator platform
struct PlayerAuthenticationInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct PlayerDestroyProgressCacheComponent;
struct PlayerMovementSettings;
struct PlayerPartyInfo;
struct SoundEventIdentifier;
struct StateVectorComponent;
struct Tick;
struct VariantParameterList;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Editor { class IEditorPlayer; }
#endif // @header-generator platform
namespace mce { class Color; }
namespace mce { class UUID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class FrameUpdateContextBase;
class PlayerListener;
#endif // @header-generator platform
// clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

class ConnectionRequest;
class Inventory;
#endif // @header-generator platform

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct CachedSpawnData;
    struct PlayerSpawnPoint;
#else // @header-generator platform
#endif // @header-generator platform
    struct AttackParameters;
#if defined(LL_PLAT_A) // @header-generator platform
    struct FixedSpawnPositionData_DEPRECATED;
#else // @header-generator platform
    struct CachedSpawnData;
#endif // @header-generator platform
    struct FixedSpawnPositionData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct FixedSpawnPositionData_DEPRECATED;
    struct PlayerSpawnPoint;
#endif // @header-generator platform
    // clang-format on

    // Player inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class SpawnPositionSource : int {
        Randomizer = 0,
        Respawn    = 1,
        Teleport   = 2,
        Static     = 3,
    };

#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    enum class SpawnPositionSource : int {
        Randomizer = 0,
        Respawn    = 1,
        Teleport   = 2,
        Static     = 3,
#else // @header-generator platform
    struct AttackParameters {
    public:
        // AttackParameters inner types define
        enum class Sound : int {
            None          = 0,
            Predictive    = 1,
            NonPredictive = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Player::AttackParameters::Sound> mSound;
        ::ll::TypedStorage<1, 1, bool>                              mTriggerCooldown;
        ::ll::TypedStorage<1, 1, bool>                              mCanCrit;
        ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>          mAimDirection;
        // NOLINTEND
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    struct PlayerSpawnPoint {
#else // @header-generator platform
    struct FixedSpawnPositionData {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Vec3>                   mPosition;
        ::ll::TypedStorage<4, 4, ::PlayerSpawnFallbackType> mSpawnFallbackType;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct FixedSpawnPositionData_DEPRECATED {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
        ::ll::TypedStorage<1, 1, bool>    mIsAboveLeaves;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        FixedSpawnPositionData_DEPRECATED();
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct FixedSpawnPositionData {
#else // @header-generator platform
    struct PlayerSpawnPoint {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Vec3>                   mPosition;
        ::ll::TypedStorage<4, 4, ::PlayerSpawnFallbackType> mSpawnFallbackType;
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSpawnBlockPos;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mPlayerPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        FixedSpawnPositionData();
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using PlayerListenerList = std::vector<PlayerListener*>;
#else // @header-generator platform
    using PlayerFlagIDType = schar;

    using PlayerListenerList = ::std::vector<::PlayerListener*>;

public:
    LLNDAPI UserEntityIdentifierComponent const& getUserEntityIdentifier() const;

    LLNDAPI UserEntityIdentifierComponent& getUserEntityIdentifier();

    LLNDAPI optional_ref<ConnectionRequest const> getConnectionRequest() const;

    LLNDAPI NetworkIdentifier const& getNetworkIdentifier() const;

    LLNDAPI SubClientId const& getClientSubId() const;

    LLNDAPI int getSelectedItemSlot() const;

    /**
     * @brief Get the player's uuid
     * @return Player's uuid
     */
    LLNDAPI mce::UUID const& getUuid() const;

    /**
     * @brief Get the player's IP and port
     * @return player's IP and port
     */
    LLNDAPI std::string getIPAndPort() const;

    /**
     * @brief Get the player's real in-game nickname
     * @return player's real in-game nickname
     */
    LLNDAPI std::string getRealName() const;

    /**
     * @brief Get the name of the player's langtext.
     * @return The name of the player's langtext.
     *
     * @warning This is not the player's in-game nickname.
     */
    LLNDAPI std::string getLocaleCode() const;

    LLNDAPI std::optional<NetworkPeer::NetworkStatus> getNetworkStatus() const;

    /**
     * @brief Disconnect player's client
     */
    LLAPI void disconnect(std::string_view reason) const;
    /**
     * @brief Send a message to player
     */
    LLAPI void sendMessage(std::string_view msg) const;

    LLAPI void setAbility(::AbilitiesIndex index, bool value);

    /**
     * @brief Determine if a player is an administrator of the server
     * @return Returns true if the player
     * is an administrator of the server; otherwise returns false
     * @warning Custom permissions are not considered
     * administrators
     */
    LLNDAPI bool isOperator() const;

    /**
     * @brief Give player item and refresh.
     * @return Whether it is a complete success
     *         (e.g.
     * returning false if the quantity of items given to the player does not match the expectation).
     * @warning The
     * return value does not take into account whether the refresh was successful.
     *          You can use
     * Player::add, but it will not refresh the item, which may lead to potential issues.
     */
    LLAPI bool addAndRefresh(class ItemStack& item);

    LLNDAPI optional_ref<EnderChestContainer> getEnderChestContainer() const;

    LLNDAPI Inventory& getInventory() const;

    LLNDAPI static Player* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    LLNDAPI ItemStack const& getSelectedItem() const;

    LLAPI void setSelectedItem(ItemStack const& item) const;

    LLNDAPI bool canSleep() const;

    LLNDAPI bool isHungry() const;

    LLNDAPI int getXpNeededForNextLevel();

    LLNDAPI int getPreviousLevelRequirement();

    LLNDAPI int getXpEarnedAtCurrentLevel();

    LLNDAPI bool setXpEarnedAtCurrentLevel(int xp);

    LLNDAPI static long long getXpNeededForLevelRange(int startLevel, int endLevel);
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                      mFroglights;
    ::ll::TypedStorage<4, 4, float const>                                 mSneakHeight;
    ::ll::TypedStorage<4, 4, float const>                                 mSneakOffset;
    ::ll::TypedStorage<4, 4, int>                                         mScore;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                             mBuildPlatform;
    ::ll::TypedStorage<8, 32, ::std::string>                              mUniqueName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mSelfSignedId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformOfflineId;
    ::ll::TypedStorage<8, 8, uint64>                                      mClientRandomId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingVehicleID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingLeftShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingRightShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mInteractTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mInteractTargetPos;
    ::ll::TypedStorage<1, 1, bool>                                        mHasFakeInventory;
    ::ll::TypedStorage<1, 1, bool>                                        mIsRegionSuspended;
    ::ll::TypedStorage<1, 1, bool>                                        mUpdateMobs;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>       mChunkSource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>       mSpawnChunkSource;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mCapePosO;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mCapePos;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerManagerModel>> mContainerManager;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::ContainerManagerModel const*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                                             mContainerManagerSubscribers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInventory>>           mInventory;
    ::ll::TypedStorage<4, 20, ::InventoryOptions>                            mInventoryOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions>                              mFurnaceOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions>                              mBlastFurnaceOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions>                              mSmokerOptions;
    ::ll::TypedStorage<4, 4, float>                                          mDistanceSinceTransformEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                 mCreativeItemList;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPlatformOnlineId;
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionState>                   mSpawnPositionState;
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionSource>                  mSpawnPositionSource;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mSpawnPositioningTestPosition;
    ::ll::TypedStorage<4, 4, uint>                                           mRespawnChunkBuilderPolicyHandle;
    ::ll::TypedStorage<4, 64, ::Player::CachedSpawnData>                     mCachedSpawnData;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::BlockSource>>                     mSpawnBlockSource;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                   mRespawnStopwatch_Searching;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mRespawnOriginalPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                mRespawnOriginalDimension;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mRespawnMessage;
    ::ll::TypedStorage<1, 1, bool>                                           mRespawnReady;
    ::ll::TypedStorage<1, 1, bool>                                           mIsInitialSpawnDone;
    ::ll::TypedStorage<1, 1, bool>                                           mRespawningFromTheEnd;
    ::ll::TypedStorage<1, 1, bool>                                           mPositionLoadedFromSave;
    ::ll::TypedStorage<1, 1, bool>                                           mBlockRespawnUntilClientMessage;
    ::ll::TypedStorage<1, 1, bool>                                           mHasSeenCredits;
    ::ll::TypedStorage<4, 8, ::std::optional<::PlayerSpawnFallbackType>>     mSpawnFallbackType;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                       mSpawnFallbackPosition;
    ::ll::TypedStorage<8, 168, ::PlayerItemInUse>                            mItemInUse;
    ::ll::TypedStorage<4, 4, ::ActorType>                                    mLastHurtBy;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mPreviousInteractEntity;
    ::ll::TypedStorage<4, 4, int>                                            mPreviousCarriedItem;
    ::ll::TypedStorage<4, 4, int>                                            mEmoteTicks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkChunkPublisher>>    mChunkPublisherView;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                mPacketSender;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EnderChestContainer>>       mEnderChestInventory;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                mTrackedBossIDs;
    ::ll::TypedStorage<8, 136, ::ItemGroup>                                  mCursorSelectedItemGroup;
    ::ll::TypedStorage<8, 440, ::PlayerUIContainer>                          mPlayerUIContainer;
    ::ll::TypedStorage<8, 48, ::InventoryTransactionManager>                 mTransactionManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameMode>>                  mGameMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerRespawnRandomizer>>   mSpawnRandomizer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SerializedSkinRef>>         mSkin;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackNetManagerBase>>   mItemStackNetManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mUIAnimationComponent;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mMapAnimationComponent;
    ::ll::TypedStorage<4, 28, ::Player::PlayerSpawnPoint>                    mPlayerRespawnPoint;
    ::ll::TypedStorage<4, 4, float>                                          mServerBuildRatio;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                  mClientId;
    ::ll::TypedStorage<1, 1, bool>                                           mInteractDataDirty;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldClientGenerateChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>>                  mOceanBiomes;
    ::ll::TypedStorage<1, 1, bool>                                           mUseMapAnimationComponent;
    ::ll::TypedStorage<1, 1, bool>                                           mIsDeferredRenderingFirstPersonObjects;
    ::ll::TypedStorage<1, 1, bool>                                           mDestroyingBlock;
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerLevelChanged;
    ::ll::TypedStorage<4, 4, int>                                            mPreviousLevelRequirement;
    ::ll::TypedStorage<4, 4, int>                                            mLastLevelUpTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mFirstPersonAnimationComponent;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerListener*>>              mListeners;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mRespawnPositionCandidate;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mPreDimensionTransferSpawnPosition;
    ::ll::TypedStorage<4, 4, int>                                            mEnchantmentSeed;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                           mOnScreenAnimationTextures;
    ::ll::TypedStorage<4, 4, int>                                            mOnScreenAnimationTicks;
    ::ll::TypedStorage<4, 4, uint>                                           mChunkRadius;
    ::ll::TypedStorage<4, 4, int>                                            mMapIndex;
    ::ll::TypedStorage<4, 4, float>                                          mElytraVolume;
    ::ll::TypedStorage<8, 8, uint64>                                         mElytraLoop;
    ::ll::TypedStorage<8, 8, int64>                                          mStartedBlockingTimeStamp;
    ::ll::TypedStorage<8, 8, int64>                                          mBlockedUsingShieldTimeStamp;
    ::ll::TypedStorage<8, 8, int64>                                          mBlockedUsingDamagedShieldTimeStamp;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mChatNamePrefix;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mChatNameSuffix;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mChatMessagePrefix;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mLastEmotePlayed;
    ::ll::TypedStorage<8, 8, int64>                                          mEmoteEasterEggEndTime;
    ::ll::TypedStorage<4, 4, uint>                                           mEmoteMessageCount;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mDeviceId;
    ::ll::TypedStorage<1, 1, bool>                                           mFlagClientForBAIReset;
    ::ll::TypedStorage<1, 1, bool>                                           mSendInventoryOptionsToClient;
    ::ll::TypedStorage<1, 1, bool>                                           mIsHostingPlayer;
    ::ll::TypedStorage<1, 1, bool>                                           mPrevBlockedUsingShield;
    ::ll::TypedStorage<1, 1, bool>                                           mPrevBlockedUsingDamagedShield;
    ::ll::TypedStorage<1, 1, bool>                                           mUsedPotion;
    ::ll::TypedStorage<8, 8, ::PlayerDestroyProgressCacheComponent&>         mDestroyProgressCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Player();
#else // @header-generator platform
    virtual ~Player() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void prepareRegion(::ChunkSource& mainChunkSource);
#endif // @header-generator platform

    virtual void destroyRegion();

    virtual void suspendRegion();

    virtual void _fireDimensionChanged();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void changeDimensionWithCredits(::DimensionType);
#else // @header-generator platform
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickWorld(::Tick const&);
#else // @header-generator platform
    virtual void changeDimensionWithCredits(::DimensionType dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void frameUpdate(::FrameUpdateContextBase&) = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void tickWorld(::Tick const&);
#else // LL_PLAT_C
    virtual void tickWorld(::Tick const& currentTick);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ChunkPos> const& getTickingOffsets() const;
#else // @header-generator platform
    virtual void frameUpdate(::FrameUpdateContextBase& frameUpdateContextBase) = 0;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const;

    virtual void normalTick() /*override*/;
#endif // @header-generator platform

    virtual void moveView();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveSpawnView(::Vec3 const&, ::DimensionType);
#else // @header-generator platform
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkMovementStats(::Vec3 const&);
#else // @header-generator platform
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void aiStep() /*override*/;

    virtual bool isFireImmune() const /*override*/;

    virtual void checkMovementStats(::Vec3 const& d);
#endif // @header-generator platform

    virtual ::HashedString getCurrentStructureFeature() const;

    virtual bool isAutoJumpEnabled() const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    virtual void passengerTick() /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void remove() /*override*/;

#endif // @header-generator platform
    virtual void respawn();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual bool shouldDropDeathLoot() const /*override*/;

    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source) /*override*/;

    virtual void dropEquipmentOnDeath() /*override*/;

    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    virtual bool drop(::ItemStack const& item, bool const randomly) /*override*/;
#endif // @header-generator platform

    virtual void resetRot();

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual void resetUserPos(::ActorResetRule resetRule) /*override*/;

#endif // @header-generator platform
    virtual bool isInTrialMode();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual void setSpeed(float _speed) /*override*/;

    virtual int getItemUseDuration() const /*override*/;

    virtual float getItemUseStartupProgress() const /*override*/;

    virtual float getItemUseIntervalProgress() const /*override*/;

    virtual bool isBlocking() const /*override*/;

    virtual bool isDamageBlocked(::ActorDamageSource const& source) const /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllHandEquipment() const /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllEquipment() const /*override*/;

    virtual bool add(::ItemStack& item) /*override*/;

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const /*override*/;

    virtual ::ActorHurtResult attack(::Actor& actor, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    virtual ::ItemStack const& getCarriedItem() const /*override*/;

    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    virtual void damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget) /*override*/;
#endif // @header-generator platform

    virtual void openPortfolio();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openBook(int, bool, int, ::BlockActor*);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void openBook(int, bool, int, ::BlockActor*);
#else // LL_PLAT_C
    virtual void openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openTrading(::ActorUniqueID const&, bool);
#else // @header-generator platform
    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openChalkboard(::ChalkboardBlockActor&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void openChalkboard(::ChalkboardBlockActor&, bool);
#else // LL_PLAT_C
    virtual void openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openNpcInteractScreen(std::shared_ptr<INpcDialogueData>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);
#else // LL_PLAT_C
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> data);
#endif
#endif // @header-generator platform

    virtual void openInventory();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayChatMessage(std::string const&, std::string const&, std::optional<std::string> const);
#else // @header-generator platform
    virtual void displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayClientMessage(std::string const&, std::optional<std::string> const);
#else // @header-generator platform
    virtual void
    displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayTextObjectMessage(::TextObjectRoot const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayTextObjectWhisperMessage(::ResolvedTextObject const&, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::optional<std::string> const, std::string const&, std::string const&);
#else // @header-generator platform
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BedSleepingResult startSleepInBed(::BlockPos const&, bool, float);
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopSleepInBed(bool, bool);
#else // @header-generator platform
    virtual bool isSleeping() const /*override*/;

    virtual void setSleeping(bool val) /*override*/;

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedPos, bool setsRespawn, float sleepOffset);

    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);
#endif // @header-generator platform

    virtual bool canStartSleepInBed();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openSign(::BlockPos const&, bool);
#else // @header-generator platform
    virtual void sendInventory(bool shouldSelectSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playEmote(std::string const&, bool const);
#else // @header-generator platform
    virtual void openSign(::BlockPos const& position, bool isFrontSide);

#ifdef LL_PLAT_S
    virtual void playEmote(::std::string const&, bool const);
#else // LL_PLAT_C
    virtual void playEmote(::std::string const& pieceId, bool const playChatMessage);
#endif

    virtual bool isSilentObserver() const /*override*/;

    virtual void useItem(::ItemStackBase& instance, ::ItemUseMethod itemUseMethod, bool consumeItem) /*override*/;
#endif // @header-generator platform

    virtual bool isLoading() const;

    virtual bool isPlayerInitialized() const;

    virtual void stopLoading();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlayerGameType(::GameType);
#else // @header-generator platform
    virtual float getSpeed() const /*override*/;

    virtual void setPlayerGameType(::GameType gameType);
#endif // @header-generator platform

    virtual void initHUDContainerManager();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void emitCriticalHitParticles(::Actor const&, int);
#else // @header-generator platform
    virtual void emitCriticalHitParticles(::Actor const& target, int particleCount);

    virtual bool isImmobile() const /*override*/;

    virtual void sendMotionPacketIfNeeded() /*override*/;
#endif // @header-generator platform

    virtual ::IMinecraftEventing* getEventing() const;

    virtual uint getUserId() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addExperience(int);
#else // @header-generator platform
    virtual void addExperience(int xp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addLevels(int);
#else // @header-generator platform
    virtual void addLevels(int levels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerData(::IContainerManager&, int, int) = 0;
#else // @header-generator platform
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) = 0;
#else // @header-generator platform
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshContainer(::IContainerManager&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket() /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual void setContainerData(::IContainerManager& menu, int id, int value) = 0;

    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) = 0;

    virtual void refreshContainer(::IContainerManager& menu) = 0;
#endif // @header-generator platform

    virtual void deleteContainerManager();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isActorRelevant(::Actor const&);
#else // @header-generator platform
    virtual ::ItemStack const& getEquippedTotem() const /*override*/;

    virtual bool consumeTotem() /*override*/;

    virtual bool isActorRelevant(::Actor const& actor);

    virtual float getMapDecorationRotation() const /*override*/;

    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void startSwimming() /*override*/;

    virtual void stopSwimming() /*override*/;
#endif // @header-generator platform

    virtual bool isTeacher() const = 0;

    virtual void onSuspension();

    virtual void onLinkedSlotsChanged();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const = 0;
#else // @header-generator platform
    virtual bool canBePulledIntoVehicle() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const = 0;
#else // @header-generator platform
    virtual void feed(int itemId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendNetworkPacket(::Packet&) const;
#else // @header-generator platform
    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const = 0;

    virtual void
    sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const = 0;

    virtual void sendNetworkPacket(::Packet& packet) const;

    virtual bool canExistWhenDisallowMob() const /*override*/;

    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;
#endif // @header-generator platform

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    virtual bool isSimulated() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getXuid() const;
#else // @header-generator platform
    virtual ::std::string getXuid() const;
#endif // @header-generator platform

    virtual ::PlayerMovementSettings const& getMovementSettings() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<PlayerPartyInfo> getPartyInfo_UNTRUSTED() const;
#else // @header-generator platform
    virtual bool canFreeze() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requestMissingSubChunk(::SubChunkPos const&);
#else // @header-generator platform
    virtual bool canInteractWithOtherEntitiesInGame() const /*override*/;

    virtual bool canObstructSpawningAndBlockPlacement() const /*override*/;

    virtual ::std::optional<::BlockPos> getLastDeathPos() const /*override*/;

    virtual ::std::optional<::DimensionType> getLastDeathDimension() const /*override*/;

    virtual bool hasDiedBefore() const /*override*/;

    virtual void doEnterWaterSplashEffect() /*override*/;

    virtual void doExitWaterSplashEffect() /*override*/;

    virtual ::std::optional<::PlayerPartyInfo> getPartyInfo_UNTRUSTED() const;

#ifdef LL_PLAT_S
    virtual void requestMissingSubChunk(::SubChunkPos const&);
#else // LL_PLAT_C
    virtual void requestMissingSubChunk(::SubChunkPos const& scp);
#endif
#endif // @header-generator platform

    virtual uchar getMaxChunkBuildRadius() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);
#else // @header-generator platform
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setRemotePlayerTicked(bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus);
#else // LL_PLAT_C
    virtual void setBehaviorCommandStatus(::std::string const& name, ::BehaviorStatus status);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ISparseContainerSetListener> createSparseContainerListener();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void setRemotePlayerTicked(bool);
#else // LL_PLAT_C
    virtual void setRemotePlayerTicked(bool ticked);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addChunksToQueue(std::vector<ChunkPos> const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::ISparseContainerSetListener> createSparseContainerListener();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMovePlayerPacketNormal(::Vec3 const&, ::Vec2 const&, float);
#else // @header-generator platform
    virtual void addChunksToQueue(::std::vector<::ChunkPos> const& chunkPostions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ChunkViewSource> _createChunkSource(::ChunkSource&);
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setAbilities(::LayeredAbilities const&);
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> getEditorPlayer() const = 0;
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const
        /*override*/;

    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const
        /*override*/;

    virtual ::std::shared_ptr<::ChunkViewSource> _createChunkSource(::ChunkSource& mainChunkSource);

    virtual void setAbilities(::LayeredAbilities const& newAbilities);

    virtual ::AnimationComponent& getAnimationComponent() /*override*/;

    virtual ::HashedString const& getActorRendererId() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const = 0;
#endif // @header-generator platform

    virtual void destroyEditorPlayer() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual void _serverInitItemStackIds() /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI Player(
        ::ILevel&                         level,
        ::PacketSender&                   packetSender,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext,
        ::std::string const&              platformId,
        ::std::string const&              platformOnlineId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canChangeGameType(::GameType) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _canChangeGameType(::GameType newGameType) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _checkAndFixSpawnPosition(::Vec3&, std::vector<gsl::not_null<BlockSource*>>, bool, bool, bool);
#else // @header-generator platform
    MCAPI bool _checkAndFixSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        bool                                           adjustYToSolidGround,
        bool                                           searchUp,
        bool                                           positionFromSave
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkMovementShouldStopEmoting();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _enterBedSleepState(::BlockPos const& bedBlockPos, float sleepOffset);

    MCAPI bool _findFallbackSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        uint const                                     maxDistance,
        bool const                                     checkStoredFallback
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _ensureSafeSpawnPosition(::Vec3&);
#else // @header-generator platform
    MCAPI void _handleCarriedItemInteractText();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _enterBedSleepState(::BlockPos const&, float);
#else // @header-generator platform
    MCAPI bool _isChunkSourceLoaded(::Vec3 const& spawnPosition, ::BlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findFallbackSpawnPosition(::Vec3&, std::vector<gsl::not_null<BlockSource*>>, uint const, bool const);
#else // @header-generator platform
    MCAPI void _setPlayerGameType(::GameType gameType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fireWillChangeDimension();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::BedSleepingResult _validateCanSleepInBed(::BlockPos const& bedBlockPos) const;

    MCAPI ::BedSleepingResult _validateSleepConditions(::BlockPos const& bedBlockPos) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleCarriedItemInteractText();
#else // @header-generator platform
    MCAPI bool _validateSpawnPositionAvailability(
        ::Vec3 const&       pos,
        ::BlockSource*      blockSourceChunkCheck,
        ::Vec3 const* const AABBoffset
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isChunkSourceLoaded(::Vec3 const&, ::BlockSource const&) const;
#else // @header-generator platform
    MCAPI ::ActorHurtResult attack(
        ::Actor&                                       actor,
        ::SharedTypes::Legacy::ActorDamageCause const& cause,
        ::Player::AttackParameters const&              parameters
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPlayerGameType(::GameType);
#else // @header-generator platform
    MCAPI bool canJump();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPreDimensionTransferSpawnPosition(::Vec3 const);
#else // @header-generator platform
    MCAPI bool canOpenContainerScreen();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setStartedBlockingTimeStamp(long);
#else // @header-generator platform
    MCAPI bool canStackInOffhand(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BedSleepingResult _validateCanSleepInBed(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool canUseAbility(::AbilitiesIndex abilityIndex) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BedSleepingResult _validateSleepConditions(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool canUseOperatorBlocks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _validateSpawnPositionAvailability(::Vec3 const&, ::BlockSource*, ::Vec3 const* const) const;
#else // @header-generator platform
    MCAPI void causeFoodExhaustion(float exhaustionAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addListener(::PlayerListener&);
#else // @header-generator platform
    MCAPI bool checkBed(::BlockSource* spawnBlockSource, ::Vec3 const* const positionToCheck);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult
    attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&, ::Player::AttackParameters const&);
#else // @header-generator platform
    MCAPI bool checkNeedAutoJump(float inputMoveX, float inputMoveZ);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastPlayerSpawnedMobEvent(::ActorType, ::MobSpawnMethod);
#else // @header-generator platform
    MCAPI bool checkSpawnBlock(::BlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBeSeenOnMap() const;
#else // @header-generator platform
    MCAPI void completeUsingItem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canJump();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void crackBlock(::BlockPos const& pos, uchar face);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canOpenContainerScreen();
#else // @header-generator platform
    MCAPI void eat(::ItemStack const& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canSleep() const;
#else // @header-generator platform
    MCAPI void eat(int hungerValue, float saturationModifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canStackInOffhand(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI bool equippedArmorItemCanBeMoved(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canUseAbility(::AbilitiesIndex) const;
#else // @header-generator platform
    MCAPI void fireDimensionChangedEvent(::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canUseOperatorBlocks() const;
#else // @header-generator platform
    MCFOLD ::LayeredAbilities const& getAbilities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void causeFoodExhaustion(float);
#else // @header-generator platform
    MCFOLD ::LayeredAbilities& getAbilities();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool checkBed(::BlockSource*, ::Vec3 const* const);
#else // @header-generator platform
    MCAPI ::Agent* getAgentIfAllowed(bool callerCanAccessOtherAgents, ::ActorUniqueID callerAgentID) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool checkNeedAutoJump(float, float);
#else // @header-generator platform
    MCAPI ::SoundEventIdentifier getAttackHitSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool checkSpawnBlock(::BlockSource const&) const;
#else // @header-generator platform
    MCAPI ::SoundEventIdentifier getAttackMissSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearRespawnPosition();
#else // @header-generator platform
    MCAPI ::std::string getChatDisplayName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void completeUsingItem();
#else // @header-generator platform
    MCAPI ::ItemStack const& getCurrentActiveShield() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void crackBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI float getDestroyProgress(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void eat(::ItemStack const&);
#else // @header-generator platform
    MCAPI ::DimensionType getExpectedSpawnDimensionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void eat(int, float);
#else // @header-generator platform
    MCAPI ::BlockPos const& getExpectedSpawnPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool equippedArmorItemCanBeMoved(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI ::std::string getInteractText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireDimensionChangedEvent(::DimensionType, ::DimensionType);
#else // @header-generator platform
    MCAPI int getItemCooldownLeft(::HashedString const& category) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool forceAllowEating() const;
#else // @header-generator platform
    MCAPI int getItemCooldownLeft(uint64 categoryHash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LayeredAbilities const& getAbilities() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI float getItemCooldownProgress(::HashedString const& category) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LayeredAbilities& getAbilities();
#else // @header-generator platform
    MCAPI ::std::string getItemInteractText(::Item const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Agent* getAgent() const;
#else // @header-generator platform
    MCAPI int getMaxItemCooldownLeft() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getAgentID() const;
#else // @header-generator platform
    MCAPI ::AABB getPickupArea() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Agent* getAgentIfAllowed(bool, ::ActorUniqueID) const;
#else // @header-generator platform
    MCAPI ::GameType getPlayerGameType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SoundEventIdentifier getAttackHitSound() const;
#else // @header-generator platform
    MCAPI ::PlayerPermissionLevel getPlayerPermissionLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SoundEventIdentifier getAttackMissSound() const;
#else // @header-generator platform
    MCAPI float getSleepRotation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& getBedPosition() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void handleMovePlayerPacket(
        ::PlayerPositionModeComponent::PositionMode mode,
        ::Vec3 const&                               pos,
        ::Vec2 const&                               rot,
        float                                       yHeadRot,
        int                                         cause,
        int                                         sourceEntityType
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FurnaceOptions const& getBlastFurnaceOptions() const;
#else // @header-generator platform
    MCAPI bool hasResource(::ItemDescriptor const& resource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long getBlockedUsingDamagedShieldTimeStamp() const;
#else // @header-generator platform
    MCAPI ::InteractionResult interact(::Actor& actor, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long getBlockedUsingShieldTimeStamp() const;
#else // @header-generator platform
    MCAPI void inventoryChanged(
        ::Container&,
        int                slot,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool               forceBalanced
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long getBlockingStartTimeStamp() const;
#else // @header-generator platform
    MCAPI bool isEditorPlayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 getCapePos(float);
#else // @header-generator platform
    MCAPI bool isEquipmentHidden() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getChatDisplayName() const;
#else // @header-generator platform
    MCAPI bool isFlying() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> const& getChatMessagePrefix() const;
#else // @header-generator platform
    MCAPI bool isForcedRespawn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> const& getChatNamePrefix() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool isInRaid() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> const& getChatNameSuffix() const;
#else // @header-generator platform
    MCAPI bool isItemOnCooldown(::HashedString const& category) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getChunkRadius() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isScoping() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<IContainerManager> getContainerManager() const;
#else // @header-generator platform
    MCAPI void playPredictiveSynchronizedSound(
        ::SoundEventIdentifier const& soundEvent,
        ::Vec3 const&                 pos,
        int                           data,
        bool                          isGlobal
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<ContainerManagerModel> getContainerManagerModel() const;
#else // @header-generator platform
    MCAPI void playPredictiveSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<StackRefResult<IContainerRegistryAccess>> getContainerRegistryAccess() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void recheckSpawnPosition();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<StackRefResult<IContainerRegistryTracker>> getContainerRegistryTracker() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void registerTrackedBoss(::ActorUniqueID mob);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> const& getCreativeItemList() const;
#else // @header-generator platform
    MCAPI void releaseUsingItem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& getCurrentActiveShield() const;
#else // @header-generator platform
    MCAPI void resetPlayerLevel();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getCurrentOnScreenAnimationEffectID() const;
#else // @header-generator platform
    MCAPI void sendEventPacket(::LegacyTelemetryEventPacket& packet) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDestroyProgress(::Block const&);
#else // @header-generator platform
    MCAPI void setAgent(::Agent* agent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getDirection() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setBedRespawnPosition(::BlockPos const& bedPosition);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<StackRefResult<IDynamicContainerSerialization>> getDynamicContainerSerialization() const;
#else // @header-generator platform
    MCAPI void setChunkRadius(uint chunkRadius);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getEnchantmentSeed() const;
#else // @header-generator platform
    MCAPI void setCommandPermissions(::CommandPermissionLevel permissions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionType getExpectedSpawnDimensionId() const;
#else // @header-generator platform
    MCAPI void setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> manager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& getExpectedSpawnPosition() const;
#else // @header-generator platform
    MCAPI void setName(::std::string const& newName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FurnaceOptions const& getFurnaceOptions() const;
#else // @header-generator platform
    MCAPI void setPlayerUIItem(::PlayerUISlot slot, ::ItemStack const& item, bool forceBalance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameMode& getGameMode() const;
#else // @header-generator platform
    MCAPI void setRespawnPosition(::BlockPos const& inRespawnPosition, ::DimensionType dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<HudContainerManagerModel> getHudContainerManagerModel() const;
#else // @header-generator platform
    MCAPI void setRespawnPositionCandidate();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getInteractText() const;
#else // @header-generator platform
    MCAPI ::ItemStack const& setSelectedSlot(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getInteractTextKey() const;
#else // @header-generator platform
    MCAPI bool setSpawnBlockRespawnPosition(::BlockPos const& spawnBlockPosition, ::DimensionType dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container& getInventory();
#else // @header-generator platform
    MCAPI void startGliding();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InventoryOptions const& getInventoryOptions() const;
#else // @header-generator platform
    MCAPI void startItemCooldown(::Item const& item, bool updateClient);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    MCAPI void startItemCooldown(::HashedString const& type, int tickDuration, bool updateClient);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getItemCooldownLeft(::HashedString const&) const;
#else // @header-generator platform
    MCAPI void
    startItemUseOn(uchar face, ::BlockPos const& blockPos, ::BlockPos const& buildBlockPos, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getItemCooldownLeft(ulong const) const;
#else // @header-generator platform
    MCAPI void startUsingItem(::ItemStack const& instance, int duration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getItemCooldownProgress(::HashedString const&) const;
#else // @header-generator platform
    MCAPI void stopGliding();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& getItemInUse() const;
#else // @header-generator platform
    MCAPI void stopItemUseOn(::BlockPos const& blockPos, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getItemInUseSlot() const;
#else // @header-generator platform
    MCAPI void stopUsingItem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getItemInteractText(::Item const&) const;
#else // @header-generator platform
    MCAPI bool take(::Actor& actor, int, int favoredSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetManagerBase const* getItemStackNetManager() const;
#else // @header-generator platform
    MCAPI bool tryStartGliding();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetManagerBase* getItemStackNetManager();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void unRegisterTrackedBoss(::ActorUniqueID mob);

    MCAPI void updateCreativeItemList(::CreativeItemRegistry const& creativeItemRegistry);

    MCAPI bool updateEmoteMessageData(::PersonaPiece const& emotePiece);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorType getLastHurtBy() const;
#else // @header-generator platform
    MCAPI void updateInventoryTransactions();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getLevelProgress() const;
#else // @header-generator platform
    MCAPI void updateSkin(::SerializedSkinRef const& skin, int clientSubID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getLuck();
#else // @header-generator platform
    MCAPI void updateTouch();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void useSelectedItem(::ItemUseMethod itemUseMethod, bool consumeItem);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static bool checkNeedAutoJump(
        ::IConstBlockSource const&                         region,
        ::AABBShapeComponent const&                        aabbShape,
        ::ActorRotationComponent const&                    actorRotation,
        float                                              movementSpeed,
        ::StateVectorComponent const&                      stateVector,
        ::optional_ref<::GetCollisionShapeInterface const> collisionShapeInterface,
        float                                              inputMoveX,
        float                                              inputMoveZ
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob const&, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob const& mob, ::SharedTypes::Legacy::ActorDamageCause cause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isDangerousVolumeForSpawn(::BlockSource&, ::AABB const&);

    MCNAPI static ::Player const* tryGetFromComponent(::PlayerComponent const&, ::ActorOwnerComponent const&, bool);

    MCNAPI static ::Player* tryGetFromComponent(::PlayerComponent const&, ::ActorOwnerComponent&, bool);

    MCNAPI static ::Player* tryGetFromEntity(::EntityContext&, bool const);

    MCNAPI static ::Player* tryGetFromEntity(::StackRefResult<EntityContext>, bool);

    MCNAPI static void updatePlayerGameTypeEntityData(::EntityContext&, ::GameType, ::GameType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    updatePlayerGameTypeEntityData(::EntityContext& entity, ::GameType gameType, ::GameType defaultGameType);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_BB_HEIGHT();
#else // @header-generator platform
    MCAPI static ::Attribute const& EXHAUSTION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_BB_WIDTH();
#else // @header-generator platform
    MCAPI static ::Attribute const& EXPERIENCE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_PLAYER_EYE_OFFSET();
#else // @header-generator platform
    MCAPI static ::Attribute const& HUNGER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_PLAYER_HEIGHT_OFFSET();
#else // @header-generator platform
    MCAPI static ::Attribute const& LEVEL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Attribute const& SATURATION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ILevel&                         level,
        ::PacketSender&                   packetSender,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext,
        ::std::string const&              platformId,
        ::std::string const&              platformOnlineId
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_serverInitItemStackIds();
#else // @header-generator platform
    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetUserPos(::ActorResetRule);
#else // @header-generator platform
    MCAPI void $destroyRegion();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $remove();
#else // @header-generator platform
    MCAPI void $suspendRegion();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;
#else // @header-generator platform
    MCAPI void $_fireDimensionChanged();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFireImmune() const;
#else // @header-generator platform
    MCAPI bool $canChangeDimensionsUsingPortal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    MCFOLD void $changeDimensionWithCredits(::DimensionType dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Packet> $tryCreateAddActorPacket();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $tickWorld(::Tick const&);
#else // LL_PLAT_C
    MCAPI void $tickWorld(::Tick const& currentTick);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $passengerTick();
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $startRiding(::Actor&, bool);
#else // @header-generator platform
    MCAPI void $moveView();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getNameTagTextColor() const;
#else // @header-generator platform
    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCFOLD void $onSynchedDataUpdate(int dataId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canInteractWithOtherEntitiesInGame() const;
#else // @header-generator platform
    MCAPI void $aiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isImmobile() const;
#else // @header-generator platform
    MCAPI bool $isFireImmune() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSilentObserver() const;
#else // @header-generator platform
    MCFOLD void $checkMovementStats(::Vec3 const& d);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSleeping() const;
#else // @header-generator platform
    MCAPI ::HashedString $getCurrentStructureFeature() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSleeping(bool);
#else // @header-generator platform
    MCFOLD bool $isAutoJumpEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBlocking() const;
#else // @header-generator platform
    MCAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDamageBlocked(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI void $passengerTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI void $remove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $feed(int);
#else // @header-generator platform
    MCAPI void $respawn();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCAPI bool $shouldDropDeathLoot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getActorRendererId() const;
#else // @header-generator platform
    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void $dropEquipmentOnDeath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCarriedItem(::ItemStack const&);
#else // @header-generator platform
    MCFOLD void $clearVanishEnchantedItemsOnDeath();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getCarriedItem() const;
#else // @header-generator platform
    MCAPI bool $drop(::ItemStack const& item, bool const randomly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOffhandSlot(::ItemStack const&);
#else // @header-generator platform
    MCFOLD void $resetRot();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getEquippedTotem() const;
#else // @header-generator platform
    MCAPI void $resetUserPos(::ActorResetRule resetRule);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $consumeTotem();
#else // @header-generator platform
    MCFOLD bool $isInTrialMode();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canFreeze() const;
#else // @header-generator platform
    MCAPI void $setSpeed(float _speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangeDimensionsUsingPortal() const;
#else // @header-generator platform
    MCAPI int $getItemUseDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    MCAPI float $getItemUseStartupProgress() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSynchedDataUpdate(int);
#else // @header-generator platform
    MCAPI float $getItemUseIntervalProgress() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAddPassenger(::Actor&) const;
#else // @header-generator platform
    MCAPI bool $isBlocking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBePulledIntoVehicle() const;
#else // @header-generator platform
    MCAPI bool $isDamageBlocked(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendMotionPacketIfNeeded();
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent id, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startSwimming();
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack const*> $getAllHandEquipment() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopSwimming();
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;
#else // @header-generator platform
    MCAPI bool $add(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canObstructSpawningAndBlockPlacement() const;
#else // @header-generator platform
    MCAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AnimationComponent& $getAnimationComponent();
#else // @header-generator platform
    MCAPI ::ActorHurtResult $attack(::Actor& actor, ::SharedTypes::Legacy::ActorDamageCause const& cause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $useItem(::ItemStackBase&, ::ItemUseMethod, bool);
#else // @header-generator platform
    MCAPI ::ItemStack const& $getCarriedItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getMapDecorationRotation() const;
#else // @header-generator platform
    MCAPI void $setCarriedItem(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $add(::ItemStack&);
#else // @header-generator platform
    MCAPI void $damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $drop(::ItemStack const&, bool const);
#else // @header-generator platform
    MCFOLD void $openPortfolio();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $openBook(int, bool, int, ::BlockActor*);
#else // LL_PLAT_C
    MCFOLD void $openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldDropDeathLoot() const;
#else // @header-generator platform
    MCFOLD void $openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $getLastDeathPos() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $openChalkboard(::ChalkboardBlockActor&, bool);
#else // LL_PLAT_C
    MCFOLD void $openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<DimensionType> $getLastDeathDimension() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);
#else // LL_PLAT_C
    MCFOLD void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasDiedBefore() const;
#else // @header-generator platform
    MCFOLD void $openInventory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doEnterWaterSplashEffect();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );
#else // LL_PLAT_C
    MCFOLD void $displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doExitWaterSplashEffect();
#else // @header-generator platform
    MCAPI void
    $displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCFOLD void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BedSleepingResult $startSleepInBed(::BlockPos const&, bool, float);
#else // @header-generator platform
    MCFOLD void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopSleepInBed(bool, bool);
#else // @header-generator platform
    MCFOLD void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canStartSleepInBed();
#else // @header-generator platform
    MCFOLD void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $openSign(::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playEmote(std::string const&, bool const);
#else // @header-generator platform
    MCAPI bool $isSleeping() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLoading() const;
#else // @header-generator platform
    MCAPI void $setSleeping(bool val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPlayerInitialized() const;
#else // @header-generator platform
    MCAPI ::BedSleepingResult $startSleepInBed(::BlockPos const& bedPos, bool setsRespawn, float sleepOffset);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopLoading();
#else // @header-generator platform
    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPlayerGameType(::GameType);
#else // @header-generator platform
    MCAPI bool $canStartSleepInBed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initHUDContainerManager();
#else // @header-generator platform
    MCFOLD void $sendInventory(bool shouldSelectSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $emitCriticalHitParticles(::Actor const&, int);
#else // @header-generator platform
    MCFOLD void $openSign(::BlockPos const& position, bool isFrontSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IMinecraftEventing* $getEventing() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $playEmote(::std::string const&, bool const);
#else // LL_PLAT_C
    MCFOLD void $playEmote(::std::string const& pieceId, bool const playChatMessage);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getUserId() const;
#else // @header-generator platform
    MCAPI bool $isSilentObserver() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addExperience(int);
#else // @header-generator platform
    MCAPI void $useItem(::ItemStackBase& instance, ::ItemUseMethod itemUseMethod, bool consumeItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addLevels(int);
#else // @header-generator platform
    MCFOLD bool $isLoading() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deleteContainerManager();
#else // @header-generator platform
    MCFOLD bool $isPlayerInitialized() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isActorRelevant(::Actor const&);
#else // @header-generator platform
    MCFOLD void $stopLoading();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSuspension();
#else // @header-generator platform
    MCAPI float $getSpeed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLinkedSlotsChanged();
#else // @header-generator platform
    MCAPI void $setPlayerGameType(::GameType gameType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendNetworkPacket(::Packet&) const;
#else // @header-generator platform
    MCAPI void $initHUDContainerManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSimulated() const;
#else // @header-generator platform
    MCAPI void $emitCriticalHitParticles(::Actor const& target, int particleCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getXuid() const;
#else // @header-generator platform
    MCAPI bool $isImmobile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerMovementSettings const& $getMovementSettings() const;
#else // @header-generator platform
    MCFOLD void $sendMotionPacketIfNeeded();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;
#else // @header-generator platform
    MCAPI ::IMinecraftEventing* $getEventing() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $requestMissingSubChunk(::SubChunkPos const&);
#else // @header-generator platform
    MCFOLD uint $getUserId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getMaxChunkBuildRadius() const;
#else // @header-generator platform
    MCAPI void $addExperience(int xp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);
#else // @header-generator platform
    MCAPI void $addLevels(int levels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setRemotePlayerTicked(bool);
#else // @header-generator platform
    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ISparseContainerSetListener> $createSparseContainerListener();
#else // @header-generator platform
    MCAPI void $setOffhandSlot(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addChunksToQueue(std::vector<ChunkPos> const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMovePlayerPacketNormal(::Vec3 const&, ::Vec2 const&, float);
#else // @header-generator platform
    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ChunkViewSource> $_createChunkSource(::ChunkSource&);
#else // @header-generator platform
    MCAPI void $deleteContainerManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setAbilities(::LayeredAbilities const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::ItemStack const& $getEquippedTotem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI bool $consumeTotem();

    MCFOLD bool $isActorRelevant(::Actor const& actor);

    MCFOLD float $getMapDecorationRotation() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $startSwimming();

    MCAPI void $stopSwimming();

    MCFOLD void $onSuspension();

    MCFOLD void $onLinkedSlotsChanged();

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI void $feed(int itemId);

    MCFOLD void $sendNetworkPacket(::Packet& packet) const;

    MCFOLD bool $canExistWhenDisallowMob() const;

    MCAPI ::mce::Color $getNameTagTextColor() const;

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCFOLD bool $isSimulated() const;

    MCAPI ::std::string $getXuid() const;

    MCAPI ::PlayerMovementSettings const& $getMovementSettings() const;

    MCAPI bool $canFreeze() const;

    MCAPI bool $canInteractWithOtherEntitiesInGame() const;

    MCAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCAPI ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCAPI ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCAPI bool $hasDiedBefore() const;

    MCAPI void $doEnterWaterSplashEffect();

    MCAPI void $doExitWaterSplashEffect();

    MCFOLD ::std::optional<::PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;

#ifdef LL_PLAT_S
    MCFOLD void $requestMissingSubChunk(::SubChunkPos const&);
#else // LL_PLAT_C
    MCFOLD void $requestMissingSubChunk(::SubChunkPos const& scp);
#endif

    MCFOLD uchar $getMaxChunkBuildRadius() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

#ifdef LL_PLAT_S
    MCFOLD void $setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus);
#else // LL_PLAT_C
    MCFOLD void $setBehaviorCommandStatus(::std::string const& name, ::BehaviorStatus status);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $setRemotePlayerTicked(bool);
#else // LL_PLAT_C
    MCFOLD void $setRemotePlayerTicked(bool ticked);
#endif

    MCFOLD ::std::unique_ptr<::ISparseContainerSetListener> $createSparseContainerListener();

    MCFOLD void $addChunksToQueue(::std::vector<::ChunkPos> const& chunkPostions);

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);

    MCAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI ::HashedString const& $getActorRendererId() const;

    MCFOLD void $_serverInitItemStackIds();

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();


#endif // @header-generator platform
    // NOLINTEND
};
