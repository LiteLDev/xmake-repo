#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/CountTracker.h"

class GameDataSaveTimer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextSaveDataTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>> const> mSaveTimeInterval;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextStorageCheckTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker> mDeferStorageActionsRefCount;
    ::ll::TypedStorage<1, 1, bool> mWasStoragePreviouslyDeferred;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GameDataSaveTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool areStorageActionsAllowed() const;

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
            calculateNextGameDataSaveTime(
                std::chrono::
                    time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
            ) const;

    MCNAPI bool isNextGameDataSaveTimeSet() const;

    MCNAPI bool isTimeForGameDataSave(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    ) const;

    MCNAPI bool isTimeForStorageCheck(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    ) const;

    MCNAPI void onAppSuspend();

    MCNAPI void onStartLeaveGame();

    MCNAPI void onUpdateAfterStorageDeferred(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    MCNAPI void setNextGameDataSaveTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void setNextStorageCheckTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void setWasStorageSavePreviouslyDeferred(bool);

    MCNAPI bool wasStorageSavePreviouslyDeferred() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::chrono::
        time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
            calculateNextStorageCheckTime(
                std::chrono::
                    time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
            );
    // NOLINTEND
};
