#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/multiplayer/ProcessingTimestampType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace persona::multiplayer::appearance {

#if defined(LL_PLAT_A) // @header-generator platform
struct ProcessingTimestamp {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::persona::multiplayer::appearance::ProcessingTimestampType> mType;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTime;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct ProcessingTimestamp {};
#endif // @header-generator platform

} // namespace persona::multiplayer::appearance
