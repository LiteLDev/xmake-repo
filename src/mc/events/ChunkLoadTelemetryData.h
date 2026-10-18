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
#if defined(LL_PLAT_A) // @header-generator platform
    struct ServerChunkLoading;
#else // @header-generator platform
#endif // @header-generator platform
    struct ClientSubChunkCache;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ServerChunkLoading;
#endif // @header-generator platform
    // clang-format on

    // ChunkLoadTelemetryData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ServerChunkLoading {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mGenerated;
        ::ll::TypedStorage<4, 4, uint> mFromStorage;
        ::ll::TypedStorage<4, 4, uint> mGeneratedOrFromStorage;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct ClientSubChunkCache {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint> mHitsInsideTickRange;
        ::ll::TypedStorage<4, 4, uint> mHitsOutsideTickRange;
        ::ll::TypedStorage<4, 4, uint> mRequests;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnkfa962e;
        ::ll::UntypedStorage<4, 4> mUnk84bbfb;
        ::ll::UntypedStorage<4, 4> mUnk507fa8;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientSubChunkCache& operator=(ClientSubChunkCache const&);
        ClientSubChunkCache(ClientSubChunkCache const&);
        ClientSubChunkCache();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        MCNAPI ::Json::Value toJson() const;
#endif
        // NOLINTEND
    };

    struct ServerChunkLoading {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcfd81b;
        ::ll::UntypedStorage<4, 4> mUnk233b11;
        ::ll::UntypedStorage<4, 4> mUnkf2b37c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerChunkLoading& operator=(ServerChunkLoading const&);
        ServerChunkLoading(ServerChunkLoading const&);
        ServerChunkLoading();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        MCNAPI ::Json::Value toJson() const;
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mServerSimDistance;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                          mServerSimDistance;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoading;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingInsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingOutsideTickRange;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingRequestedInsideTickRangeLoadedOutsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingRequestedOutsideTickRangeLoadedInsideTickRange;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading>
        mServerChunkLoadingRequestedInsideTickRangeLoadedOutsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading>
        mServerChunkLoadingRequestedOutsideTickRangeLoadedInsideTickRange;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ClientSubChunkCache> mClientSubChunkCache;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void recordLoadedChunk(::LevelChunk const&);
#else // @header-generator platform
    MCNAPI void recordLoadedChunk(::LevelChunk const& chunk);

#ifdef LL_PLAT_S
    MCNAPI ::Json::Value toJson() const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};
