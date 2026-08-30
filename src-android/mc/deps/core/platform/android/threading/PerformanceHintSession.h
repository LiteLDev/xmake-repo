#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct APerformanceHintSession;
// clang-format on

namespace Bedrock::Threading {

class PerformanceHintSession {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStart;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mExpected;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>> mTids;
    ::ll::TypedStorage<8, 8, ::APerformanceHintSession*> mSession;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PerformanceHintSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PerformanceHintSession(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);

    MCNAPI void hint();

    MCNAPI void start();

    MCNAPI ~PerformanceHintSession();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
