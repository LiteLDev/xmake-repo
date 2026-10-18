#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcBatchModel;
class IContentThrottleBridgeContext;
// clang-format on

class DlcBatchThrottleBridge : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IContentThrottleBridgeContext>>> mContext;
    ::ll::TypedStorage<8, 8, long>                                                            mLastTransactionBegunMSec;
    ::ll::TypedStorage<8, 8, long>                                                            mLastTransactionAckedMSec;
    ::ll::TypedStorage<8, 8, long>                                                            mLastTransactionEndedMSec;
    ::ll::TypedStorage<1, 1, bool>          mLargeTransactionShouldContinue;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatchThrottleBridge();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcBatchThrottleBridge();

    virtual ::Bedrock::Threading::Async<bool> maybeBeginPackDownload(::DlcBatchModel*);

    virtual void beginPackDownload(::gsl::not_null<Bedrock::NonOwnerPointer<DlcBatchModel>>);

    virtual bool isBeginningLargeTransaction() const;

    virtual bool shouldLargeTransactionContinue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _beginPackDownload(::gsl::not_null<Bedrock::NonOwnerPointer<DlcBatchModel>>);

    MCNAPI void _handlePackImportCallback(::gsl::not_null<Bedrock::NonOwnerPointer<DlcBatchModel>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<bool> $maybeBeginPackDownload(::DlcBatchModel*);

    MCNAPI void $beginPackDownload(::gsl::not_null<Bedrock::NonOwnerPointer<DlcBatchModel>>);

    MCNAPI bool $isBeginningLargeTransaction() const;

    MCNAPI bool $shouldLargeTransactionContinue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DlcBatchThrottleBridge {};
#endif // @header-generator platform
