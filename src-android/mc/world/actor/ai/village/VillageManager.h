#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ai/village/IVillageManager.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/actor/ai/village/WanderingTraderScheduler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class BlockType;
class Dimension;
class HashedString;
class ILevelStorageManagerConnector;
class LevelStorage;
class POIInstance;
class Vec3;
class Village;
struct EffectDuration;
struct POIBlueprint;
// clang-format on

class VillageManager : public ::IVillageManager {
public:
    // VillageManager inner types declare
    // clang-format off
    struct VillageInfo;
    struct DwellerTestVillageInfo;
    // clang-format on

    // VillageManager inner types define
    enum class BedAvailabilityState : int {
        Unknown       = 0,
        SomeAvailable = 1,
        NoneAvailable = 2,
    };

    struct VillageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<Village>> village;
        ::ll::TypedStorage<1, 1, bool>                      positionIsWithinVillageBounds;
        ::ll::TypedStorage<4, 4, float>                     distanceToClosestEdgeOfVillage;
        // NOLINTEND

    public:
        // prevent constructor by default
        VillageInfo(VillageInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~VillageInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DwellerTestVillageInfo : public ::VillageManager::VillageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::VillageManager::BedAvailabilityState> bedAvailability;
        // NOLINTEND

    public:
        // prevent constructor by default
        DwellerTestVillageInfo(DwellerTestVillageInfo const&);
    };

    using VillageMap = std::unordered_map<mce::UUID, std::shared_ptr<Village>>;

    using POIBlueprintMap = std::unordered_map<const BlockType*, std::unique_ptr<POIBlueprint>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<8, 48, std::deque<ActorUniqueID>> mFindPOIQueries;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<POIInstance>>> mUnclusteredPOIs;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, std::shared_ptr<Village>>> mVillages;
    ::ll::TypedStorage<8, 120, std::array<std::unordered_map<BlockPos, std::shared_ptr<POIInstance>>, 3>> mClusteredPOIs;
    ::ll::TypedStorage<8, 40, std::unordered_map<const BlockType*, std::unique_ptr<POIBlueprint>>> mPOIBlueprints;
    ::ll::TypedStorage<8, 8, ::Tick> mTickCount;
    ::ll::TypedStorage<8, 32, ::WanderingTraderScheduler> mWanderingTraderScheduler;
    ::ll::TypedStorage<1, 1, bool> mFinishedQueryScan;
    ::ll::TypedStorage<4, 4, int> mCurrentXScan;
    ::ll::TypedStorage<4, 4, int> mCurrentYScan;
    ::ll::TypedStorage<4, 4, int> mCurrentZScan;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    VillageManager& operator=(VillageManager const&);
    VillageManager(VillageManager const&);
    VillageManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VillageManager();

    virtual std::weak_ptr<Village> fetchClosestVillage(::BlockPos const&, int, uint) const;

    virtual std::weak_ptr<Village> getVillageByID(::mce::UUID const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VillageManager(::Dimension&);

    MCNAPI void _assignPOIOnly(std::shared_ptr<POIInstance>&&);

    MCNAPI bool _hasPOIQuery(::ActorUniqueID const&) const;

    MCNAPI void _loadPOIBlueprints();

    MCNAPI void _processNextUnclusteredPOIQuery();

    MCNAPI void _removeEligibleVillages();

    MCNAPI void _removeVillage(::Village&);

    MCNAPI void _saveAllVillages(::LevelStorage&);

    MCNAPI void _tryAssignPOIOrCreateVillage(std::shared_ptr<POIInstance>&&);

    MCNAPI void _unclusterDerelictPOIs(std::vector<std::weak_ptr<POIInstance>>&);

    MCNAPI std::weak_ptr<Village> fetchClosestVillageMostSuitableForDweller(::BlockPos const&, int, uint) const;

    MCNAPI std::weak_ptr<Village> getClosestVillageWithRaid(::BlockPos const&);

    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI bool isValidPOIType(::BlockPos const&, ::Block const&) const;

    MCNAPI bool isWanderingTraderManagedByScheduler(::Actor const&);

    MCNAPI void loadAllVillages();

    MCNAPI void submitFindPOIQuery(::ActorUniqueID const&);

    MCNAPI void tick(::Tick const&);

    MCNAPI void tickVillages(::Tick const&, ::Vec3 const&, ::BlockSource&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_POI_QUERIES();

    MCNAPI static int const& MAX_POI_TOLERANCE_DIST();

    MCNAPI static int const& MAX_QUERY_SCAN_ITERATIONS();

    MCNAPI static ::EffectDuration const& VILLAGE_HERO_EFFECT_DURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::weak_ptr<Village> $fetchClosestVillage(::BlockPos const&, int, uint) const;

    MCNAPI std::weak_ptr<Village> $getVillageByID(::mce::UUID const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
