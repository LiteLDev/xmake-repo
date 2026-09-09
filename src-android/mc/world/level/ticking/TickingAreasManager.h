#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/ticking/AddTickingAreaStatus.h"
#include "mc/world/level/ticking/PendingArea.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockPos;
class CompoundTag;
class IActorManagerConnector;
class ILevelStorageManagerConnector;
class ITickingArea;
class Level;
class LevelStorage;
class TickingAreaList;
struct ActorUniqueID;
struct Tick;
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
        ::ll::TypedStorage<8, 16, ::mce::UUID> mUuid;
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<4, 48, ::Bounds>    mBounds;
        ::ll::TypedStorage<1, 1, bool>         mFinishedLoading;
        ::ll::TypedStorage<1, 1, bool>         mIsActive;
        // NOLINTEND
    };

    using ActivePerDimension = std::map<DimensionType, std::shared_ptr<TickingAreaList>>;

    using PendingPerDimension = std::unordered_map<DimensionType, std::vector<PendingArea>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<DimensionType, std::shared_ptr<TickingAreaList>>>   mActiveAreas;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::vector<PendingArea>>> mPendingAreas;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsPreloadDone;
    ::ll::UntypedStorage<8, 24>                                                            mLevelStorage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mPostReloadActorAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCanStartGameSaveTimerCheckSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreasManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TickingAreasManager(::Bedrock::NonOwnerPointer<LevelStorage>);

    MCNAPI ::AddTickingAreaStatus _addArea(
        ::DimensionType,
        std::string const&,
        ::Bounds const&,
        bool,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode,
        ::LevelStorage&
    );

    MCNAPI void _deletePendingArea(::LevelStorage&, ::PendingArea const&);

    MCNAPI std::vector<TickingAreaDescription>
           _getPendingAreaDescriptionsFiltered(::DimensionType, std::function<bool(const PendingArea&)>) const;

    MCNAPI void _postReloadActorAdded(::Actor&);

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
    );

    MCNAPI ::AddTickingAreaStatus addArea(
        ::DimensionType,
        std::string const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::TickingAreasManager::AreaLimitCheck,
        bool,
        ::TickingAreaLoadMode,
        ::LevelStorage&
    );

    MCNAPI void addEntityArea(::DimensionType, ::Actor const&, ::LevelStorage&);

    MCNAPI void addEntityArea(::DimensionType, ::ActorUniqueID const&, ::Bounds, bool, float, ::LevelStorage&);

    MCNAPI void addTickingAreaListForDimension(::DimensionType, std::shared_ptr<TickingAreaList> const&);

    MCNAPI ::TickingAreasManager::ScopedContext
    addTransientScopedArea(::DimensionType, std::string const&, ulong, ::mce::UUID, ::Bounds const&);

    MCNAPI uint countStandaloneTickingAreas() const;

    MCNAPI std::vector<TickingAreaDescription> getPendingStandaloneAreaDescriptions(::DimensionType) const;

    MCNAPI std::vector<TickingAreaDescription>
           getPendingStandaloneAreaDescriptionsByName(::DimensionType, std::string const&) const;

    MCNAPI std::vector<TickingAreaDescription>
           getPendingStandaloneAreaDescriptionsByPosition(::DimensionType, ::BlockPos const&) const;

    MCNAPI bool isPreloadDone() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(::Level const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LevelStorage>);
    // NOLINTEND
};
