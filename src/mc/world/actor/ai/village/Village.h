#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/DwellerRole.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ai/village/POIType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/actor/ai/village/Raid.h"
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class LevelStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
class POIInstance;
class Player;
class Raid;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    enum VillageVersion : uchar {
#else // @header-generator platform
    enum class VillageVersion : uchar {
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    struct StandingModifiers {
    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static int const& GOLEM_DEATH_PENALTY();
#else // @header-generator platform
    struct StandingModifiers {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static int const& LARGE_PENALTY();
#else // @header-generator platform
    using ClaimedPOIList = ::std::unordered_map<::ActorUniqueID, ::std::array<::std::weak_ptr<::POIInstance>, 3>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static int const& LARGE_REWARD();
#else // @header-generator platform
    using DwellerMap = ::std::unordered_map<::ActorUniqueID, ::Village::DwellerData>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static int const& MEDIUM_PENALTY();
#else // @header-generator platform
    using DwellerTimestamp = ::std::pair<::ActorUniqueID, ::Tick>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static int const& SMALL_PENALTY();

        MCNAPI static int const& SMALL_REWARD();
        // NOLINTEND
    };

    using UnclaimedPOIList = std::array<std::vector<std::weak_ptr<POIInstance>>, 3>;

    using ClaimedPOIList = std::unordered_map<ActorUniqueID, std::array<std::weak_ptr<POIInstance>, 3>>;

    using DwellerMap = std::unordered_map<ActorUniqueID, Village::DwellerData>;

    using DwellerTimestamp = std::pair<ActorUniqueID, Tick>;
#else // @header-generator platform
    using UnclaimedPOIList = ::std::array<::std::vector<::std::weak_ptr<::POIInstance>>, 3>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                    mUniqueID;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                    mDimension;
    ::ll::TypedStorage<8, 72, ::std::array<::std::vector<::std::weak_ptr<::POIInstance>>, 3>> mUnclaimedPOIStacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::array<::std::weak_ptr<::POIInstance>, 3>>>
        mClaimedPOIs;
    ::ll::TypedStorage<8, 256, ::std::array<::std::unordered_map<::ActorUniqueID, ::Village::DwellerData>, 4>>
                                                                                             mDwellers;
    ::ll::TypedStorage<4, 24, ::AABB>                                                        mBounds;
    ::ll::TypedStorage<4, 24, ::AABB>                                                        mStaticRaidBounds;
    ::ll::TypedStorage<1, 1, uchar>                                                          mVillageVersion;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mGameTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mSaveTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mRingTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mNoBreedTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mBadStandingDecayTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mGoodStandingDecayTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mPassiveDwellerSpawnTimer;
    ::ll::TypedStorage<4, 4, int>                                                            mInitializationTimer;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, int>>                    mPlayerStanding;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::Village::DwellerData>> mAggressors;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ActorUniqueID, ::Tick>>>           mVillagerWorkTimestamps;
    ::ll::TypedStorage<1, 1, bool>                                                           mVillageInitialized;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                          mNitwitFamily;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                          mVillagePrefix;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                          mVillagePrefixOld;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Raid>>                                      mRaid;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>>                         mSoundTheAlarmPlayerList;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Village& operator=(Village const&);
    Village(Village const&);
#endif // @header-generator platform
    Village();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Village(::Dimension&, ::mce::UUID, ::BlockPos const&);
#else // @header-generator platform
    MCAPI Village(::Dimension& dimension, ::mce::UUID id, ::BlockPos const& origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _calcPOIDist();
#else // @header-generator platform
    MCAPI void _calcPOIDist();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clearVillagerPOIs(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI void _clearVillagerPOIs(::ActorUniqueID const& villager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createRaid();
#else // @header-generator platform
    MCAPI void _createRaid();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findAvailablePOI(ulong, ::Level&, ::Random&, ::ActorUniqueID);
#else // @header-generator platform
    MCAPI bool _findSpawnPointForRaid(
        ::Vec3&     outSpawnPoint,
        float const distanceTolerance,
        float const boundsScaling,
        bool        snapToSurface,
        bool        outsideOfVillage
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findSpawnPointForRaid(::Vec3&, float const, float const, bool, bool) const;
#else // @header-generator platform
    MCAPI ::BlockSource*
    _findSpawnableRegion(::Vec3 spawnPosition, int xzSpreadDistance, bool& outHasSpawnAreaLoaded) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource* _findSpawnableRegion(::Vec3, int, bool&) const;
#else // @header-generator platform
    MCAPI void _playSoundFrom(::Vec3 const& soundOrigin, ::SharedTypes::Legacy::LevelSoundEvent sound);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _findWeightedPOI(std::vector<std::weak_ptr<POIInstance>>&, ::Random&, ::ActorUniqueID);
#else // @header-generator platform
    MCAPI void _saveVillageData(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _playSoundFrom(::Vec3 const&, ::SharedTypes::Legacy::LevelSoundEvent);
#else // @header-generator platform
    MCAPI void _saveVillageDwellers(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveVillageData(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void _saveVillagePOIs(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveVillageDwellers(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void _saveVillagePlayerStanding(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveVillagePOIs(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void _saveVillageRaid(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveVillagePlayerStanding(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void _tryAddPoiToVillage(::ActorUniqueID const& villager, ::std::weak_ptr<::POIInstance> pi);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveVillageRaid(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void addActorToVillage(::DwellerRole role, ::ActorUniqueID const& actorID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryAddPoiToVillage(::ActorUniqueID const&, std::weak_ptr<POIInstance>);
#else // @header-generator platform
    MCAPI bool addPOI(::std::weak_ptr<::POIInstance> pi);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addActorToVillage(::DwellerRole, ::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI void addVillager(::ActorUniqueID const& villagerID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAggressor(::Mob const&);
#else // @header-generator platform
    MCAPI bool checkNeedMoreVillagers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addPOI(std::weak_ptr<POIInstance>);
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::POIInstance> fetchOwnedPOI(::ActorUniqueID const& id, ::POIType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addVillager(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI void fireSoundTheAlarm();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canRemove() const;
#else // @header-generator platform
    MCAPI ::Actor* getClosestAggressor(::Actor* from);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool checkNeedMoreVillagers() const;
#else // @header-generator platform
    MCAPI ::Player* getClosestBadStandingPlayer(::Actor& from);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<POIInstance> fetchOwnedPOI(::ActorUniqueID const&, ::POIType);
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::POIInstance> getClosestPOI(::POIType type, ::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireSoundTheAlarm();
#else // @header-generator platform
    MCAPI bool hasInvalidRole(::ActorUniqueID const& actorId, ::DwellerRole const& role);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& getBounds() const;
#else // @header-generator platform
    MCAPI bool hasSpecificDweller(::DwellerRole role, ::ActorUniqueID const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 getCenter() const;
#else // @header-generator platform
    MCAPI int modifyStanding(::ActorUniqueID const& playerID, int delta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getClosestAggressor(::Actor*);
#else // @header-generator platform
    MCAPI ::std::_List_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::ActorUniqueID const, ::Village::DwellerData>>>>
    removeActorFromVillage(::DwellerRole role, ::ActorUniqueID const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Player* getClosestBadStandingPlayer(::Actor&);
#else // @header-generator platform
    MCAPI void removeAllInstancesofActorFromVillage(::ActorUniqueID const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<POIInstance> getClosestPOI(::POIType, ::BlockPos const&);
#else // @header-generator platform
    MCAPI ::std::_List_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::ActorUniqueID const, ::Village::DwellerData>>>>
    removeVillager(::ActorUniqueID const& villager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Raid const* getRaid() const;
#else // @header-generator platform
    MCAPI void resetDwellerTimer(::DwellerRole role, ::ActorUniqueID const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& getRaidBounds() const;
#else // @header-generator platform
    MCAPI void setSavedDwellerPosition(::DwellerRole role, ::ActorUniqueID const& id, ::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Raid* getRaidMutable();
#else // @header-generator platform
    MCAPI void tick(::Tick tick, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::UUID getUniqueID() const;
#else // @header-generator platform
    MCAPI void triggerRaid();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasInvalidRole(::ActorUniqueID const&, ::DwellerRole const&);
#else // @header-generator platform
    MCAPI void trySetVillagerWorkTimestamp(::ActorUniqueID const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasRaid() const;
#else // @header-generator platform
    MCAPI void unlinkMismatchedJobsites(::Actor const& villager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool villagerLivesHere(::ActorUniqueID const& villager) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _cleanupUnclaimedPOIStack(std::vector<std::weak_ptr<POIInstance>>&);
#else // @header-generator platform
    MCAPI static bool isValidRegisteredPOI(::BlockSource& region, ::Block const& block, ::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<POIInstance>
    _findPreferredPOI(std::vector<std::weak_ptr<POIInstance>>&, ::HashedString const&);

    MCNAPI static bool isValidBedPOI(::Block const&);
#else // @header-generator platform
    MCAPI static bool isVillagePOI(::VillageManager const& villageManager, ::Block const& block);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE();
#else // @header-generator platform
    MCAPI static ::std::string const& CELEBRATION_EVENT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& CELEBRATION_EVENT();
#else // @header-generator platform
    MCAPI static ::std::string const& RAID_EXPIRY_EVENT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::string const& STORAGE_KEY_PREFIX();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&, ::mce::UUID, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Dimension& dimension, ::mce::UUID id, ::BlockPos const& origin);
#endif // @header-generator platform
    // NOLINTEND
};
