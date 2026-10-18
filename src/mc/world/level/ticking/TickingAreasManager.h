#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/ticking/AddTickingAreaStatus.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/ticking/PendingArea.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseGameVersion;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class IActorManagerConnector;
class ILevelStorageManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class ITickingArea;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
class LevelStorage;
class TickingAreaList;
struct ActorUniqueID;
#if defined(LL_PLAT_A) // @header-generator platform
struct Tick;
#else // @header-generator platform
struct PendingArea;
#endif // @header-generator platform
struct TickingAreaDescription;
// clang-format on

class TickingAreasManager {
public:
    // TickingAreasManager inner types declare
    // clang-format off
    struct ScopedContext;
    // clang-format on

    // TickingAreasManager inner types define
    enum class AreaLimitCheck : int {
        None                       = 0,
        ActiveStandalone           = 1,
        ActiveAndPendingStandalone = 2,
    };

    struct ScopedContext {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, ::mce::UUID> mUuid;
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<4, 48, ::Bounds>    mBounds;
        ::ll::TypedStorage<1, 1, bool>         mFinishedLoading;
        ::ll::TypedStorage<1, 1, bool>         mIsActive;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::mce::UUID>   mUuid;
        ::ll::TypedStorage<8, 32, ::std::string> mName;
        ::ll::TypedStorage<4, 48, ::Bounds>      mBounds;
        ::ll::TypedStorage<1, 1, bool>           mFinishedLoading;
        ::ll::TypedStorage<1, 1, bool>           mIsActive;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ScopedContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ActivePerDimension = std::map<DimensionType, std::shared_ptr<TickingAreaList>>;
#else // @header-generator platform
    using ActivePerDimension = ::std::map<::DimensionType, ::std::shared_ptr<::TickingAreaList>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using PendingPerDimension = std::unordered_map<DimensionType, std::vector<PendingArea>>;
#else // @header-generator platform
    using PendingPerDimension = ::std::unordered_map<::DimensionType, ::std::vector<::PendingArea>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<DimensionType, std::shared_ptr<TickingAreaList>>>   mActiveAreas;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::vector<PendingArea>>> mPendingAreas;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsPreloadDone;
    ::ll::UntypedStorage<8, 24>                                                            mLevelStorage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mPostReloadActorAdded;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::DimensionType, ::std::shared_ptr<::TickingAreaList>>>   mActiveAreas;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionType, ::std::vector<::PendingArea>>> mPendingAreas;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsPreloadDone;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelStorage> const>                    mLevelStorage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPostReloadActorAdded;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCanStartGameSaveTimerCheckSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreasManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit TickingAreasManager(::Bedrock::NonOwnerPointer<LevelStorage>);
#else // @header-generator platform
    MCAPI explicit TickingAreasManager(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AddTickingAreaStatus _addArea(
        ::DimensionType,
        std::string const&,
        ::Bounds const&,
        bool,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode,
        ::LevelStorage&
#else // @header-generator platform
    MCAPI ::AddTickingAreaStatus _addArea(
        ::DimensionType                       dimensionId,
        ::std::string const&                  name,
        ::Bounds const&                       bounds,
        bool                                  isCircle,
        ::TickingAreasManager::AreaLimitCheck limitCheck,
        bool                                  isPersistent,
        ::TickingAreaLoadMode                 loadMode,
        ::LevelStorage&                       levelStorage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _deletePendingArea(::LevelStorage&, ::PendingArea const&);
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription> _getPendingAreaDescriptionsFiltered(
        ::DimensionType                             dimensionId,
        ::std::function<bool(::PendingArea const&)> includeInList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TickingAreaDescription>
           _getPendingAreaDescriptionsFiltered(::DimensionType, std::function<bool(const PendingArea&)>) const;
#else // @header-generator platform
    MCAPI void _postReloadActorAdded(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _postReloadActorAdded(::Actor&);
#else // @header-generator platform
    MCAPI void addEntityArea(::DimensionType dimensionId, ::Actor const& actor, ::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _savePendingArea(::LevelStorage&, ::DimensionType, ::PendingArea const&);

    MCNAPI ::AddTickingAreaStatus addArea(
        ::DimensionType,
        std::string const&,
        ::BlockPos const&,
        int,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode,
        ::LevelStorage&
#else // @header-generator platform
    MCAPI void addEntityArea(
        ::DimensionType        dimensionId,
        ::ActorUniqueID const& entityId,
        ::Bounds               bounds,
        bool                   alwaysActive,
        float                  maxDistToPlayers,
        ::LevelStorage&        levelStorage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AddTickingAreaStatus addArea(
        ::DimensionType,
        std::string const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode,
        ::LevelStorage&
#else // @header-generator platform
    MCAPI void addTickingAreaListForDimension(
        ::DimensionType                             dimensionId,
        ::std::shared_ptr<::TickingAreaList> const& tickingAreaList
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEntityArea(::DimensionType, ::Actor const&, ::LevelStorage&);
#else // @header-generator platform
    MCAPI ::TickingAreasManager::ScopedContext addTransientScopedArea(
        ::DimensionType      dimensionId,
        ::std::string const& name,
        uint64               scopeKey,
        ::mce::UUID          uuid,
        ::Bounds const&      bounds
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEntityArea(::DimensionType, ::ActorUniqueID const&, ::Bounds, bool, float, ::LevelStorage&);
#else // @header-generator platform
    MCAPI uint countStandaloneTickingAreas() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addTickingAreaListForDimension(::DimensionType, std::shared_ptr<TickingAreaList> const&);
#else // @header-generator platform
    MCAPI void registerForActorManagerEvents(::IActorManagerConnector& actorManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TickingAreasManager::ScopedContext
    addTransientScopedArea(::DimensionType, std::string const&, ulong, ::mce::UUID, ::Bounds const&);
#else // @header-generator platform
    MCAPI void registerForLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint countStandaloneTickingAreas() const;
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByName(::DimensionType dimensionId, ::std::string const& name, ::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TickingAreaDescription> getPendingStandaloneAreaDescriptions(::DimensionType) const;
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription>
    removePendingAreaByPosition(::DimensionType dimensionId, ::BlockPos const& position, ::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TickingAreaDescription>
           getPendingStandaloneAreaDescriptionsByName(::DimensionType, std::string const&) const;
#else // @header-generator platform
    MCAPI void removeScopedAreas(::std::vector<::mce::UUID> const& uuids);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TickingAreaDescription>
           getPendingStandaloneAreaDescriptionsByPosition(::DimensionType, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription> setPendingAreaLoadModeByName(
        ::DimensionType       dimensionId,
        ::std::string const&  name,
        ::TickingAreaLoadMode loadMode,
        ::LevelStorage&       levelStorage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isPreloadDone() const;
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription> setPendingAreaLoadModeByPosition(
        ::DimensionType       dimensionId,
        ::BlockPos const&     position,
        ::TickingAreaLoadMode loadMode,
        ::LevelStorage&       levelStorage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadAreasFromSaveData(::LevelStorage&);

    MCNAPI void registerForActorManagerEvents(::IActorManagerConnector&);

    MCNAPI void registerForLevelStorageManagerEvents(::ILevelStorageManagerConnector&);

    MCNAPI std::vector<TickingAreaDescription>
           removePendingAreaByName(::DimensionType, std::string const&, ::LevelStorage&);

    MCNAPI std::vector<TickingAreaDescription>
           removePendingAreaByPosition(::DimensionType, ::BlockPos const&, ::LevelStorage&);

    MCNAPI void removeScopedAreas(std::vector<mce::UUID> const&);

    MCNAPI std::vector<TickingAreaDescription>
           setPendingAreaLoadModeByName(::DimensionType, std::string const&, ::TickingAreaLoadMode, ::LevelStorage&);

    MCNAPI std::vector<TickingAreaDescription>
           setPendingAreaLoadModeByPosition(::DimensionType, ::BlockPos const&, ::TickingAreaLoadMode, ::LevelStorage&);

    MCNAPI void tick(::Tick const&);

    MCNAPI void update(::Level&, ::LevelStorage&);
#else // @header-generator platform
    MCAPI void update(::Level& level, ::LevelStorage& levelStorage);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(::Level const&, bool);
#else // @header-generator platform
    MCAPI static void _deletePendingArea(::LevelStorage& levelStorage, ::PendingArea const& pendingArea);

    MCAPI static void
    _savePendingArea(::LevelStorage& levelStorage, ::DimensionType dimensionId, ::PendingArea const& pendingArea);

    MCAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(::Level const& level, bool enforce);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LevelStorage>);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage);
#endif // @header-generator platform
    // NOLINTEND
};
