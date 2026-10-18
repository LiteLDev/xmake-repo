#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
namespace World { class IWorldCloudSyncer; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/world/WorldCloudSyncResult.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
namespace World { class IWorldCloudSyncer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldCloudSyncFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldCloudSyncFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&> mWorldCloudSyncer;
    ::ll::TypedStorage<8, 8, ::IContentManager&>          mContentManager;
    ::ll::UntypedStorage<4, 16>                           mSyncWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCloudSyncFacet& operator=(WorldCloudSyncFacet const&);
    WorldCloudSyncFacet(WorldCloudSyncFacet const&);
    WorldCloudSyncFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldCloudSyncFacet(::World::IWorldCloudSyncer&, ::IContentManager&);

    MCNAPI void clearSyncWorldTaskState();

    MCNAPI std::optional<World::WorldCloudSyncResult> const& getSyncWorldResult() const;

    MCNAPI ::OreUI::FacetTaskState getSyncWorldTaskState() const;

    MCNAPI void syncWorld(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[28]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::IWorldCloudSyncer&, ::IContentManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldCloudSyncFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WorldCloudSyncFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                               mWorldCloudSyncer;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                        mContentManager;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::WorldCloudSyncResult>> mSyncWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCloudSyncFacet& operator=(WorldCloudSyncFacet const&);
    WorldCloudSyncFacet(WorldCloudSyncFacet const&);
    WorldCloudSyncFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCloudSyncFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearSyncWorldTaskState();

    MCFOLD ::std::optional<::World::WorldCloudSyncResult> const& getSyncWorldResult() const;

    MCFOLD ::OreUI::FacetTaskState getSyncWorldTaskState() const;

    MCAPI void syncWorld(::std::string const& id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldCloudSyncFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
