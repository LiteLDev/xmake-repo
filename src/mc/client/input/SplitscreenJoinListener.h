#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class InputHandler;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SplitscreenJoinListener {
public:
    // SplitscreenJoinListener inner types declare
    // clang-format off
    struct SplitscreenJoinTracker;
    // clang-format on

    // SplitscreenJoinListener inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SplitscreenJoinInputState : int {
        None                       = 0,
        InitialJoinInputReceived   = 1,
        WaitingForJoinConfirmation = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class SplitscreenJoinInputState : int {
        None                       = 0,
        InitialJoinInputReceived   = 1,
        WaitingForJoinConfirmation = 2,
    };
#else // @header-generator platform
    enum class SplitscreenJoinInputState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct SplitscreenJoinTracker {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, ::SplitscreenJoinListener::SplitscreenJoinInputState> mState;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSplitscreenJoinExpiration;
        // clang-format on
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::SplitscreenJoinListener::SplitscreenJoinTracker> mJoinTracker;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastToastTime;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SplitscreenJoinListener();

    MCNAPI bool isWaitingForSplitscreenJoinConfirmation() const;

    MCNAPI void registerInputHandlers(::InputHandler&);

    MCNAPI void tick(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& sJoinConfirmationTimeout();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct SplitscreenJoinTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SplitscreenJoinListener::SplitscreenJoinInputState> mState;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mSplitscreenJoinExpiration;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::SplitscreenJoinListener::SplitscreenJoinTracker> mJoinTracker;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>            mLastToastTime;
    // NOLINTEND
#else // @header-generator platform
    struct SplitscreenJoinTracker {};
#endif // @header-generator platform
#endif // @header-generator platform
};
