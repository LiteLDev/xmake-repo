#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/chunk/ChunkState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling { class PerfClock; }
// clang-format on

namespace Bedrock {

class LevelChunkTimings {
public:
    // LevelChunkTimings inner types declare
    // clang-format off
    struct Self;
    // clang-format on

    // LevelChunkTimings inner types define
    struct Self {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 112, std::array<std::atomic<long>, 14>> mStateTimes;
        ::ll::TypedStorage<8, 8, std::atomic<ulong>>                  mNumChanges;
        ::ll::TypedStorage<8, 8, std::atomic<ulong>>                  mNumRejectedChanges;
        // NOLINTEND
    };

    using StateTimes = std::array<std::atomic<long>, 14>;

    using LockMutex = ::SpinLockImpl;

    using AtomicTime = std::atomic<long>;

    using Lock = std::lock_guard<SpinLockImpl>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                   mDataMutex;
    ::ll::TypedStorage<8, 136, std::optional<Bedrock::LevelChunkTimings::Self>> mSelf;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                                mNumDiscards;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onStateChange(::ChunkState, ::ChunkState);
    // NOLINTEND
};

} // namespace Bedrock
