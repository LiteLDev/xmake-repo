#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/world/SyncState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
struct LevelSummary;
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
namespace World { class IWorldCloudSyncer; }
// clang-format on

namespace OreUI {

class WorldStorageInfoQuery : public ::OreUI::QueryBase<OreUI::WorldStorageInfoQuery>, public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>          mLevelListCache;
    ::ll::UntypedStorage<8, 24>                           mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&> mWorldCloudSyncer;
    ::ll::UntypedStorage<8, 168>                          mWorldId;
    ::ll::UntypedStorage<8, 168>                          mName;
    ::ll::UntypedStorage<8, 168>                          mSize;
    ::ll::UntypedStorage<8, 176>                          mImagePath;
    ::ll::UntypedStorage<8, 168>                          mGameType;
    ::ll::UntypedStorage<8, 176>                          mCreationDate;
    ::ll::UntypedStorage<8, 168>                          mLastSaveDate;
    ::ll::UntypedStorage<8, 152>                          mCloudSyncState;
    ::ll::UntypedStorage<8, 104>                          mStorageLocations;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageInfoQuery& operator=(WorldStorageInfoQuery const&);
    WorldStorageInfoQuery(WorldStorageInfoQuery const&);
    WorldStorageInfoQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldStorageInfoQuery();

    virtual void update(double);

    virtual void onLevelUpdated(std::string const&);

    virtual void onSummaryUpdated(std::string const&);

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldStorageInfoQuery(::OreUI::GameDependencies const&, std::string const&);

    MCNAPI void _tryUpdateCloudProperties();

    MCNAPI void _updateCloudProperties(std::optional<World::SyncState>);

    MCNAPI void _updateProperties(::LevelSummary&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);

    MCNAPI void $onLevelUpdated(std::string const&);

    MCNAPI void $onSummaryUpdated(std::string const&);

    MCNAPI void $onStorageChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
