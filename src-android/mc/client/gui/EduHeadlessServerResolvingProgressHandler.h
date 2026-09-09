#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
