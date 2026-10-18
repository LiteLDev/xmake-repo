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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/LevelDataValue.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/WorldTemplateLevelData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class ContentIdentity;
class Experiments;
#else // @header-generator platform
#endif // @header-generator platform
class ILevelStorageManagerConnector;
class LevelSeed64;
class LevelSettings;
class WorldClockRegistry;
struct EduSharedUriResource;
#if defined(LL_PLAT_A) // @header-generator platform
struct GameRuleId;
struct PackIdVersion;
#else // @header-generator platform
struct LevelDataValue;
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace RakNet { class BitStream; }
// clang-format on

class LevelData {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // LevelData inner types define
    using LevelDataPublisher = ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

    using LevelDataPublisherRefWrapper = ::std::reference_wrapper<
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 5, ::AdventureSettings>                                     mAdventureSettings;
    ::ll::TypedStorage<8, 144, ::WorldTemplateLevelData>                              mWorldTemplateLevelData;
    ::ll::TypedStorage<8, 192, ::GameRules>                                           mGameRules;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage>                                    mExperiments;
    ::ll::TypedStorage<4, 240, ::Abilities>                                           mDefaultAbilities;
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>                                   mDefaultPermissions;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLevelName;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                                        mStorageVersion;
    ::ll::TypedStorage<8, 56, ::GameVersion>                                          mMinCompatibleClientVersion;
    ::ll::TypedStorage<4, 4, int>                                                     mNetworkVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mInventoryVersion;
    ::ll::TypedStorage<8, 8, ::Tick>                                                  mCurrentTick;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasSpawnPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mLimitedWorldOrigin;
    ::ll::TypedStorage<4, 4, int>                                                     mOverworldTimeSetting;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::WorldClockRegistry const>> mWorldClockRegistry;
    ::ll::TypedStorage<8, 8, int64>                                                   mLastSaved;
    ::ll::TypedStorage<4, 4, uint>                                                    mServerTickRange;
    ::ll::TypedStorage<4, 4, float>                                                   mRainLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mRainTime;
    ::ll::TypedStorage<4, 4, float>                                                   mLightningLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mLightningTime;
    ::ll::TypedStorage<4, 4, int>                                                     mNetherScale;
    ::ll::TypedStorage<8, 56, ::GameVersion>                                          mLastOpenedWithVersion;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>                       mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool>                                                    mForceGameType;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsHardcore;
    ::ll::TypedStorage<1, 1, bool>                                                    mPlayerHasDied;
    ::ll::TypedStorage<1, 1, bool>                                                    mSpawnMobs;
    ::ll::TypedStorage<1, 1, bool>                                                    mAdventureModeOverridesEnabled;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                          mFlatWorldOptions;
    ::ll::TypedStorage<4, 4, uint>                                                    mWorldStartCount;
    ::ll::TypedStorage<1, 1, bool>                                                    mAchievementsDisabled;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                                     mEditorWorldType;
    ::ll::TypedStorage<1, 1, bool>                                    mAllowAnonymousBlockDropsInEditorWorlds;
    ::ll::TypedStorage<4, 4, ::ServerEditorConnectionPolicy>          mServerEditorConnectionPolicy;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool>                                    mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>            mEducationEditionOffer;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>> mCloudSaveInfo;
    ::ll::TypedStorage<1, 1, bool>                                    mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool>                                    mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                    mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool>                                    mMultiplayerGame;
    ::ll::TypedStorage<1, 1, bool>                                    mLANBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                                    mLANBroadcast;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mXBLBroadcastMode;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mPlatformBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mPlatformBroadcastMode;
    ::ll::TypedStorage<1, 1, bool>                                    mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool>                                    mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool>                                    mIsRandomSeedAllowed;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationProductId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorWorldId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationReferrerId;
    ::ll::TypedStorage<1, 1, bool>                                    mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool>                                    mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mBonusChestSpawned;
    ::ll::TypedStorage<1, 1, bool>                                    mStartWithMapEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mMapsCenteredToOrigin;
    ::ll::TypedStorage<1, 1, bool>                                    mRequiresCopiedPackRemovalCheck;
    ::ll::TypedStorage<1, 1, bool>                                    mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool>                                    mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool>                                    mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool>                                    mEmoteChatMuted;
    ::ll::TypedStorage<1, 1, bool>                                    mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<1, 1, ::NetherWorldType>                       mNetherType;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                        mSpawnSettings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mValues;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mOverrides;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mBiomeOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<::GeneratorType>>                        mDataDrivenGeneratorType;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel>                                  mChatRestrictionLevel;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(bool), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                               mIsHardcoreSubscribers;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelData;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mLevelDataPropertiesPublishers;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::LevelDataProperty,
            ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>,
            ::std::less<::LevelDataProperty>,
            ::std::vector<::LevelDataProperty>,
            ::std::vector<::std::unique_ptr<
                ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>>>
                                              mLevelDataPropertiesPublishers;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::LevelDataType> mLevelDataType;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelData& operator=(LevelData const&);
    LevelData(LevelData const&);
#endif // @header-generator platform
    LevelData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LevelData(::CompoundTag const&);
#else // @header-generator platform
    MCAPI LevelData(::LevelData&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelData(::LevelData&&);
#else // @header-generator platform
    MCAPI explicit LevelData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelData(bool const, ::LevelDataType);
#else // @header-generator platform
    MCAPI LevelData(bool isEduMode, ::LevelDataType levelDataType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelData(
        ::LevelSettings const&,
        std::string const&,
        ::GeneratorType,
        ::BlockPos const&,
        bool,
        ::EducationEditionOffer,
        float,
        float
#else // @header-generator platform
    MCAPI LevelData(
        ::LevelSettings const&  settings,
        ::std::string const&    levelName,
        ::GeneratorType         generatorVersion,
        ::BlockPos const&       defaultSpawn,
        bool                    achievementsDisabled,
        ::EducationEditionOffer eduOffer,
        float                   rainLevel,
        float                   lightningLevel
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::reference_wrapper<
        Bedrock::PubSub::
            Publisher<void(), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>>
           _getLevelDataPropertyPublisher(::LevelDataProperty) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::optional<::std::reference_wrapper<
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
    _getLevelDataPropertyPublisher(::LevelDataProperty property) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initLevelDataPropertyPublishers();
#else // @header-generator platform
    MCAPI ::LevelDataValue const* _getValue(::HashedString const& key) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resetDefaultAdvancedSettingsData(bool);
#else // @header-generator platform
    MCAPI ::LevelDataValue* _getValue(::HashedString const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resetDefaultGeneralSettingsData();
#else // @header-generator platform
    MCAPI void _initLevelDataPropertyPublishers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resetDefaultMultiplayerSettingsData(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _resetDefaultAdvancedSettingsData(bool isTrial);

    MCAPI void _resetDefaultGeneralSettingsData();

    MCAPI void _resetDefaultMultiplayerSettingsData(bool isTrial);

    MCAPI void _resetDefaultScriptingCodingSettingsData();

    MCAPI void applyPolicyBasedSettings(bool hasBehaviourPack);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resetDefaultScriptingCodingSettingsData();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> createTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool achievementsWillBeDisabledOnLoad() const;
#else // @header-generator platform
    MCAPI void disableAchievements();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyPolicyBasedSettings(bool);
#else // @header-generator platform
    MCAPI ::BaseGameVersion const& getBaseGameVersion() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearCloudSaveInfo();
#else // @header-generator platform
    MCAPI ::std::string const getBiomeOverride() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> createTag() const;
#else // @header-generator platform
    MCAPI ::CompoundTag const& getEduSharedUriResource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disableAchievements();
#else // @header-generator platform
    MCAPI ::GeneratorType getGenerator() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool educationFeaturesEnabled() const;
#else // @header-generator platform
    MCAPI void getTagData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getAdventureModeOverridesEnabled() const;
#else // @header-generator platform
    MCAPI bool hasCloudSaveAssociation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getAllowAnonymousBlockDropsInEditorWorlds() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isCloudSaveActiveForWorld() const;

    MCAPI bool isEditionCompatible() const;

    MCAPI ::LevelData& operator=(::LevelData&& rhs);

    MCAPI ::Bedrock::PubSub::Subscription registerIsHardcoreListener(::std::function<void(bool)> callback) const;

    MCAPI ::Bedrock::PubSub::Subscription
    registerLevelDataPropertyListener(::LevelDataProperty property, ::std::function<void()> callback) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseGameVersion const& getBaseGameVersion() const;
#else // @header-generator platform
    MCAPI void registerWithLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const getBiomeOverride() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void resetDefaultCheatSettingsData();

    MCAPI void resetSettingsForRandomSeed();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBonusChestSpawned() const;
#else // @header-generator platform
    MCAPI void setBiomeOverride(::std::string const& biomeName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;
#else // @header-generator platform
    MCAPI void setCheatsEnabled(bool cheatsEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setCloudSaveInfo(::CloudSaveLevelInfo const& cloudSaveInfo);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CloudSaveLevelInfo& getCloudSaveInfo();
#else // @header-generator platform
    MCAPI void setCommandsEnabled(bool commandsEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tick const& getCurrentTick() const;
#else // @header-generator platform
    MCAPI void setDaylightCycle(::DaylightCycle daylightCycle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getCustomSkinsDisabled() const;
#else // @header-generator platform
    MCAPI void setEduSharedUriResource(::EduSharedUriResource const& eduSharedUriResource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DaylightCycle getDaylightCycle() const;
#else // @header-generator platform
    MCAPI void setEducationFeaturesEnabled(bool educationEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Abilities& getDefaultAbilities();
#else // @header-generator platform
    MCAPI void setEducationOid(::std::string const& educationOid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PermissionsHandler const& getDefaultPermissions() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setFlatWorldPreset(::FlatWorldPresetID preset);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PermissionsHandler& getDefaultPermissions();
#else // @header-generator platform
    MCAPI void setGameDifficulty(::SharedTypes::Legacy::Difficulty difficulty);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Editor::WorldType getEditorWorldType() const;
#else // @header-generator platform
    MCAPI void setGameType(::GameType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag const& getEduSharedUriResource() const;
#else // @header-generator platform
    MCAPI void setGenerator(::GeneratorType version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getEducationCreatorId() const;
#else // @header-generator platform
    MCAPI void setIsHardcore(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getEducationCreatorWorldId() const;
#else // @header-generator platform
    MCAPI void setLevelName(::std::string const& levelName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EducationEditionOffer getEducationEditionOffer() const;
#else // @header-generator platform
    MCAPI void setOverworldTimeSetting(int time);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getEducationOid() const;
#else // @header-generator platform
    MCAPI void setSeed(::LevelSeed64 seed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getEducationProductId() const;
#else // @header-generator platform
    MCAPI void setServerChunkTickRange(uint newRange);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getEducationReferrerId() const;
#else // @header-generator platform
    MCAPI void setSpawnPos(::BlockPos const& spawn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getEmoteChatMuted() const;
#else // @header-generator platform
    MCAPI void setTagData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Experiments const& getExperiments() const;
#else // @header-generator platform
    MCAPI void setWorldClockRegistry(::Bedrock::NonOwnerPointer<::WorldClockRegistry const> registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Experiments& getExperiments();
#else // @header-generator platform
    MCAPI void setWorldTemplateOptionLocked(bool isLocked);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value const& getFlatWorldOptions() const;
#else // @header-generator platform
    MCAPI void setWorldVersion(::WorldVersion version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<FlatWorldPresetID> getFlatWorldPreset() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool shouldAchievementsBeDisabled(bool isTrialMode, bool hasBehaviourPack) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getForceGameType() const;
#else // @header-generator platform
    MCAPI void touchLastLoadedWithVersion();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::Difficulty getGameDifficulty() const;
#else // @header-generator platform
    MCAPI void v1_read(::RakNet::BitStream& bitStream, ::StorageVersion storageVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~LevelData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void* $ctor(::LevelData&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LevelData&&);
#else // @header-generator platform
    MCAPI void* $ctor(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool const, ::LevelDataType);
#else // @header-generator platform
    MCAPI void* $ctor(bool isEduMode, ::LevelDataType levelDataType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::LevelSettings const&,
        std::string const&,
        ::GeneratorType,
        ::BlockPos const&,
        bool,
        ::EducationEditionOffer,
        float,
        float
#else // @header-generator platform
    MCAPI void* $ctor(
        ::LevelSettings const&  settings,
        ::std::string const&    levelName,
        ::GeneratorType         generatorVersion,
        ::BlockPos const&       defaultSpawn,
        bool                    achievementsDisabled,
        ::EducationEditionOffer eduOffer,
        float                   rainLevel,
        float                   lightningLevel
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
};
