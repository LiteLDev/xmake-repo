#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/network/ServerEditorConnectionPolicy.h"
#include "mc/options/EduSharedUriResource.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/platform/UUID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/EducationLevelSettings.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/PackInstanceId.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class LevelData;
struct DimensionType;
struct LevelSummary;
namespace Json { class Value; }
// clang-format on

class LevelSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                           mSeed;
    ::ll::TypedStorage<4, 4, ::GameType>                              mGameType;
    ::ll::TypedStorage<1, 1, bool>                                    mIsHardcore;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>       mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool>                                    mForceGameType;
    ::ll::TypedStorage<4, 4, ::GeneratorType>                         mGenerator;
    ::ll::UntypedStorage<8, 16>                                       mFlatWorldOptions;
    ::ll::TypedStorage<1, 1, ::WorldVersion>                          mWorldVersion;
    ::ll::TypedStorage<1, 1, ::NetherWorldType>                       mNetherType;
    ::ll::TypedStorage<8, 40, ::SpawnSettings>                        mSpawnSettings;
    ::ll::TypedStorage<1, 1, bool>                                    mAchievementsDisabled;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                     mEditorWorldType;
    ::ll::TypedStorage<1, 1, bool>                                    mAllowAnonymousBlockDropsInEditorWorlds;
    ::ll::TypedStorage<4, 4, ::ServerEditorConnectionPolicy>          mServerEditorConnectionPolicy;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool>                                    mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, int>                                     mTime;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>            mEducationEditionOffer;
    ::ll::TypedStorage<1, 1, bool>                                    mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mImmutableWorld;
    ::ll::TypedStorage<4, 4, float>                                   mRainLevel;
    ::ll::TypedStorage<4, 4, float>                                   mLightningLevel;
    ::ll::TypedStorage<1, 1, bool>                                    mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                    mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool>                                    mLANBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mPlatformBroadcastIntent;
    ::ll::TypedStorage<1, 1, ::DaylightCycle>                         mDaylightCycle;
    ::ll::TypedStorage<1, 1, bool>                                    mDisablePlayerInteractions;
    ::ll::TypedStorage<1, 1, bool>                                    mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mAdventureModeOverridesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool>                                    mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool>                                    mIsRandomSeedAllowed;
    ::ll::TypedStorage<1, 1, bool>                                    mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool>                                    mOverrideSettings;
    ::ll::TypedStorage<1, 1, bool>                                    mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mStartWithMapEnabled;
    ::ll::TypedStorage<4, 4, int>                                     mServerChunkTickRange;
    ::ll::TypedStorage<1, 1, bool>                                    mIsFromWorldTemplate;
    ::ll::TypedStorage<1, 1, bool>                                    mIsWorldTemplateOptionLocked;
    ::ll::TypedStorage<1, 1, bool>                                    mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool>                                    mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool>                                    mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool>                                    mEmoteChatMuted;
    ::ll::TypedStorage<4, 4, int>                                     mLimitedWorldWidth;
    ::ll::TypedStorage<4, 4, int>                                     mLimitedWorldDepth;
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>                   mDefaultPermissions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mDefaultSpawn;
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>>            mNewWorldBehaviorPackIdentities;
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>>            mNewWorldResourcePackIdentities;
    ::ll::TypedStorage<8, 160, ::GameRules>                           mGameRules;
    ::ll::TypedStorage<8, 56, ::ExperimentStorage>                    mExperiments;
    ::ll::UntypedStorage<8, 32>                                       mBaseGameVersion;
    ::ll::TypedStorage<8, 24, std::string>                            mEducationProductID;
    ::ll::TypedStorage<8, 24, std::string>                            mEducationCreatorID;
    ::ll::TypedStorage<8, 24, std::string>                            mEducationCreatorWorldID;
    ::ll::TypedStorage<8, 24, std::string>                            mEducationReferrerID;
    ::ll::TypedStorage<8, 24, std::string>                            mBiomeOverride;
    ::ll::TypedStorage<8, 48, ::EduSharedUriResource>                 mEduSharedUriResource;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel>                  mChatRestrictionLevel;
    ::ll::TypedStorage<8, 248, std::optional<EducationLevelSettings>> mEducationLevelSettings;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                     mOverrideForceExperimentalGameplayFlag;
    ::ll::TypedStorage<8, 136, std::optional<CloudSaveLevelInfo>>     mCloudSaveInfo;
    ::ll::TypedStorage<8, 24, std::vector<mce::UUID>>                 mExcludedScriptModules;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSettings& operator=(LevelSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelSettings();

    MCNAPI explicit LevelSettings(::LevelSummary const&);

    MCNAPI LevelSettings(::LevelSettings const&);

    MCNAPI LevelSettings(::LevelData const&, ::DimensionType);

    MCNAPI bool achievementsWillBeDisabledOnLoad() const;

    MCNAPI bool educationFeaturesEnabled() const;

    MCNAPI std::string const& educationProductID() const;

    MCNAPI bool forceGameType() const;

    MCNAPI bool getAdventureModeOverridesEnabled() const;

    MCNAPI bool getAllowAnonymousBlockDropsInEditorWorlds() const;

    MCNAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCNAPI std::string const& getBiomeOverride() const;

    MCNAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCNAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCNAPI bool getCustomSkinsDisabled() const;

    MCNAPI ::DaylightCycle getDaylightCycle() const;

    MCNAPI ::PermissionsHandler const& getDefaultPermissions() const;

    MCNAPI ::BlockPos const& getDefaultSpawn() const;

    MCNAPI bool getDisablePlayerInteractions() const;

    MCNAPI ::Editor::WorldType getEditorWorldType() const;

    MCNAPI ::EduSharedUriResource const& getEduSharedUriResource() const;

    MCNAPI std::string const& getEducationCreatorID() const;

    MCNAPI std::string const& getEducationCreatorWorldID() const;

    MCNAPI ::EducationEditionOffer getEducationEditionOffer() const;

    MCNAPI std::optional<EducationLevelSettings> const& getEducationLevelSettings() const;

    MCNAPI std::string const& getEducationReferrerID() const;

    MCNAPI bool getEmoteChatMuted() const;

    MCNAPI std::vector<mce::UUID> const& getExcludedScriptModules() const;

    MCNAPI ::Experiments const& getExperiments() const;

    MCNAPI ::Json::Value const& getFlatWorldOptions() const;

    MCNAPI ::SharedTypes::Legacy::Difficulty getGameDifficulty() const;

    MCNAPI ::GameRules const& getGameRules() const;

    MCNAPI ::GameType getGameType() const;

    MCNAPI ::GeneratorType getGenerator() const;

    MCNAPI bool getImmutableWorld() const;

    MCNAPI bool getLanBroadcastIntent() const;

    MCNAPI float getLightningLevel() const;

    MCNAPI int getLimitedWorldDepth() const;

    MCNAPI int getLimitedWorldWidth() const;

    MCNAPI bool getMultiplayerGameIntent() const;

    MCNAPI ::NetherWorldType getNetherType() const;

    MCNAPI bool getOnlySpawnV1Villagers() const;

    MCNAPI bool getPersonaDisabled() const;

    MCNAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCNAPI float getRainLevel() const;

    MCNAPI ::LevelSeed64 getSeed() const;

    MCNAPI uint getServerChunkTickRange() const;

    MCNAPI ::ServerEditorConnectionPolicy getServerEditorConnectionPolicy() const;

    MCNAPI ::SpawnSettings getSpawnSettings() const;

    MCNAPI int getTime() const;

    MCNAPI ::WorldVersion getWorldVersion() const;

    MCNAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCNAPI bool hasAchievementsDisabled() const;

    MCNAPI bool hasBonusChestEnabled() const;

    MCNAPI bool hasCheatsEnabled() const;

    MCNAPI bool hasCloudSaveAssociation() const;

    MCNAPI bool hasCommandsEnabled() const;

    MCNAPI bool hasConfirmedPlatformLockedContent() const;

    MCNAPI bool hasLockedBehaviorPack() const;

    MCNAPI bool hasLockedResourcePack() const;

    MCNAPI bool hasStartWithMapEnabled() const;

    MCNAPI bool isCreatedInEditor() const;

    MCNAPI bool isEditorWorld() const;

    MCNAPI bool isExportedFromEditor() const;

    MCNAPI bool isFromLockedTemplate() const;

    MCNAPI bool isFromWorldTemplate() const;

    MCNAPI bool isHardcore() const;

    MCNAPI bool isRandomSeedAllowed() const;

    MCNAPI bool isTexturepacksRequired() const;

    MCNAPI bool isWorldTemplateOptionLocked() const;

    MCNAPI void overrideSavedSettings(::LevelData&) const;

    MCNAPI ::LevelSettings& setBaseGameVersion(::BaseGameVersion const&);

    MCNAPI ::LevelSettings& setBiomeOverride(std::string const&);

    MCNAPI ::LevelSettings& setDefaultPlayerPermissions(::PlayerPermissionLevel);

    MCNAPI ::LevelSettings& setDisablePlayerInteractions(bool);

    MCNAPI ::LevelSettings& setEditorWorldType(::Editor::WorldType);

    MCNAPI ::LevelSettings& setEducationEditionOffer(::EducationEditionOffer);

    MCNAPI ::LevelSettings& setEducationFeaturesEnabled(bool);

    MCNAPI void setEducationLevelSettings(::EducationLevelSettings);

    MCNAPI ::LevelSettings& setExperiments(::ExperimentStorage const&);

    MCNAPI ::LevelSettings& setGameRules(::GameRules);

    MCNAPI ::LevelSettings& setImmutableWorld(bool);

    MCNAPI ::LevelSettings& setLanBroadcastIntent(bool);

    MCNAPI ::LevelSettings& setMultiplayerGameIntent(bool);

    MCNAPI ::LevelSettings& setNetherType(::NetherWorldType);

    MCNAPI void setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId> const&);

    MCNAPI void setNewWorldResourcePackIdentities(std::vector<PackInstanceId> const&);

    MCNAPI ::LevelSettings& setPlatformBroadcastIntent(::Social::GamePublishSetting);

    MCNAPI ::LevelSettings& setRandomSeed(::LevelSeed64);

    MCNAPI ::LevelSettings& setSpawnSettings(::SpawnSettings);

    MCNAPI ::LevelSettings& setXblBroadcastIntent(::Social::GamePublishSetting);

    MCNAPI bool shouldOverrideSavedSettings() const;

    MCNAPI bool useMsaGamertagsOnly() const;

    MCNAPI ~LevelSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<LevelSeed64> parseSeedString(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LevelSummary const&);

    MCNAPI void* $ctor(::LevelSettings const&);

    MCNAPI void* $ctor(::LevelData const&, ::DimensionType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
