#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/oreui/binding/AsyncStatefulFunction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/PackDetails.h"
#include "mc/client/world/StartLocalWorldResult.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class ILevelListCache;
class TaskGroup;
namespace World { class IWorldCloudSyncer; }
namespace World { class IWorldResourcePackHandler; }
namespace World { class LocalWorldStarter; }
namespace World { class OwnedWorldTemplateManager; }
namespace World { struct WorldID; }
// clang-format on

namespace OreUI {

class WorldStartupFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldStartupFacet> {
public:
    // WorldStartupFacet inner types declare
    // clang-format off
    struct BackupThenStartLocalWorldResult;
    // clang-format on

    // WorldStartupFacet inner types define
    struct BackupThenStartLocalWorldResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>                                            duplicateWorldResult;
        ::ll::TypedStorage<4, 8, std::optional<World::StartLocalWorldResult>> startLocalWorldResult;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::LocalWorldStarter&>         mLocalWorldStarter;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>         mWorldCloudSyncer;
    ::ll::TypedStorage<8, 8, ::World::IWorldResourcePackHandler&> mWorldResourcePackHandler;
    ::ll::UntypedStorage<8, 96>                                   mProgressScreenNavigation;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                  mLevelListCache;
    ::ll::UntypedStorage<8, 24>                                   mContentAcquisition;
    ::ll::UntypedStorage<8, 32>                                   mOwnedWorldTemplateManager;
    ::ll::UntypedStorage<8, 144>                                  mBackupThenStartLocalWorldFunctor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>          mStartLocalWorldTaskGroup;
    ::ll::UntypedStorage<4, 16>                                   mStartLocalWorldTaskTracker;
    ::ll::TypedStorage<8, 24, std::string>                        mMissingTemplatesToStart;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>    mMissingPacksToStart;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>    mBrokenPacksToStart;
    ::ll::TypedStorage<8, 24, std::string>                        mMissingPacksSize;
    ::ll::TypedStorage<1, 1, bool>                                mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStartupFacet& operator=(WorldStartupFacet const&);
    WorldStartupFacet(WorldStartupFacet const&);
    WorldStartupFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldStartupFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldStartupFacet(
        ::World::LocalWorldStarter&,
        ::World::IWorldCloudSyncer&,
        ::World::IWorldResourcePackHandler&,
        ::ui::ProgressScreenNavigation,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<World::OwnedWorldTemplateManager>>
    );

    MCNAPI ::DlcCheckResult _checkDLCsToStartLocalWorld(std::string const&);

    MCNAPI void _pushLoadingScreen(::ProgressContentType, ::GameType);

    MCNAPI void clearStartLocalWorldResult();

    MCNAPI ::OreUI::AsyncStatefulFunction_DEPRECATED<
        OreUI::WorldStartupFacet::BackupThenStartLocalWorldResult(const std::string&)>&
    getBackupThenStartLocalWorldFunctor_DEPRECATED();

    MCNAPI std::vector<World::PackDetails> const& getBrokenPacksToStart() const;

    MCNAPI bool const getHasMissingResources() const;

    MCNAPI std::string const& getMissingPacksSize() const;

    MCNAPI std::vector<World::PackDetails> const& getMissingPacksToStart() const;

    MCNAPI std::string const& getMissingTemplateToStart() const;

    MCNAPI std::optional<World::StartLocalWorldResult> const& getStartLocalWorldResult();

    MCNAPI ::OreUI::FacetTaskState getStartLocalWorldTaskState() const;

    MCNAPI bool hasConfirmedPlatformLockedContentForWorld(std::string const&);

    MCNAPI void setConfirmedPlatformLockedContentForWorld(std::string const&);

    MCNAPI void startLocalWorld(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[21]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::LocalWorldStarter&,
        ::World::IWorldCloudSyncer&,
        ::World::IWorldResourcePackHandler&,
        ::ui::ProgressScreenNavigation,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<World::OwnedWorldTemplateManager>>
    );
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

} // namespace OreUI
