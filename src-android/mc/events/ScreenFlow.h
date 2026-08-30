#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class ScreenFlow {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<1, 144> mAccessMutex;
    ::ll::UntypedStorage<8, 16> mScreenFlow;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreationTime;
    ::ll::TypedStorage<8, 24, std::string> mApplicationId;
    ::ll::UntypedStorage<8, 32> mLastScreen;
    ::ll::UntypedStorage<8, 48> nowFunc;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScreenFlow();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
