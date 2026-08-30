#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace brstd { struct source_location; }
// clang-format on

struct TaskStartInfo {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::string_view> name;
    ::ll::UntypedStorage<8, 8> affinity;
    ::ll::TypedStorage<4, 4, uint> priority;
    ::ll::TypedStorage<4, 4, int> priorityBackDown;
    ::ll::TypedStorage<1, 1, bool> mLinkCancellation;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> startAtTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TaskStartInfo();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::__thread_id const& NoAffinity();
    // NOLINTEND
};
