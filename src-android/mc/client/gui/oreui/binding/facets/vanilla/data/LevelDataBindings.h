#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ExperimentalFeatureToggle.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
class TrialManager;
// clang-format on

namespace OreUI {

struct LevelDataBindings {
public:
    // LevelDataBindings inner types declare
    // clang-format off
    struct General;
    struct Advanced;
    struct Multiplayer;
    struct Cheats;
    struct ResourcePacks;
    // clang-format on

    // LevelDataBindings inner types define
    struct General {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        // NOLINTEND

    public:
        // prevent constructor by default
        General(General const&);
        General();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int getDifficulty() const;

        MCNAPI int getGameMode() const;

        MCNAPI bool getPlayerHasDied() const;

        MCNAPI std::string const& getWorldName() const;

        MCNAPI bool isHardcore() const;

        MCNAPI ::OreUI::LevelDataBindings::General& operator=(::OreUI::LevelDataBindings::General const&);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::General const&) const;

        MCNAPI void setDifficulty(int);

        MCNAPI void setGameMode(int);

        MCNAPI void setIsHardcore(bool);

        MCNAPI void setWorldName(std::string const&);
        // NOLINTEND
    };

    struct Advanced {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                        mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&>         mLevelData;
        ::ll::TypedStorage<4, 4, ::GeneratorType>             mInitialGeneratorType;
        ::ll::TypedStorage<8, 24, std::string>                mRespawnRadiusString;
        ::ll::TypedStorage<1, 1, bool>                        mSeedFeatureEnabled;
        ::ll::TypedStorage<8, 24, std::string>                mWorldSeed;
        ::ll::TypedStorage<1, 1, bool>                        mSleepSkipNight;
        ::ll::TypedStorage<4, 4, int>                         mSleepSkipNightPercent;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mFlatWorldPresetIdStr;
        // NOLINTEND

    public:
        // prevent constructor by default
        Advanced(Advanced const&);
        Advanced();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::optional<std::string> const& getFlatWorldPreset();

        MCNAPI ::GeneratorType getGeneratorType() const;

        MCNAPI bool getRecipesUnlock() const;

        MCNAPI std::string const& getRespawnRadius() const;

        MCNAPI bool getShowCoordinates() const;

        MCNAPI bool getShowDaysPlayed() const;

        MCNAPI int getSimulationDistance() const;

        MCNAPI bool const getSleepSkipNight() const;

        MCNAPI int const getSleepSkipNightPercent() const;

        MCNAPI bool getStartWithMap() const;

        MCNAPI bool getUseBonusChest() const;

        MCNAPI bool getUseExplodingTnt() const;

        MCNAPI bool getUseFlatWorld() const;

        MCNAPI bool getUseFriendlyFire() const;

        MCNAPI bool getUseImmediateRespawn() const;

        MCNAPI bool getUseMobLoot() const;

        MCNAPI bool getUseNaturalRegeneration() const;

        MCNAPI bool getUseRespawnBlocksExplode() const;

        MCNAPI bool getUseSpreadingFire() const;

        MCNAPI bool getUseTileDrops() const;

        MCNAPI std::string const& getWorldSeed() const;

        MCNAPI ::OreUI::LevelDataBindings::Advanced& operator=(::OreUI::LevelDataBindings::Advanced const&);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::Advanced const&) const;

        MCNAPI void setFlatWorldPreset(std::string const&);

        MCNAPI void setGeneratorType(::GeneratorType);

        MCNAPI void setRecipesUnlock(bool);

        MCNAPI void setRespawnRadius(std::string const&);

        MCNAPI void setShowCoordinates(bool);

        MCNAPI void setShowDaysPlayed(bool);

        MCNAPI void setSimulationDistance(int);

        MCNAPI void setSleepSkipNight(bool);

        MCNAPI void setSleepSkipNightPercent(int);

        MCNAPI void setStartWithMap(bool);

        MCNAPI void setUseBonusChest(bool);

        MCNAPI void setUseExplodingTnt(bool);

        MCNAPI void setUseFlatWorld(bool);

        MCNAPI void setUseFriendlyFire(bool);

        MCNAPI void setUseImmediateRespawn(bool);

        MCNAPI void setUseMobLoot(bool);

        MCNAPI void setUseNaturalRegeneration(bool);

        MCNAPI void setUseRespawnBlocksExplode(bool);

        MCNAPI void setUseSpreadingFire(bool);

        MCNAPI void setUseTileDrops(bool);

        MCNAPI void setWorldSeed(std::string const&);

        MCNAPI ~Advanced();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Multiplayer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        ::ll::TypedStorage<1, 1, bool>                mMultiplayerSupported;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastingSupported;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastOptionModifiable;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastInviteOptionSupported;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastFriendsOfFriendsOptionSupported;
        ::ll::UntypedStorage<4, 4>                    mGeneralMultiplayerWarningState;
        // NOLINTEND

    public:
        // prevent constructor by default
        Multiplayer(Multiplayer const&);
        Multiplayer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::WorldSettingsRules::GeneralMultiplayerWarningState getGeneralMultiplayerWarningState() const;

        MCNAPI int getMsPlayerAccess() const;

        MCNAPI bool getMultiplayerGameEnabled() const;

        MCNAPI bool getMultiplayerSupported() const;

