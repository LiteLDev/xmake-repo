#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/DwellerRole.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class CompoundTag;
class Dimension;
class Level;
class LevelStorage;
class Mob;
class POIInstance;
class Player;
class Raid;
class Random;
class Vec3;
class VillageManager;
// clang-format on

class Village {
public:
    // Village inner types declare
    // clang-format off
    struct DwellerData;
    struct StandingModifiers;
    // clang-format on

    // Village inner types define
    enum VillageVersion : uchar {
        Base                 = 0,
        WorksiteInitEventFix = 1,
        Count                = 2,
    };

    struct DwellerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Tick>      mLastTicked;
        ::ll::TypedStorage<4, 12, ::BlockPos> mLastSavedPosition;
        // NOLINTEND
    };

    struct StandingModifiers {
    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static int const& GOLEM_DEATH_PENALTY();

        MCNAPI static int const& LARGE_PENALTY();

        MCNAPI static int const& LARGE_REWARD();

        MCNAPI static int const& MEDIUM_PENALTY();

        MCNAPI static int const& SMALL_PENALTY();

        MCNAPI static int const& SMALL_REWARD();
        // NOLINTEND
    };

    using UnclaimedPOIList = std::array<std::vector<std::weak_ptr<POIInstance>>, 3>;

    using ClaimedPOIList = std::unordered_map<ActorUniqueID, std::array<std::weak_ptr<POIInstance>, 3>>;

    using DwellerMap = std::unordered_map<ActorUniqueID, Village::DwellerData>;

    using DwellerTimestamp = std::pair<ActorUniqueID, Tick>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUniqueID;
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<8, 72, std::array<std::vector<std::weak_ptr<POIInstance>>, 3>> mUnclaimedPOIStacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::array<std::weak_ptr<POIInstance>, 3>>> mClaimedPOIs;
    ::ll::TypedStorage<8, 160, std::array<std::unordered_map<ActorUniqueID, Village::DwellerData>, 4>> mDwellers;
    ::ll::TypedStorage<4, 24, ::AABB> mBounds;
    ::ll::TypedStorage<4, 24, ::AABB> mStaticRaidBounds;
    ::ll::TypedStorage<1, 1, uchar> mVillageVersion;
    ::ll::TypedStorage<8, 8, ::Tick> mGameTick;
    ::ll::TypedStorage<8, 8, ::Tick> mSaveTick;
    ::ll::TypedStorage<8, 8, ::Tick> mRingTick;
    ::ll::TypedStorage<8, 8, ::Tick> mNoBreedTimer;
    ::ll::TypedStorage<8, 8, ::Tick> mBadStandingDecayTimer;
    ::ll::TypedStorage<8, 8, ::Tick> mGoodStandingDecayTimer;
    ::ll::TypedStorage<8, 8, ::Tick> mPassiveDwellerSpawnTimer;
    ::ll::TypedStorage<4, 4, int> mInitializationTimer;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, int>> mPlayerStanding;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, Village::DwellerData>> mAggressors;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ActorUniqueID, Tick>>> mVillagerWorkTimestamps;
    ::ll::TypedStorage<1, 1, bool> mVillageInitialized;
    ::ll::TypedStorage<8, 40, ::HashedString const> mNitwitFamily;
    ::ll::TypedStorage<8, 40, ::HashedString const> mVillagePrefix;
    ::ll::TypedStorage<8, 40, ::HashedString const> mVillagePrefixOld;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Raid>> mRaid;
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>> mSoundTheAlarmPlayerList;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Village();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Village(::Dimension&, ::mce::UUID, ::BlockPos const&);

    MCNAPI void _calcPOIDist();

    MCNAPI void _clearVillagerPOIs(::ActorUniqueID const&);

    MCNAPI void _createRaid();

    MCNAPI bool _findAvailablePOI(ulong, ::Level&, ::Random&, ::ActorUniqueID);

    MCNAPI bool _findSpawnPointForRaid(::Vec3&, float const, float const, bool, bool) const;

    MCNAPI ::BlockSource* _findSpawnableRegion(::Vec3, int, bool&) const;

    MCNAPI void _findWeightedPOI(std::vector<std::weak_ptr<POIInstance>>&, ::Random&, ::ActorUniqueID);

    MCNAPI void _playSoundFrom(::Vec3 const&, ::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI void _saveVillageData(::LevelStorage&) const;

    MCNAPI void _saveVillageDwellers(::LevelStorage&) const;

    MCNAPI void _saveVillagePOIs(::LevelStorage&) const;

    MCNAPI void _saveVillagePlayerStanding(::LevelStorage&) const;

    MCNAPI void _saveVillageRaid(::LevelStorage&) const;

    MCNAPI void _tryAddPoiToVillage(::ActorUniqueID const&, std::weak_ptr<POIInstance>);

    MCNAPI void addActorToVillage(::DwellerRole, ::ActorUniqueID const&);

    MCNAPI void addAggressor(::Mob const&);

    MCNAPI bool addPOI(std::weak_ptr<POIInstance>);

    MCNAPI void addVillager(::ActorUniqueID const&);

    MCNAPI bool canRemove() const;

    MCNAPI bool checkNeedMoreVillagers() const;

    MCNAPI std::weak_ptr<POIInstance> fetchOwnedPOI(::ActorUniqueID const&, ::POIType);

    MCNAPI void fireSoundTheAlarm();

    MCNAPI ::AABB const& getBounds() const;

    MCNAPI ::Vec3 getCenter() const;

    MCNAPI ::Actor* getClosestAggressor(::Actor*);

    MCNAPI ::Player* getClosestBadStandingPlayer(::Actor&);

    MCNAPI std::weak_ptr<POIInstance> getClosestPOI(::POIType, ::BlockPos const&);

    MCNAPI ::Raid const* getRaid() const;

    MCNAPI ::AABB const& getRaidBounds() const;

    MCNAPI ::Raid* getRaidMutable();

    MCNAPI ::mce::UUID getUniqueID() const;

    MCNAPI bool hasInvalidRole(::ActorUniqueID const&, ::DwellerRole const&);

    MCNAPI bool hasRaid() const;

    MCNAPI bool hasSpecificDweller(::DwellerRole, ::ActorUniqueID const&) const;

    MCNAPI int modifyStanding(::ActorUniqueID const&, int const);

    MCNAPI std::__hash_map_iterator<
        std::__hash_iterator<std::__hash_node<std::__hash_value_type<ActorUniqueID, Village::DwellerData>, void*>*>>
    removeActorFromVillage(::DwellerRole, ::ActorUniqueID const&);

    MCNAPI void removeAllInstancesofActorFromVillage(::ActorUniqueID const&);

    MCNAPI std::__hash_map_iterator<
        std::__hash_iterator<std::__hash_node<std::__hash_value_type<ActorUniqueID, Village::DwellerData>, void*>*>>
    removeVillager(::ActorUniqueID const&);

    MCNAPI void resetDwellerTimer(::DwellerRole, ::ActorUniqueID const&);

    MCNAPI void resetNoBreedTimer();

    MCNAPI void rewardAllPlayers(int);

    MCNAPI void setSavedDwellerPosition(::DwellerRole, ::ActorUniqueID const&, ::BlockPos);

    MCNAPI void triggerRaid();

    MCNAPI void trySetVillagerWorkTimestamp(::ActorUniqueID const&);

    MCNAPI void unlinkMismatchedJobsites(::Actor const&);

    MCNAPI bool villagerLivesHere(::ActorUniqueID const&) const;

    MCNAPI bool withinVillageBounds(::Vec3 const&, float) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _cleanupUnclaimedPOIStack(std::vector<std::weak_ptr<POIInstance>>&);

    MCNAPI static std::shared_ptr<POIInstance>
    _findPreferredPOI(std::vector<std::weak_ptr<POIInstance>>&, ::HashedString const&);

    MCNAPI static bool isValidBedPOI(::Block const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE();

    MCNAPI static std::string const& CELEBRATION_EVENT();

    MCNAPI static bool& DEBUG_DRAWING();

    MCNAPI static float const& DWELLER_REMOVAL_TOLERANCE();

    MCNAPI static int const& MAX_VILLAGE_STANDING();

    MCNAPI static int const& MIN_VILLAGE_STANDING();

    MCNAPI static ::Vec3 const& RAID_BOUNDS_PADDING();

    MCNAPI static std::string const& RAID_EXPIRY_EVENT();

    MCNAPI static int const& RAID_FINISHED_DELAY_IN_TICKS();

    MCNAPI static int const& RAID_GROUP_COMPLETE_DELAY_IN_TICKS();

    MCNAPI static int const& RAID_LOCATION_HELP_DELAY_IN_TICKS();

    MCNAPI static uchar const& RAID_MAX_SPAWN_FAILURES();

    MCNAPI static int const& RAID_PREP_TIME_IN_TICKS();

    MCNAPI static ::Tick const& RAID_TIMEOUT_IN_TICKS();

    MCNAPI static ulong const& STANDING_DECAY_INTERVAL_BAD();

    MCNAPI static ulong const& STANDING_DECAY_INTERVAL_GOOD();

    MCNAPI static std::string const& STORAGE_KEY_DWELLERS();

    MCNAPI static std::string const& STORAGE_KEY_PLAYERS();

    MCNAPI static std::string const& STORAGE_KEY_POI();

    MCNAPI static std::string const& STORAGE_KEY_PREFIX();

    MCNAPI static std::string const& STORAGE_KEY_RAID();

    MCNAPI static char const& STORAGE_KEY_SEPARATOR();

    MCNAPI static std::string const& STORAGE_KEY_VILLAGE();

    MCNAPI static int const& UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS();

    MCNAPI static long const& VILLAGER_EXPECTED_WORK_INTERVAL();

    MCNAPI static int const& VILLAGE_HERO_BESTOW_TIME();

    MCNAPI static ulong const& VILLAGE_POI_PURGE_TIME();

    MCNAPI static float const& VILLAGE_RADIUS_APPROX_SCALAR();

    MCNAPI static ulong const& VILLAGE_SAVE_TICK_DELAY();

    MCNAPI static int const& VILLAGE_START_HEIGHT();

    MCNAPI static int const& VILLAGE_START_XZ_BOUNDS();

    MCNAPI static int const& VILLAGE_UNCLAIMED_POI_CAP();

    MCNAPI static ulong const& VILLAGE_UPDATE_TICK_DELAY();

    MCNAPI static uchar const& VILLAGE_VERSION_CURRENT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, ::mce::UUID, ::BlockPos const&);
    // NOLINTEND
};
