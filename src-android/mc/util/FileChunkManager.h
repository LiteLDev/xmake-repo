#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/util/FileChunkInfo.h"

// auto generated forward declare list
// clang-format off
struct FileChunk;
// clang-format on

class FileChunkManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                       mTotalSize;
    ::ll::TypedStorage<4, 4, uint>                        mChunkSize;
    ::ll::TypedStorage<8, 8, ulong>                       mTotalNbChunks;
    ::ll::TypedStorage<8, 8, ulong>                       mRequestedChunks;
    ::ll::TypedStorage<8, 8, ulong>                       mReceivedChunks;
    ::ll::TypedStorage<8, 8, ulong>                       mWrittenChunks;
    ::ll::TypedStorage<8, 24, std::vector<FileChunkInfo>> mChunkInfo;
    ::ll::UntypedStorage<8, 24>                           mChunkQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileChunkManager();

    MCNAPI void _generateChunkInfo();

    MCNAPI bool canWriteChunk() const;

    MCNAPI ::FileChunk dequeueChunk();

    MCNAPI int getAndIncrementNextChunk();

    MCNAPI ::FileChunkInfo getChunkInfo(int) const;

    MCNAPI std::vector<FileChunkInfo> const& getChunks() const;

    MCNAPI ulong getDownloadedBytes() const;

    MCNAPI float getProgress() const;

    MCNAPI int getTotalNumberOfChunks();

    MCNAPI void queueReceivedChunk(::FileChunk&&);

    MCNAPI bool requestedAllChunks() const;

    MCNAPI void reset();

    MCNAPI void reset(ulong, uint);

    MCNAPI bool writtenAllChunks() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
