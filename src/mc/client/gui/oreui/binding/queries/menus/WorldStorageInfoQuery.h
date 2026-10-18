#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
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
namespace World { class IWorldCloudSyncer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldStorageInfoQuery : public ::OreUI::QueryBase<::OreUI::WorldStorageInfoQuery>,
                              public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                                 mWorldCloudSyncer;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mWorldId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mSize;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>         mImagePath;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mGameType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>         mCreationDate;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mLastSaveDate;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::World::SyncState>>>    mCloudSyncState;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mStorageLocations;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageInfoQuery& operator=(WorldStorageInfoQuery const&);
    WorldStorageInfoQuery(WorldStorageInfoQuery const&);
    WorldStorageInfoQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldStorageInfoQuery() /*override*/ = default;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual void onSummaryUpdated(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;

    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldStorageInfoQuery(::OreUI::GameDependencies const& game, ::std::string const& worldId);

    MCAPI void _tryUpdateCloudProperties();

    MCAPI void _updateCloudProperties(::std::optional<::World::SyncState> syncState);

    MCAPI void _updateProperties(::LevelSummary& levelSummary);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& worldId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLevelUpdated(::std::string const& levelId);

    MCAPI void $onSummaryUpdated(::std::string const& levelId);

    MCAPI void $onStorageChanged();

    MCAPI void $update(double);
    // NOLINTEND
};
#else // @header-generator platform
class WorldStorageInfoQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
