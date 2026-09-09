#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskResult.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class LevelChunk;
class LevelChunkPacket;
class VarIntDataInput;
namespace ClientBlobCache { class Cache; }
// clang-format on

class LevelChunkPacketHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelChunk>>              mChunk;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlobCache::Cache>> mCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const LevelChunkPacket>> mPacket;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<ulong>>>       mCacheMissesSender;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<ulong>>>       mCacheHitsSender;
    ::ll::UntypedStorage<8, 56>                                        mSteps;
    ::ll::UntypedStorage<8, 48>                                        mMainThreadCallback;
    ::ll::TypedStorage<8, 24, std::string>                             mCacheBuffer;
    ::ll::TypedStorage<8, 8, ulong>                                    mReused;
    ::ll::TypedStorage<8, 8, ulong const>                              mSequenceId;
    ::ll::TypedStorage<8, 8, ulong>                                    mDeserializeStepID;
    ::ll::TypedStorage<8, 64, ::ReadOnlyBinaryStream>                  mInputStream;
    ::ll::UntypedStorage<1, 16>                                        mCacheEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkPacketHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addReuseFromCacheStep(std::function<void(VarIntDataInput&)>&&);

    MCNAPI void addStep(std::function<TaskResult()>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& REQUEST_DELAY();
    // NOLINTEND
};
