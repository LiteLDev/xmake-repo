#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct LevelChunkPacketPayload {
public:
    // LevelChunkPacketPayload inner types declare
    // clang-format off
    struct SubChunkMetadata;
    // clang-format on

    // LevelChunkPacketPayload inner types define
    struct SubChunkMetadata {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> blobId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> blobId;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                              mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                         mDimensionId;
    ::ll::TypedStorage<4, 4, uint>                                                    mSubChunksCount;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                      mClientRequestSubChunkLimit;
    ::ll::TypedStorage<1, 1, bool>                                                    mCacheEnabled;
    ::ll::TypedStorage<8, 24, std::vector<LevelChunkPacketPayload::SubChunkMetadata>> mCacheMetadata;
    ::ll::TypedStorage<8, 24, std::string>                                            mSerializedChunk;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsChunkInTickRange;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsClientPacket;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool clientNeedsToRequestSubchunks() const;

    MCNAPI std::vector<LevelChunkPacketPayload::SubChunkMetadata> const& getMetadata() const;

    MCNAPI void pushSubChunkMetadata(ulong);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                  mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                             mDimensionId;
    ::ll::TypedStorage<4, 4, uint>                                                        mSubChunksCount;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                        mClientRequestSubChunkLimit;
    ::ll::TypedStorage<1, 1, bool>                                                        mCacheEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunkPacketPayload::SubChunkMetadata>> mCacheMetadata;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mSerializedChunk;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsChunkInTickRange;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsClientPacket;
#endif // @header-generator platform
    // NOLINTEND
};
