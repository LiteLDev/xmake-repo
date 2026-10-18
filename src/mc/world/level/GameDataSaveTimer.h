#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/CountTracker.h"

class GameDataSaveTimer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextSaveDataTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>> const> mSaveTimeInterval;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextStorageCheckTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker> mDeferStorageActionsRefCount;
    ::ll::TypedStorage<1, 1, bool> mWasStoragePreviouslyDeferred;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextSaveDataTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds const>        mSaveTimeInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextStorageCheckTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker>     mDeferStorageActionsRefCount;
    ::ll::TypedStorage<1, 1, bool>                                    mWasStoragePreviouslyDeferred;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GameDataSaveTimer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~GameDataSaveTimer();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::chrono::
        time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
            calculateNextStorageCheckTime(
                std::chrono::
                    time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
            );
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
