#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class WorldCopyProgressHandler : public ::ProgressHandler {
public:
    // WorldCopyProgressHandler inner types define
    enum class Result : int {
        Success   = 0,
        Error     = 1,
        Cancelled = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mLevelID;
    ::ll::TypedStorage<8, 24, std::string> mNewWorldId;
    ::ll::UntypedStorage<8, 16> mCopyTaskHandle;
    ::ll::UntypedStorage<8, 48> mSetDataCallback;
    ::ll::UntypedStorage<8, 48> mOnCompleteCallback;
    ::ll::TypedStorage<4, 4, std::atomic<float>> mProgress;
    ::ll::TypedStorage<4, 4, float> mShownProgress;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTimestamp;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTickTimestamp;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<8, 24, std::string> mBaseProgressMessage;
    ::ll::TypedStorage<8, 24, std::string> mTTSProgressMessage;
    ::ll::UntypedStorage<8, 32> mTitleText;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCopyProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTTSProgressMessage() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldCopyProgressHandler(
        std::string const&,
        bool,
        std::function<void(LevelData&)>,
        std::function<void(WorldCopyProgressHandler::Result)>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& MIN_SECONDS_BEFORE_COMPLETE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        bool,
        std::function<void(LevelData&)>,
        std::function<void(WorldCopyProgressHandler::Result)>
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

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTTSProgressMessage() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