        MCNAPI int getPlatformPlayerAccess() const;

        MCNAPI bool getPlatformPlayerAccessEnabled() const;

        MCNAPI bool getPlatformPlayerAccessSupported() const;

        MCNAPI bool getPlatformPlayerFriendsOfFriendsAccessSupported() const;

        MCNAPI bool getPlatformPlayerInviteAccessSupported() const;

        MCNAPI int getPlayerPermissions() const;

        MCNAPI int getPlayerWaypointsMode() const;

        MCNAPI bool getUseFriendlyFire() const;

        MCNAPI bool getVisibleToLanPlayers() const;

        MCNAPI bool hasConfirmedPlatformLockedContent() const;

        MCNAPI ::OreUI::LevelDataBindings::Multiplayer& operator=(::OreUI::LevelDataBindings::Multiplayer const&);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::Multiplayer const&) const;

        MCNAPI void setConfirmedPlatformLockedContent(bool);

        MCNAPI void setMsPlayerAccess(int);

        MCNAPI void setMultiplayerGameEnabled(bool);

        MCNAPI void setPlatformPlayerAccess(int);

        MCNAPI void setPlayerPermissions(int);

        MCNAPI void setPlayerWaypointsMode(int);

        MCNAPI void setUseFriendlyFire(bool);

        MCNAPI void setVisibleToLanPlayers(bool);
        // NOLINTEND
    };

    struct Cheats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        ::ll::TypedStorage<4, 4, int>                 mInitialTimeOfDay;
        ::ll::TypedStorage<8, 24, std::string>        mRandomTickSpeedString;
        // NOLINTEND

    public:
        // prevent constructor by default
        Cheats();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Cheats(::OreUI::LevelDataBindings::Cheats const&);

        MCNAPI bool getCheatsEnabled() const;

        MCNAPI int getDaylightCycle() const;

        MCNAPI bool getEducationEdition() const;

        MCNAPI bool getEntitiesDropLoot() const;

        MCNAPI bool getKeepInventory() const;

        MCNAPI bool getMobGriefing() const;

        MCNAPI bool getMobSpawning() const;

        MCNAPI std::string const& getRandomTickSpeed() const;

        MCNAPI bool getUseCommandBlocks() const;

        MCNAPI bool getUseWeatherCycle() const;

        MCNAPI ::OreUI::LevelDataBindings::Cheats& operator=(::OreUI::LevelDataBindings::Cheats const&);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::Cheats const&) const;

        MCNAPI void setCheatsEnabled(bool);

        MCNAPI void setDaylightCycle(int);

        MCNAPI void setEducationEdition(bool);

        MCNAPI void setEntitiesDropLoot(bool);

        MCNAPI void setKeepInventory(bool);

        MCNAPI void setMobGriefing(bool);

        MCNAPI void setMobSpawning(bool);

        MCNAPI void setRandomTickSpeed(std::string const&);

        MCNAPI void setUseCommandBlocks(bool);

        MCNAPI void setUseWeatherCycle(bool);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::OreUI::LevelDataBindings::Cheats const&);
        // NOLINTEND
    };

    struct ResourcePacks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourcePacks(ResourcePacks const&);
        ResourcePacks();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool getUseSharedPacks() const;

        MCNAPI void setUseSharedPacks(bool);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::OreUI::LevelDataBindings::General>           mGeneral;
    ::ll::TypedStorage<8, 120, ::OreUI::LevelDataBindings::Advanced>         mAdvanced;
    ::ll::TypedStorage<8, 32, ::OreUI::LevelDataBindings::Multiplayer>       mMultiplayer;
    ::ll::TypedStorage<8, 48, ::OreUI::LevelDataBindings::Cheats>            mCheats;
    ::ll::TypedStorage<8, 16, ::OreUI::LevelDataBindings::ResourcePacks>     mResourcePacks;
    ::ll::TypedStorage<1, 1, bool>                                           mAchievementsPermanentlyDisabled;
    ::ll::TypedStorage<1, 1, bool>                                           mHasBehaviourPack;
    ::ll::TypedStorage<8, 24, std::string>                                   mInitialTemplateLoadID;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::ExperimentalFeatureToggle>> mExperimentalFeatureToggles;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDataBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getHasBehaviourPacksForAchievements() const;

    MCNAPI std::string getInitialTemplateLoadID() const;

    MCNAPI bool getWorldTemplateOptionLocked();

    MCNAPI bool isAchievementsDisabled() const;

    MCNAPI bool isAchievementsPermanentlyDisabled() const;

    MCNAPI bool isUsingTemplate() const;

    MCNAPI bool operator!=(::OreUI::LevelDataBindings const&) const;

    MCNAPI ::OreUI::LevelDataBindings& operator=(::OreUI::LevelDataBindings const&);

    MCNAPI bool operator==(::OreUI::LevelDataBindings const&) const;

    MCNAPI void reset(::LevelDataWrapper&, ::TrialManager const&);

    MCNAPI void resetExperiementalFeatureToggles();

    MCNAPI bool setHasBehaviourPacksForAchievements(bool);

    MCNAPI void setInitialTemplateLoadID(std::string const&);

    MCNAPI void setWorldTemplateOptionLocked(bool);

    MCNAPI void updateCheatsForLevelDataChange();
    // NOLINTEND
};

} // namespace OreUI
