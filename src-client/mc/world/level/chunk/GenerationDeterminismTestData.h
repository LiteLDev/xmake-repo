#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ClientChunkGenerationDifferenceData.h"

struct GenerationDeterminismTestData {
public:
    // GenerationDeterminismTestData inner types declare
    // clang-format off
    struct ChunkComparisonData;
    struct SerializedChunk;
    // clang-format on

    // GenerationDeterminismTestData inner types define
    struct ChunkComparisonData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                            mSlice;
        ::ll::TypedStorage<8, 208, ::ClientChunkGenerationDifferenceData> mDifferenceData;
        ::ll::TypedStorage<4, 4, uint>                                    mClientServerChunks;
        ::ll::TypedStorage<4, 4, uint>                                    mServerOnlyChunks;
        ::ll::TypedStorage<4, 4, uint>                                    mClientOnlyChunks;
        // NOLINTEND
    };

    struct SerializedChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mClient;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mServer;
        // NOLINTEND
    };
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
