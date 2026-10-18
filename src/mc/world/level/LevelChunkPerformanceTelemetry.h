#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
#if defined(LL_PLAT_A) // @header-generator platform
struct ChunkPerformanceData;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelChunkPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    ::ll::TypedStorage<4, 4, uint const>            mServerTickRange;
    ::ll::TypedStorage<1, 1, bool const>            mIsClientSide;
    ::ll::UntypedStorage<8, 16>                     mPerformanceTelemetryTimer;
    ::ll::UntypedStorage<8, 48>                     mTelemetryPeriodicCallback;
    ::ll::TypedStorage<1, 1, bool>                  mPerformanceTelemetryFired;
    ::ll::UntypedStorage<1, 15>                     mShouldTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>    mEventing;
    ::ll::TypedStorage<4, 4, uint const>               mServerTickRange;
    ::ll::TypedStorage<1, 1, bool const>               mIsClientSide;
    ::ll::TypedStorage<8, 8, uint64>                   mPerformanceTelemetryTimer;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mTelemetryPeriodicCallback;
    ::ll::TypedStorage<1, 1, bool>                     mPerformanceTelemetryFired;
    ::ll::TypedStorage<1, 1, bool>                     mShouldTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkPerformanceTelemetry& operator=(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry();
};
