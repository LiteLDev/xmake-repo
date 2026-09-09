#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/DlcUIState.h"
#include "mc/client/gui/screens/DlcUIWrapperResult.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class DlcChecker;
class DlcDependency;
class IContentManager;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class ILevelListCache;
class IStoreCatalogRepository;
class MainMenuScreenController;
class MainMenuScreenModel;
class TaskGroup;
class WorldTemplateManager;
struct DlcValidationState;
struct PackIdVersion;
// clang-format on

class DlcUIWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcChecker>>          mDlcChecker;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>               mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::ContentAcquisition&>                mContentAcquisition;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DlcValidationState>> mDlcState;
    ::ll::UntypedStorage<8, 48>                                    mOnCompleteCallback;
    ::ll::TypedStorage<4, 4, ::DlcUIState>                         mDlcUIState;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenController&>          mMainMenuScreenController;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>               mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                    mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IDlcBatcher&>                       mDlcBatcher;
    ::ll::UntypedStorage<8, 24>                                    mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                   mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                   mContentManager;
    ::ll::UntypedStorage<8, 24>                                    mEntitlementManager;
    ::ll::UntypedStorage<8, 8>                                     mStoreCatalogRepository;
    ::ll::UntypedStorage<8, 16>                                    mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcUIWrapper& operator=(DlcUIWrapper const&);
    DlcUIWrapper(DlcUIWrapper const&);
    DlcUIWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcUIWrapper(
        ::IDlcValidation&,
        ::IDlcBatcher&,
        ::ILevelListCache&,
        ::ContentAcquisition&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IContentManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::IStoreCatalogRepository&,
        ::MainMenuScreenModel&,
        ::MainMenuScreenController&
    );

    MCNAPI void _checkForCopiedPremiumWorldTemplate(std::shared_ptr<DlcValidationState>);

    MCNAPI void _showDlcMissingContentKeyModal();

    MCNAPI bool isActive();

    MCNAPI ::DlcUIWrapperResult tick();

    MCNAPI void tryDownload(std::vector<std::string> const&, std::function<void()>, bool, bool, bool);

    MCNAPI void tryDownload(std::string const&, std::function<void()>, bool, bool, bool);

    MCNAPI void tryProcessPendingUpdatesFor(::PackIdVersion const&, std::function<void()>);

    MCNAPI void tryValidateDlcForRealmsUpload(std::string const&, ::PackIdVersion const&, std::function<void()>);

    MCNAPI void tryValidateDlcForWorldLoad(std::string const&, ::PackIdVersion const&, std::function<void()>);

    MCNAPI ~DlcUIWrapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IDlcValidation&,
        ::IDlcBatcher&,
        ::ILevelListCache&,
        ::ContentAcquisition&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IContentManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::IStoreCatalogRepository&,
        ::MainMenuScreenModel&,
        ::MainMenuScreenController&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
