#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ai/village/IVillageManager.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/village/POIType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ai/village/WanderingTraderScheduler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/BlockType.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class ILevelStorageManagerConnector;
class LevelStorage;
class POIInstance;
class Vec3;
class Village;
#if defined(LL_PLAT_A) // @header-generator platform
struct EffectDuration;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Village>> village;
        ::ll::TypedStorage<1, 1, bool>                          positionIsWithinVillageBounds;
        ::ll::TypedStorage<4, 4, float>                         distanceToClosestEdgeOfVillage;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct DwellerTestVillageInfo : public ::VillageManager::VillageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::VillageManager::BedAvailabilityState> bedAvailability;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        DwellerTestVillageInfo(DwellerTestVillageInfo const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using VillageMap = std::unordered_map<mce::UUID, std::shared_ptr<Village>>;
#else // @header-generator platform
    using POIBlueprintMap = ::std::unordered_map<::BlockType const*, ::std::unique_ptr<::POIBlueprint>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using POIBlueprintMap = std::unordered_map<const BlockType*, std::unique_ptr<POIBlueprint>>;
#else // @header-generator platform
    using POIMap = ::std::unordered_map<::BlockPos, ::std::shared_ptr<::POIInstance>>;

    using VillageMap = ::std::unordered_map<::mce::UUID, ::std::shared_ptr<::Village>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                     mDimension;
    ::ll::TypedStorage<8, 40, ::std::deque<::ActorUniqueID>>                                   mFindPOIQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::POIInstance>>>                 mUnclusteredPOIs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::std::shared_ptr<::Village>>> mVillages;
    ::ll::TypedStorage<8, 192, ::std::array<::std::unordered_map<::BlockPos, ::std::shared_ptr<::POIInstance>>, 3>>
        mClusteredPOIs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockType const*, ::std::unique_ptr<::POIBlueprint>>>
                                                               mPOIBlueprints;
    ::ll::TypedStorage<8, 8, ::Tick>                           mTickCount;
    ::ll::TypedStorage<8, 32, ::WanderingTraderScheduler>      mWanderingTraderScheduler;
    ::ll::TypedStorage<1, 1, bool>                             mFinishedQueryScan;
    ::ll::TypedStorage<4, 4, int>                              mCurrentXScan;
    ::ll::TypedStorage<4, 4, int>                              mCurrentYScan;
    ::ll::TypedStorage<4, 4, int>                              mCurrentZScan;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VillageManager& operator=(VillageManager const&);
    VillageManager(VillageManager const&);
    VillageManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VillageManager();
#else // @header-generator platform
    virtual ~VillageManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<Village> fetchClosestVillage(::BlockPos const&, int, uint) const;
#else // @header-generator platform
    virtual ::std::weak_ptr<::Village>
    fetchClosestVillage(::BlockPos const& position, int maxDistFromVillageBounds, uint searchRadius) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<Village> getVillageByID(::mce::UUID const&) const;
#else // @header-generator platform
    virtual ::std::weak_ptr<::Village> getVillageByID(::mce::UUID const& villageID) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit VillageManager(::Dimension&);
#else // @header-generator platform
    MCAPI explicit VillageManager(::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _assignPOIOnly(std::shared_ptr<POIInstance>&&);
#else // @header-generator platform
    MCAPI void _assignPOIOnly(::std::shared_ptr<::POIInstance>&& pi);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _hasPOIQuery(::ActorUniqueID const&) const;
#else // @header-generator platform
    MCAPI void _loadPOIBlueprints();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadPOIBlueprints();
#else // @header-generator platform
    MCAPI void _processNextUnclusteredPOIQuery();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _processNextUnclusteredPOIQuery();
#else // @header-generator platform
    MCAPI void _removeEligibleVillages();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeEligibleVillages();
#else // @header-generator platform
    MCAPI void _saveAllVillages(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeVillage(::Village&);
#else // @header-generator platform
    MCAPI void _tryAssignPOIOrCreateVillage(::std::shared_ptr<::POIInstance>&& pi);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveAllVillages(::LevelStorage&);
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::Village> fetchClosestVillageMostSuitableForDweller(
        ::BlockPos const& position,
        int               maxDistFromVillageBounds,
        uint              searchRadius
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryAssignPOIOrCreateVillage(std::shared_ptr<POIInstance>&&);
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::Village> getClosestVillageWithRaid(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _unclusterDerelictPOIs(std::vector<std::weak_ptr<POIInstance>>&);
#else // @header-generator platform
    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<Village> fetchClosestVillageMostSuitableForDweller(::BlockPos const&, int, uint) const;
#else // @header-generator platform
    MCAPI void submitFindPOIQuery(::ActorUniqueID const& actorID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<Village> getClosestVillageWithRaid(::BlockPos const&);
#else // @header-generator platform
    MCAPI void tick(::Tick const& tick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void tickVillages(::Tick const& tick, ::Vec3 const& position, ::BlockSource& region);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Dimension& dimension);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<Village> $fetchClosestVillage(::BlockPos const&, int, uint) const;
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::Village>
    $fetchClosestVillage(::BlockPos const& position, int maxDistFromVillageBounds, uint searchRadius) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<Village> $getVillageByID(::mce::UUID const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::Village> $getVillageByID(::mce::UUID const& villageID) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
