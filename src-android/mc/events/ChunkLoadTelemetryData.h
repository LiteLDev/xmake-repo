#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
namespace Json { class Value; }
// clang-format on

struct ChunkLoadTelemetryData {
public:
    // ChunkLoadTelemetryData inner types declare
    // clang-format off
    struct ServerChunkLoading;
    struct ClientSubChunkCache;
    // clang-format on

    // ChunkLoadTelemetryData inner types define
    struct ServerChunkLoading {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mGenerated;
        ::ll::TypedStorage<4, 4, uint> mFromStorage;
        ::ll::TypedStorage<4, 4, uint> mGeneratedOrFromStorage;
        // NOLINTEND
    };

    struct ClientSubChunkCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mHitsInsideTickRange;
        ::ll::TypedStorage<4, 4, uint> mHitsOutsideTickRange;
        ::ll::TypedStorage<4, 4, uint> mRequests;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mServerSimDistance;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoading;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingInsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingOutsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingRequestedInsideTickRangeLoadedOutsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingRequestedOutsideTickRangeLoadedInsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ClientSubChunkCache> mClientSubChunkCache;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void recordLoadedChunk(::LevelChunk const&);
    // NOLINTEND
};
