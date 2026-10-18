#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class FileAccessLog {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk635fb3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FileAccessLog& operator=(FileAccessLog const&);
    FileAccessLog(FileAccessLog const&);
    FileAccessLog();
#endif // @header-generator platform
};

} // namespace Core
