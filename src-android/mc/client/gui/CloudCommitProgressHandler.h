#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/deps/core/file/StorageResult.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CloudCommitProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    ::ll::TypedStorage<8, 24, std::string> mProgressMessage;
    ::ll::TypedStorage<4, 4, ::LoadingState> mLoadingState;
    ::ll::TypedStorage<4, 4, float> mTimeProgress;
    ::ll::TypedStorage<8, 24, std::string> mLevelId;
    ::ll::TypedStorage<4, 4, float> mProgress;
    ::ll::TypedStorage<4, 4, ::Core::StorageResult> mStorageResult;
    ::ll::TypedStorage<1, 1, bool> mCanceled;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CloudCommitProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onRetry(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND
};
