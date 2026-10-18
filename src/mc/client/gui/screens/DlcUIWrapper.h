#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/DlcUIState.h"
#include "mc/client/gui/screens/DlcUIWrapperResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class DlcChecker;
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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>                        mDlcChecker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                               mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::ContentAcquisition&>                                  mContentAcquisition;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DlcValidationState>>               mDlcState;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                               mOnCompleteCallback;
    ::ll::TypedStorage<4, 4, ::DlcUIState>                                           mDlcUIState;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenController&>                            mMainMenuScreenController;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>                                 mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                      mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IDlcBatcher&>                                         mDlcBatcher;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>> mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                     mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                     mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>  mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                             mStoreCatalogRepository;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>        mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcUIWrapper& operator=(DlcUIWrapper const&);
    DlcUIWrapper(DlcUIWrapper const&);
    DlcUIWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DlcUIWrapper(
        ::IDlcValidation&                                            dlcValidation,
        ::IDlcBatcher&                                               dlcBatcher,
        ::ILevelListCache&                                           levelListCache,
        ::ContentAcquisition&                                        contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const& worldTemplateManager,
        ::IContentManager&                                           contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>         entitlementManager,
        ::IStoreCatalogRepository&                                   storeCatalogRepository,
        ::MainMenuScreenModel&                                       mainMenuScreenModel,
        ::MainMenuScreenController&                                  mainMenuScreenController
    );

    MCAPI void _checkForCopiedPremiumWorldTemplate(::std::shared_ptr<::DlcValidationState> dlcState);

    MCAPI bool _continueAllowed(::std::shared_ptr<::DlcValidationState> const dlcState) const;

    MCAPI void _showDlcMissingContentKeyModal();

    MCAPI ::DlcUIWrapperResult tick();

    MCAPI void tryDownload(
        ::std::string const&    productId,
        ::std::function<void()> callback,
        bool                    showProgressScreen,
        bool                    showCloseButton,
        bool                    showDownloadPrompt
    );

    MCAPI void tryDownload(
        ::std::vector<::std::string> const& productIds,
        ::std::function<void()>             callback,
        bool                                showProgressScreen,
        bool                                showCloseButton,
        bool                                showDownloadPrompt
    );

    MCAPI void
    tryProcessPendingUpdatesFor(::PackIdVersion const& worldTemplateIdentity, ::std::function<void()> callback);

    MCAPI void tryValidateDlcForRealmsUpload(
        ::std::string const&    levelId,
        ::PackIdVersion const&  worldPackId,
        ::std::function<void()> callback
    );

    MCAPI void tryValidateDlcForWorldLoad(
        ::std::string const&    levelId,
        ::PackIdVersion const&  worldPackId,
        ::std::function<void()> callback
    );

    MCAPI ~DlcUIWrapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IDlcValidation&                                            dlcValidation,
        ::IDlcBatcher&                                               dlcBatcher,
        ::ILevelListCache&                                           levelListCache,
        ::ContentAcquisition&                                        contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const& worldTemplateManager,
        ::IContentManager&                                           contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>         entitlementManager,
        ::IStoreCatalogRepository&                                   storeCatalogRepository,
        ::MainMenuScreenModel&                                       mainMenuScreenModel,
        ::MainMenuScreenController&                                  mainMenuScreenController
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class DlcUIWrapper {};
#endif // @header-generator platform
#endif // @header-generator platform
