#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class EDUServersScreenController;
class MinecraftScreenModel;
// clang-format on

class EduServerFetchProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mEduServersScreenController;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mEduServerFetchStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const> mMinimumDisplayInterval;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const> mTimeOutTime;
    ::ll::TypedStorage<4, 4, ::LoadingState> mLoadingState;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EduServerFetchProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduServerFetchProgressHandler();

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduServerFetchProgressHandler(::Bedrock::NonOwnerPointer<EDUServersScreenController>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<EDUServersScreenController>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::MinecraftScreenModel&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

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
