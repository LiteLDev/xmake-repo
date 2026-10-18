#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/EduServerProgressRetryResult.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/social/EduDedicatedServerDetails.h"
#include "mc/social/EduJoinServerResponse.h"
#include "mc/social/EduResponseError.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlayScreenModel;
// clang-format on

class EduHeadlessServerResolvingProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState>                         mLoadingState;
    ::ll::TypedStorage<8, 72, ::Social::EduDedicatedServerDetails>   mDetails;
    ::ll::TypedStorage<8, 24, std::string>                           mPasscode;
    ::ll::UntypedStorage<8, 24>                                      mPlayScreenModel;
    ::ll::UntypedStorage<8, 64>                                      mReopenPasscodeEntry;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                          mTaskGroup;
    ::ll::TypedStorage<8, 56, ::Social::EduResponseError>            mError;
    ::ll::TypedStorage<8, 224, ::Social::EduJoinServerResponse>      mJoinResponse;
    ::ll::TypedStorage<4, 4, ::Social::EduServerProgressRetryResult> mRetryResult;
    ::ll::TypedStorage<8, 24, std::string>                           mTitleText;
    ::ll::TypedStorage<8, 24, std::string>                           mProgressText;
    ::ll::UntypedStorage<8, 32>                                      mPreviousProgressText;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessServerResolvingProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduHeadlessServerResolvingProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onRetry(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduHeadlessServerResolvingProgressHandler(
        ::Social::EduDedicatedServerDetails const&,
        std::string const&,
        std::shared_ptr<PlayScreenModel>,
        ::brstd::move_only_function<void()>&
    );

    MCNAPI ::Social::EduServerProgressRetryResult getRetryResult() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Social::EduDedicatedServerDetails const&,
        std::string const&,
        std::shared_ptr<PlayScreenModel>,
        ::brstd::move_only_function<void()>&
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
    MCNAPI void $onStart(::MinecraftScreenModel&);

    MCNAPI void $tick(::MinecraftScreenModel&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI void $onRetry(::MinecraftScreenModel&);

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;

    MCNAPI ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/EduServerProgressRetryResult.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/social/EduDedicatedServerDetails.h"
#include "mc/social/EduJoinServerResponse.h"
#include "mc/social/EduResponseError.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlayScreenModel;
// clang-format on

class EduHeadlessServerResolvingProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState>                         mLoadingState;
    ::ll::TypedStorage<8, 88, ::Social::EduDedicatedServerDetails>   mDetails;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPasscode;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>  mPlayScreenModel;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>>   mReopenPasscodeEntry;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                          mTaskGroup;
    ::ll::TypedStorage<8, 64, ::Social::EduResponseError>            mError;
    ::ll::TypedStorage<8, 272, ::Social::EduJoinServerResponse>      mJoinResponse;
    ::ll::TypedStorage<4, 4, ::Social::EduServerProgressRetryResult> mRetryResult;
    ::ll::TypedStorage<8, 32, ::std::string>                         mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                         mProgressText;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPreviousProgressText;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessServerResolvingProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduHeadlessServerResolvingProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onRetry(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduHeadlessServerResolvingProgressHandler(
        ::Social::EduDedicatedServerDetails const& details,
        ::std::string const&                       passcode,
        ::std::shared_ptr<::PlayScreenModel>       model,
        ::brstd::move_only_function<void()>&       reopenPasscodeEntry
    );

    MCAPI void _handleErrors(::MinecraftScreenModel& minecraftScreenModel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Social::EduDedicatedServerDetails const& details,
        ::std::string const&                       passcode,
        ::std::shared_ptr<::PlayScreenModel>       model,
        ::brstd::move_only_function<void()>&       reopenPasscodeEntry
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onRetry(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND
};
#else // @header-generator platform
class EduHeadlessServerResolvingProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
