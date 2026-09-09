#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct ChunkPerformanceData;
// clang-format on

class LevelChunkPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    ::ll::TypedStorage<4, 4, uint const>            mServerTickRange;
    ::ll::TypedStorage<1, 1, bool const>            mIsClientSide;
    ::ll::UntypedStorage<8, 16>                     mPerformanceTelemetryTimer;
    ::ll::UntypedStorage<8, 48>                     mTelemetryPeriodicCallback;
    ::ll::TypedStorage<1, 1, bool>                  mPerformanceTelemetryFired;
    ::ll::UntypedStorage<1, 15>                     mShouldTick;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkPerformanceTelemetry& operator=(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry();
};
