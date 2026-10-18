#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
#else // @header-generator platform
class WorldCopyProgressHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // WorldCopyProgressHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Result : int {
        Success   = 0,
        Error     = 1,
        Cancelled = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mLevelID;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mNewWorldId;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<::WorldCopyProgressHandler::Result>> mCopyTaskHandle;
    ::ll::TypedStorage<8, 64, ::std::function<void(::LevelData&)>>                             mSetDataCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::WorldCopyProgressHandler::Result)>>       mOnCompleteCallback;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>>                                             mProgress;
    ::ll::TypedStorage<4, 4, float>                                                            mShownProgress;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mStartTimestamp;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mLastTickTimestamp;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                   mIOTaskGroup;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mBaseProgressMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mTTSProgressMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mTitleText;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCopyProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldCopyProgressHandler(
        ::std::string const&                                      levelID,
        bool                                                      isEditorModeEnabled,
        ::std::function<void(::LevelData&)>                       setDataCallback,
        ::std::function<void(::WorldCopyProgressHandler::Result)> onCompleteCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                      levelID,
        bool                                                      isEditorModeEnabled,
        ::std::function<void(::LevelData&)>                       setDataCallback,
        ::std::function<void(::WorldCopyProgressHandler::Result)> onCompleteCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTTSProgressMessage() const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
#else // @header-generator platform
    enum class Result : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
