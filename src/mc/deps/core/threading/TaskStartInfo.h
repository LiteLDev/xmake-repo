#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace brstd { struct source_location; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct TaskStartInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::string_view> name;
    ::ll::UntypedStorage<8, 8> affinity;
    ::ll::TypedStorage<4, 4, uint> priority;
    ::ll::TypedStorage<4, 4, int> priorityBackDown;
    ::ll::TypedStorage<1, 1, bool> mLinkCancellation;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> startAtTime;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk8ac9bb;
    ::ll::UntypedStorage<4, 4>  mUnkd75717;
    ::ll::UntypedStorage<4, 4>  mUnk184e63;
    ::ll::UntypedStorage<4, 4>  mUnk518d45;
    ::ll::UntypedStorage<1, 1>  mUnke94090;
    ::ll::UntypedStorage<8, 8>  mUnk15c0d8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TaskStartInfo& operator=(TaskStartInfo const&);
    TaskStartInfo(TaskStartInfo const&);
#endif // @header-generator platform
    TaskStartInfo();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::__thread_id const& NoAffinity();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
