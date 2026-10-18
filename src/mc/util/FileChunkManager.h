#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/FileChunkInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct FileChunk;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct FileChunkInfo;
#endif // @header-generator platform
// clang-format on

class FileChunkManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                       mTotalSize;
    ::ll::TypedStorage<4, 4, uint>                        mChunkSize;
    ::ll::TypedStorage<8, 8, ulong>                       mTotalNbChunks;
    ::ll::TypedStorage<8, 8, ulong>                       mRequestedChunks;
    ::ll::TypedStorage<8, 8, ulong>                       mReceivedChunks;
    ::ll::TypedStorage<8, 8, ulong>                       mWrittenChunks;
    ::ll::TypedStorage<8, 24, std::vector<FileChunkInfo>> mChunkInfo;
    ::ll::UntypedStorage<8, 24>                           mChunkQueue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                                                      mTotalSize;
    ::ll::TypedStorage<4, 4, uint>                                                        mChunkSize;
    ::ll::TypedStorage<8, 8, uint64>                                                      mTotalNbChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                      mRequestedChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                      mReceivedChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                      mWrittenChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::FileChunkInfo>>                             mChunkInfo;
    ::ll::TypedStorage<8, 24, ::MovePriorityQueue<::FileChunk, ::std::less<::FileChunk>>> mChunkQueue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FileChunkManager();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void _generateChunkInfo();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
