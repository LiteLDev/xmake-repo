#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/world/CopyResourcePacksResult.h"
#include "mc/client/world/world_creation_utils/WorldCreationResult.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/LevelSettings.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IContentManager;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class IGameServerStartup;
class ILevelListCache;
class IResourcePackRepository;
class IStoreCatalogRepository;
class LevelDataWrapper;
class ResourcePackCopyProgressHandler;
class ResourcePackManager;
class TrialManager;
struct PackManagerContentSource;
// clang-format on

class WorldCreationHelper {
public:
    // WorldCreationHelper inner types define
    enum class WorldCreationMode : int {
        Local  = 0,
        Realms = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                               mContentManager;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                mDlcValidation;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>>                     mDlcBatcher;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                               mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                           mContentAcquisition;
    ::ll::UntypedStorage<8, 8>                                                 mStoreCatalogRepository;
    ::ll::UntypedStorage<8, 24>                                                mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                            mGameServerStartup;
    ::ll::UntypedStorage<8, 24>                                                mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::TrialManager&>                                  mTrialManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                           mExistenceTracker;
    ::ll::TypedStorage<4, 4, ::WorldCreationHelper::WorldCreationMode>         mCreationMode;
    ::ll::TypedStorage<1, 1, bool>                                             mCreatingFromTemplate;
    ::ll::UntypedStorage<8, 1112>                                              mLevelSettings;
    ::ll::TypedStorage<8, 24, std::string>                                     mLevelName;
    ::ll::UntypedStorage<8, 48>                                                mPackIdVersion;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>                      mWorldContentSource;
    ::ll::UntypedStorage<8, 696>                                               mLevelSummary;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackCopyProgressHandler>> mProgressHandler;
    ::ll::UntypedStorage<8, 16>                                                mCopyResourcePacksFuture;
    ::ll::UntypedStorage<8, 16>                                                mStartResult;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCreationHelper& operator=(WorldCreationHelper const&);
    WorldCreationHelper(WorldCreationHelper const&);
    WorldCreationHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldCreationHelper(
        ::IContentManager&,
        ::IDlcValidation&,
        ::ILevelListCache&,
        ::IContentAcquisition&,
        ::IStoreCatalogRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&,
        ::ResourcePackManager&,
        ::ResourcePackManager&,
        ::TrialManager&,
        ::IGameServerStartup&
    );

    MCNAPI ::WorldCreationUtils::WorldCreationResult _createWorldImpl(::LevelDataWrapper&, ::LevelSummary&);

    MCNAPI bool canStartLocalServer() const;

    MCNAPI ::DlcCheckResult checkDlc();

    MCNAPI ::CopyResourcePacksResult checkPackCopyProgress();

    MCNAPI ::WorldCreationUtils::WorldCreationResult createOnRealms(::LevelDataWrapper&, ::LevelSummary&);

    MCNAPI ::WorldCreationUtils::WorldCreationResult createWorld(::LevelDataWrapper&, ::LevelSummary&);

    MCNAPI ::LevelSettings const& getLevelSettings() const;

    MCNAPI ::Bedrock::Threading::Async<void> getStartResult();

    MCNAPI ::CopyResourcePacksResult startCopyingResourcePacks();

    MCNAPI bool startLocalServer();

    MCNAPI ~WorldCreationHelper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IContentManager&,
        ::IDlcValidation&,
        ::ILevelListCache&,
        ::IContentAcquisition&,
        ::IStoreCatalogRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&,
        ::ResourcePackManager&,
        ::ResourcePackManager&,
        ::TrialManager&,
        ::IGameServerStartup&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
