#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/WorldSeedModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace Social { class IUserManager; }
// clang-format on

class WorldSeedCatalogModel {
public:
    // WorldSeedCatalogModel inner types declare
    // clang-format off
    struct WorldSeedFilteredLookup;
    // clang-format on

    // WorldSeedCatalogModel inner types define
    struct WorldSeedFilteredLookup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>          contentIndex;
        ::ll::TypedStorage<8, 8, ulong>        startStringIndex;
        ::ll::TypedStorage<8, 24, std::string> matchedText;
        // NOLINTEND

    public:
        // prevent constructor by default
        WorldSeedFilteredLookup& operator=(WorldSeedFilteredLookup const&);
        WorldSeedFilteredLookup(WorldSeedFilteredLookup const&);
        WorldSeedFilteredLookup();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                            mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<WorldSeedModel>>                                 mWorldSeedModels;
    ::ll::UntypedStorage<8, 168>                                                           mInvalidWorldSeedModel;
    ::ll::TypedStorage<8, 24, std::string>                                                 mWorldSeedFilter;
    ::ll::TypedStorage<8, 24, std::vector<WorldSeedCatalogModel::WorldSeedFilteredLookup>> mFilteredWorldSeedModels;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentCatalogService>>                       mContentCatalogService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                                       mExistenceTracker;
    ::ll::TypedStorage<1, 1, bool>                                                         mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                         mFailedToFetch;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedCatalogModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldSeedCatalogModel(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&
    );

    MCNAPI void _filterWorldSeedModels();

    MCNAPI bool failedFetch() const;

    MCNAPI void fetch();

    MCNAPI int getNumWorldSeedModels();

    MCNAPI ::WorldSeedModel& getWorldSeedModel(int);

    MCNAPI std::vector<WorldSeedModel>& getWorldSeedModels();

    MCNAPI void setWorldSeedsNameFilter(std::string const&);

    MCNAPI bool update();

    MCNAPI ~WorldSeedCatalogModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
