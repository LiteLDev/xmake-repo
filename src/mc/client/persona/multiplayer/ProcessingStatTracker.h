#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/multiplayer/AppearanceProcessingRequestHandle.h"
#include "mc/client/persona/multiplayer/ProcessingTimestamp.h"
#include "mc/client/persona/multiplayer/ProcessingTimestampType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace persona::multiplayer::appearance {

#if defined(LL_PLAT_A) // @header-generator platform
class ProcessingStatTracker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::persona::multiplayer::AppearanceProcessingRequestHandle> mRequestHandle;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreateTime;
    ::ll::TypedStorage<8, 24, std::vector<persona::multiplayer::appearance::ProcessingTimestamp>> mTimestamps;
    ::ll::TypedStorage<1, 1, bool> mIsPersona;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ProcessingStatTracker();
};
#else // @header-generator platform
class ProcessingStatTracker {};
#endif // @header-generator platform

} // namespace persona::multiplayer::appearance
