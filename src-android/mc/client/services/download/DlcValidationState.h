#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/DlcDependency.h"
#include "mc/client/services/download/DlcId.h"
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/client/services/download/IDlcValidationState.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class LevelData;
// clang-format on

struct DlcValidationState : public ::IDlcValidationState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mLevelId;
    ::ll::TypedStorage<8, 24, std::vector<DlcId>>         mDlcIds;
    ::ll::TypedStorage<8, 144, ::DlcId>                   mWorldTemplateDlcId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>   mProductTitles;
    ::ll::UntypedStorage<8, 32>                           mWorldTemplateTitle;
    ::ll::UntypedStorage<8, 48>                           mCallback;
    ::ll::TypedStorage<8, 24, std::vector<DlcDependency>> mPackDependencies;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mOwnedMissingPackIds;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mDlcMissingContentKeyPackIds;
    ::ll::TypedStorage<8, 24, std::vector<DlcId>>         mDlcToDownload;
    ::ll::TypedStorage<8, 8, ::LevelData*>                mLevelDataPtr;
    ::ll::TypedStorage<1, 1, bool>                        mOwnershipBypassEnabled;
    ::ll::TypedStorage<1, 1, bool>                        mShowCancelOnPurchasePrompt;
    ::ll::TypedStorage<1, 1, bool>                        mShowProgressScreen;
    ::ll::TypedStorage<1, 1, bool>                        mShowCloseButton;
    ::ll::TypedStorage<1, 1, bool>                        mRequireCancelToExit;
    ::ll::TypedStorage<1, 1, bool>                        mSkipPurchase;
    ::ll::TypedStorage<1, 1, bool>                        mStorageCheckComplete;
    ::ll::TypedStorage<1, 1, bool>                        mStorageSpaceAvailable;
    ::ll::UntypedStorage<4, 4>                            mStorageSpaceResult;
    ::ll::TypedStorage<8, 8, ulong>                       mStorageSpaceNeeded;
    ::ll::TypedStorage<1, 1, bool>                        mDlcTitlesFetched;
    ::ll::TypedStorage<1, 1, bool>                        mWorldTemplateTitleFetched;
    ::ll::TypedStorage<1, 1, bool>                        mEnableMissingContentCheck;
    ::ll::TypedStorage<1, 1, bool>                        mEnableMissingWorldTemplateCheck;
    ::ll::TypedStorage<1, 1, bool>                        mAllowDownloadNoWifi;
    ::ll::TypedStorage<1, 1, bool>                        mIgnorePerfIssues;
    ::ll::TypedStorage<1, 1, bool>                        mShowDownloadPrompt;
    ::ll::TypedStorage<1, 1, bool>                        mIsUpdate;
    ::ll::TypedStorage<1, 1, bool>                        mDlcDownloadChecked;
    ::ll::TypedStorage<1, 1, bool>                        mWorldTemplateDownloadUserApproved;
    ::ll::TypedStorage<1, 1, bool>                        mDoWorldTemplateCopiedCheck;
    ::ll::TypedStorage<1, 1, bool>                        mRequiresCopiedPackRemovalCheck;
    ::ll::TypedStorage<1, 1, bool>                        mHasMissingOwnedWorldTemplateDlc;
    ::ll::TypedStorage<1, 1, bool>                        mHasMissingOwnedContent;
    ::ll::TypedStorage<1, 1, bool>                        mHasMissingContentKey;
    ::ll::TypedStorage<1, 1, bool>                        mProcessingPendingImports;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcValidationState& operator=(DlcValidationState const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcValidationState();

    virtual void setProcessingPendingImports(bool);

    virtual bool isProcessingPendingImports() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcValidationState(
        ::ILevelListCache&,
        std::string const&,
        bool,
        bool,
        std::function<void()>,
        std::vector<DlcDependency> const
    );

    MCNAPI DlcValidationState(
        ::ILevelListCache&,
        std::vector<std::string> const&,
        std::function<void()>,
        bool,
        bool,
        bool,
        bool,
        bool
    );

    MCNAPI void _fetchRequiresCopiedPackRemovalFlagFromLevel(::ILevelListCache&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ILevelListCache&, std::string const&, bool, bool, std::function<void()>, std::vector<DlcDependency> const);

    MCNAPI void*
    $ctor(::ILevelListCache&, std::vector<std::string> const&, std::function<void()>, bool, bool, bool, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setProcessingPendingImports(bool);

    MCNAPI bool $isProcessingPendingImports() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
