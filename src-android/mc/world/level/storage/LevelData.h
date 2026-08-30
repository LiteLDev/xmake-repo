#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/network/ServerEditorConnectionPolicy.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/actor/player/Abilities.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
#include "mc/world/level/storage/AdventureSettings.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"
#include "mc/world/level/storage/LevelDataProperty.h"
#include "mc/world/level/storage/LevelDataType.h"
#include "mc/world/level/storage/LevelDataValue.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/WorldTemplateLevelData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class ContentIdentity;
class Experiments;
class ILevelStorageManagerConnector;
class LevelSeed64;
class LevelSettings;
class WorldClockRegistry;
struct EduSharedUriResource;
struct GameRuleId;
struct PackIdVersion;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Json { class Value; }
namespace RakNet { class BitStream; }
// clang-format on

class LevelData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 5, ::AdventureSettings> mAdventureSettings;
    ::ll::UntypedStorage<8, 144> mWorldTemplateLevelData;
    ::ll::TypedStorage<8, 160, ::GameRules> mGameRules;
    ::ll::TypedStorage<8, 56, ::ExperimentStorage> mExperiments;
    ::ll::TypedStorage<4, 240, ::Abilities> mDefaultAbilities;
    ::ll::TypedStorage<8, 24, ::PermissionsHandler> mDefaultPermissions;
    ::ll::TypedStorage<8, 24, std::string> mLevelName;
    ::ll::TypedStorage<4, 4, ::StorageVersion> mStorageVersion;
    ::ll::TypedStorage<8, 48, ::GameVersion> mMinCompatibleClientVersion;
    ::ll::UntypedStorage<4, 4> mNetworkVersion;
    ::ll::UntypedStorage<8, 24> mInventoryVersion;
    ::ll::TypedStorage<8, 8, ::Tick> mCurrentTick;
    ::ll::TypedStorage<1, 1, bool> mHasSpawnPos;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLimitedWorldOrigin;
    ::ll::TypedStorage<4, 4, int> mOverworldTimeSetting;
    ::ll::UntypedStorage<8, 24> mWorldClockRegistry;
    ::ll::TypedStorage<8, 8, long> mLastSaved;
    ::ll::TypedStorage<4, 4, uint> mServerTickRange;
    ::ll::TypedStorage<4, 4, float> mRainLevel;
    ::ll::TypedStorage<4, 4, int> mRainTime;
    ::ll::TypedStorage<4, 4, float> mLightningLevel;
    ::ll::TypedStorage<4, 4, int> mLightningTime;
    ::ll::TypedStorage<4, 4, int> mNetherScale;
    ::ll::TypedStorage<8, 48, ::GameVersion> mLastOpenedWithVersion;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool> mForceGameType;
    ::ll::TypedStorage<1, 1, bool> mIsHardcore;
    ::ll::TypedStorage<1, 1, bool> mPlayerHasDied;
    ::ll::TypedStorage<1, 1, bool> mSpawnMobs;
    ::ll::TypedStorage<1, 1, bool> mAdventureModeOverridesEnabled;
    ::ll::UntypedStorage<8, 16> mFlatWorldOptions;
    ::ll::TypedStorage<4, 4, uint> mWorldStartCount;
    ::ll::TypedStorage<1, 1, bool> mAchievementsDisabled;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType> mEditorWorldType;
    ::ll::TypedStorage<1, 1, bool> mAllowAnonymousBlockDropsInEditorWorlds;
    ::ll::TypedStorage<4, 4, ::ServerEditorConnectionPolicy> mServerEditorConnectionPolicy;
    ::ll::TypedStorage<1, 1, bool> mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool> mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue> mEducationEditionOffer;
    ::ll::TypedStorage<8, 136, std::optional<CloudSaveLevelInfo>> mCloudSaveInfo;
    ::ll::TypedStorage<1, 1, bool> mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool> mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool> mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool> mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool> mMultiplayerGame;
    ::ll::TypedStorage<1, 1, bool> mLANBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool> mLANBroadcast;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mXBLBroadcastMode;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mPlatformBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mPlatformBroadcastMode;
    ::ll::TypedStorage<1, 1, bool> mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool> mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool> mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool> mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool> mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool> mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool> mIsRandomSeedAllowed;
    ::ll::TypedStorage<8, 24, std::string> mEducationProductId;
    ::ll::TypedStorage<8, 24, std::string> mEducationCreatorId;
    ::ll::TypedStorage<8, 24, std::string> mEducationCreatorWorldId;
    ::ll::TypedStorage<8, 24, std::string> mEducationReferrerId;
    ::ll::TypedStorage<1, 1, bool> mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool> mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool> mBonusChestSpawned;
    ::ll::TypedStorage<1, 1, bool> mStartWithMapEnabled;
    ::ll::TypedStorage<1, 1, bool> mMapsCenteredToOrigin;
    ::ll::TypedStorage<1, 1, bool> mRequiresCopiedPackRemovalCheck;
    ::ll::TypedStorage<1, 1, bool> mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool> mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool> mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool> mEmoteChatMuted;
    ::ll::TypedStorage<1, 1, bool> mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<1, 1, ::NetherWorldType> mNetherType;
    ::ll::TypedStorage<8, 40, ::SpawnSettings> mSpawnSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, LevelDataValue>> mValues;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, LevelDataValue>> mOverrides;
    ::ll::TypedStorage<8, 24, std::string> mBiomeOverride;
    ::ll::TypedStorage<4, 8, std::optional<GeneratorType>> mDataDrivenGeneratorType;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel> mChatRestrictionLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (bool), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mIsHardcoreSubscribers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelData;
    ::ll::UntypedStorage<8, 48> mLevelDataPropertiesPublishers;
    ::ll::TypedStorage<4, 4, ::LevelDataType> mLevelDataType;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelData(::CompoundTag const&);

    MCNAPI LevelData(::LevelData&&);

    MCNAPI LevelData(bool const, ::LevelDataType);

    MCNAPI LevelData(
        ::LevelSettings const&,
        std::string const&,
        ::GeneratorType,
        ::BlockPos const&,
        bool,
        ::EducationEditionOffer,
        float,
        float
    );

    MCNAPI std::optional<std::reference_wrapper<
        Bedrock::PubSub::
            Publisher<void(), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>>
           _getLevelDataPropertyPublisher(::LevelDataProperty) const;

    MCNAPI void _initLevelDataPropertyPublishers();

    MCNAPI void _resetDefaultAdvancedSettingsData(bool);

    MCNAPI void _resetDefaultGeneralSettingsData();

    MCNAPI void _resetDefaultMultiplayerSettingsData(bool);

    MCNAPI void _resetDefaultScriptingCodingSettingsData();

    MCNAPI bool achievementsWillBeDisabledOnLoad() const;

    MCNAPI void applyPolicyBasedSettings(bool);

    MCNAPI void clearCloudSaveInfo();

    MCNAPI std::unique_ptr<CompoundTag> createTag() const;

    MCNAPI void disableAchievements();

    MCNAPI bool educationFeaturesEnabled() const;

    MCNAPI bool getAdventureModeOverridesEnabled() const;

    MCNAPI bool getAllowAnonymousBlockDropsInEditorWorlds() const;

    MCNAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCNAPI std::string const getBiomeOverride() const;

    MCNAPI bool getBonusChestSpawned() const;

    MCNAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCNAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCNAPI ::CloudSaveLevelInfo& getCloudSaveInfo();

    MCNAPI ::Tick const& getCurrentTick() const;

    MCNAPI bool getCustomSkinsDisabled() const;

    MCNAPI ::DaylightCycle getDaylightCycle() const;

    MCNAPI ::Abilities& getDefaultAbilities();

    MCNAPI ::PermissionsHandler const& getDefaultPermissions() const;

    MCNAPI ::PermissionsHandler& getDefaultPermissions();

    MCNAPI ::Editor::WorldType getEditorWorldType() const;

    MCNAPI ::CompoundTag const& getEduSharedUriResource() const;

    MCNAPI std::string const& getEducationCreatorId() const;

    MCNAPI std::string const& getEducationCreatorWorldId() const;

    MCNAPI ::EducationEditionOffer getEducationEditionOffer() const;

    MCNAPI std::string const& getEducationOid() const;

    MCNAPI std::string const& getEducationProductId() const;

    MCNAPI std::string const& getEducationReferrerId() const;

    MCNAPI bool getEmoteChatMuted() const;

    MCNAPI ::Experiments const& getExperiments() const;

    MCNAPI ::Experiments& getExperiments();

    MCNAPI ::Json::Value const& getFlatWorldOptions() const;

    MCNAPI std::optional<FlatWorldPresetID> getFlatWorldPreset() const;

    MCNAPI bool getForceGameType() const;

    MCNAPI ::SharedTypes::Legacy::Difficulty getGameDifficulty() const;

    MCNAPI ::GameRules const& getGameRules() const;

    MCNAPI ::GameRules& getGameRules();

    MCNAPI ::GameType getGameType() const;

    MCNAPI ::GeneratorType getGenerator() const;

    MCNAPI bool getHasUncompleteWorldFileOnDisk() const;

    MCNAPI bool const getIsSingleUseWorld() const;

    MCNAPI bool getLANBroadcast() const;

    MCNAPI bool getLANBroadcastIntent() const;

    MCNAPI long getLastSaved() const;

    MCNAPI ::LevelDataType getLevelDataType() const;

    MCNAPI std::string const& getLevelName() const;

    MCNAPI float getLightningLevel() const;

    MCNAPI int getLightningTime() const;

    MCNAPI int getLimitedWorldDepth() const;

    MCNAPI int getLimitedWorldWidth() const;

    MCNAPI ::GameVersion const& getMinCompatibleClientVersion() const;

    MCNAPI bool getMultiplayerGameIntent() const;

    MCNAPI int getNetherScale() const;

    MCNAPI ::NetherWorldType getNetherType() const;

    MCNAPI int getNetworkVersion() const;

    MCNAPI bool getOnlySpawnV1Villagers() const;

    MCNAPI int getOverworldTime() const;

    MCNAPI int getOverworldTimeSetting() const;

    MCNAPI bool getPersonaDisabled() const;

    MCNAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCNAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    MCNAPI bool getPlayerHasDied() const;

    MCNAPI ::ContentIdentity const& getPremiumTemplateContentIdentity() const;

    MCNAPI float getRainLevel() const;

    MCNAPI int getRainTime() const;

    MCNAPI ::LevelSeed64 getSeed() const;

    MCNAPI uint getServerChunkTickRange() const;

    MCNAPI ::ServerEditorConnectionPolicy getServerEditorConnectionPolicy() const;

    MCNAPI ::BlockPos const& getSpawnPos() const;

    MCNAPI ::SpawnSettings const& getSpawnSettings() const;

    MCNAPI ::StorageVersion getStorageVersion() const;

    MCNAPI void getTagData(::CompoundTag const&);

    MCNAPI bool getUseMsaGamertagsOnly() const;

    MCNAPI ::BlockPos const& getWorldCenter() const;

    MCNAPI uint getWorldStartCount() const;

    MCNAPI ::PackIdVersion const& getWorldTemplateIdentity() const;

    MCNAPI ::WorldVersion getWorldVersion() const;

    MCNAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCNAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    MCNAPI bool hasAchievementsDisabled() const;

    MCNAPI bool hasBonusChestEnabled() const;

    MCNAPI bool hasCheatsEnabled() const;

    MCNAPI bool hasCloudSaveAssociation() const;

    MCNAPI bool hasCommandsEnabled() const;

    MCNAPI bool hasConfirmedPlatformLockedContent() const;

    MCNAPI bool hasLockedBehaviorPack() const;

    MCNAPI bool hasLockedResourcePack() const;

    MCNAPI bool hasMapsCenteredToOrigin() const;

    MCNAPI bool hasSpawnPos() const;

    MCNAPI bool hasStartWithMapEnabled() const;

    MCNAPI void incrementTick();

    MCNAPI bool isAlwaysDay() const;

    MCNAPI bool isCloudSaveActiveForWorld() const;

    MCNAPI bool isCreatedInEditor() const;

    MCNAPI bool isEditionCompatible() const;

    MCNAPI bool isEditorTestWorld() const;

    MCNAPI bool isEditorWorld() const;

    MCNAPI bool isEducationEditionLevel() const;

    MCNAPI bool isExportedFromEditor() const;

    MCNAPI bool isFromLockedTemplate() const;

    MCNAPI bool isFromWorldTemplate() const;

    MCNAPI bool isGameRule(::GameRuleId) const;

    MCNAPI bool isHardcore() const;

    MCNAPI bool isLegacyLevel() const;

    MCNAPI bool isLightning() const;

    MCNAPI bool isMultiplayerGame() const;

    MCNAPI bool isNewLevel() const;

    MCNAPI bool isPremiumWorldTemplate() const;

    MCNAPI bool isRaining() const;

    MCNAPI bool isRandomSeedAllowed() const;

    MCNAPI bool isTexturepacksRequired() const;

    MCNAPI bool isWorldTemplateOptionLocked() const;

    MCNAPI void migrateLegacyEditorAchievementFlags();

    MCNAPI ::LevelData& operator=(::LevelData&&);

    MCNAPI void recordStartUp();

    MCNAPI ::Bedrock::PubSub::Subscription registerIsHardcoreListener(std::function<void(bool)>) const;

    MCNAPI ::Bedrock::PubSub::Subscription
        registerLevelDataPropertyListener(::LevelDataProperty, std::function<void()>) const;

    MCNAPI void registerWithLevelStorageManagerEvents(::ILevelStorageManagerConnector&);

    MCNAPI bool requiresCopiedPackRemovalCheck() const;

    MCNAPI void resetDefaultCheatSettingsData();

    MCNAPI void resetSettingsForRandomSeed();

    MCNAPI void resetToDefaultSettings();

    MCNAPI void resetToTrialSettings();

    MCNAPI void setAdventureModeOverridesEnabled(bool);

    MCNAPI void setBaseGameVersion(::BaseGameVersion const&);

    MCNAPI void setBiomeOverride(std::string const&);

    MCNAPI void setBonusChestEnabled(bool);

    MCNAPI void setBonusChestSpawned(bool);

    MCNAPI void setChatRestrictionLevel(::ChatRestrictionLevel);

    MCNAPI void setCheatsEnabled(bool);

    MCNAPI void setCloudSaveInfo(::CloudSaveLevelInfo const&);

    MCNAPI void setCommandsEnabled(bool);

    MCNAPI void setConfirmedPlatformLockedContent(bool);

    MCNAPI void setCurrentTick(::Tick);

    MCNAPI void setCustomSkinsDisabled(bool);

    MCNAPI void setDataDrivenGenerator(::GeneratorType const);

    MCNAPI void setDaylightCycle(::DaylightCycle);

    MCNAPI void setEditorWorldType(::Editor::WorldType const);

    MCNAPI void setEduSharedUriResource(::EduSharedUriResource const&);

    MCNAPI void setEducationEditionOffer(::EducationEditionOffer);

    MCNAPI void setEducationFeaturesEnabled(bool);

    MCNAPI void setEducationOid(std::string const&);

    MCNAPI void setEducationProductId(std::string const&);

    MCNAPI void setEducationReferrerId(std::string const&);

    MCNAPI void setEmoteChatMuted(bool);

    MCNAPI void setFlatWorldPreset(::FlatWorldPresetID);

    MCNAPI void setForceGameType(bool);

    MCNAPI void setFromLockedTemplate(bool);

    MCNAPI void setFromWorldTemplate(bool);

    MCNAPI void setGameDifficulty(::SharedTypes::Legacy::Difficulty);

    MCNAPI void setGameType(::GameType);

    MCNAPI void setGenerator(::GeneratorType);

    MCNAPI void setHasLockedBehaviorPack(bool);

    MCNAPI void setHasLockedResourcePack(bool);

    MCNAPI void setHasUncompleteWorldFileOnDisk(bool);

    MCNAPI void setIsCreatedInEditor(bool);

    MCNAPI void setIsHardcore(bool);

    MCNAPI void setIsRandomSeedAllowed(bool);

    MCNAPI void setIsSingleUseWorld(bool const);

    MCNAPI void setLANBroadcast(bool);

    MCNAPI void setLANBroadcastIntent(bool);

    MCNAPI void setLevelName(std::string const&);

    MCNAPI void setLightningLevel(float);

    MCNAPI void setLightningTime(int);

    MCNAPI void setMultiplayerGame(bool);

    MCNAPI void setMultiplayerGameIntent(bool);

    MCNAPI void setNetherType(::NetherWorldType const&);

    MCNAPI void setOnlySpawnV1Villagers(bool);

    MCNAPI void setOverworldTimeSetting(int);

    MCNAPI void setPersonaDisabled(bool);

    MCNAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting);

    MCNAPI void setPlatformBroadcastMode(::Social::GamePublishSetting);

    MCNAPI void setPlayerHasDied(bool);

    MCNAPI void setPremiumTemplateContentIdentity(::ContentIdentity const&);

    MCNAPI void setRainLevel(float);

    MCNAPI void setRainTime(int);

    MCNAPI void setRequiresCopiedPackRemovalCheck(bool);

    MCNAPI void setSeed(::LevelSeed64);

    MCNAPI void setServerChunkTickRange(uint);

    MCNAPI void setSpawnPos(::BlockPos const&);

    MCNAPI void setSpawnSettings(::SpawnSettings const&);

    MCNAPI void setStartWithMapEnabled(bool);

    MCNAPI void setStorageVersion(::StorageVersion);

    MCNAPI void setTagData(::CompoundTag&) const;

    MCNAPI void setTexturepacksRequired(bool);

    MCNAPI void setUseMsaGamertagsOnly(bool);

    MCNAPI void setWorldClockRegistry(::Bedrock::NonOwnerPointer<const WorldClockRegistry> const);

    MCNAPI void setWorldTemplateIdentity(::PackIdVersion const&);

    MCNAPI void setWorldTemplateOptionLocked(bool);

    MCNAPI void setWorldVersion(::WorldVersion);

    MCNAPI void setXBLBroadcastIntent(::Social::GamePublishSetting);

    MCNAPI void setXBLBroadcastMode(::Social::GamePublishSetting);

    MCNAPI bool shouldAchievementsBeDisabled(bool, bool) const;

    MCNAPI void touchLastLoadedWithVersion();

    MCNAPI void updateLastTimeSaved() const;

    MCNAPI void v1_read(::RakNet::BitStream&, ::StorageVersion);

    MCNAPI ~LevelData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CompoundTag const&);

    MCNAPI void* $ctor(::LevelData&&);

    MCNAPI void* $ctor(bool const, ::LevelDataType);

    MCNAPI void* $ctor(
        ::LevelSettings const&,
        std::string const&,
        ::GeneratorType,
        ::BlockPos const&,
        bool,
        ::EducationEditionOffer,
        float,
        float
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
