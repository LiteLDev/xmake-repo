#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkLoadedRequest.h"
#include "mc/world/level/chunk/ChunkRequestListType.h"

struct DeserializedChunkLoadedRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 112, ::ChunkLoadedRequest> mChunkLoadedRequest;
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ChunkLoadedRequest> mChunkLoadedRequest;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ChunkRequestListType> mChunkRequestListType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DeserializedChunkLoadedRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeserializedChunkLoadedRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
