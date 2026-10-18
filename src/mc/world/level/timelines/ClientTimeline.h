#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/timelines/Timeline.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class WorldClock;
struct DimensionType;
// clang-format on

class ClientTimeline : public ::Timeline {
public:
    // prevent constructor by default
    ClientTimeline();
};
#else // @header-generator platform
class ClientTimeline : public ::Timeline {};
#endif // @header-generator platform
