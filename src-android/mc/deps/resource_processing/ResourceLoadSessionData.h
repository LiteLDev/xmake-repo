#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/ResourceIoCacheState.h"
#include "mc/deps/resource_processing/ResourceLoadCacheState.h"
#include "mc/deps/resource_processing/ResourceLoadIoData.h"
#include "mc/deps/resource_processing/ResourceLoadMemoryStats.h"
#include "mc/deps/resource_processing/ResourceLoadPackEntry.h"
#include "mc/deps/resource_processing/ResourceLoadResult.h"

namespace Bedrock::Resources {

struct ResourceLoadSessionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                            loadSessionId;
    ::ll::TypedStorage<8, 24, std::string>                                            packStackHash;
    ::ll::TypedStorage<1, 1, ::Bedrock::Resources::ResourceLoadResult>                loadResult;
    ::ll::TypedStorage<1, 1, ::Bedrock::Resources::ResourceIoCacheState>              ioCacheState;
    ::ll::TypedStorage<8, 8, double>                                                  mTotalLoadTimeInMs;
    ::ll::TypedStorage<4, 4, uint>                                                    mNonVanillaPackCount;
    ::ll::TypedStorage<8, 24, std::array<double, 3>>                                  mPhaseMs;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Resources::ResourceLoadPackEntry>> mPacks;
    ::ll::TypedStorage<8, 24, ::Bedrock::Resources::ResourceLoadCacheState>           mCacheState;
    ::ll::TypedStorage<8, 80, ::Bedrock::Resources::ResourceLoadIoData>               mIo;
    ::ll::TypedStorage<8, 168, ::Bedrock::Resources::ResourceLoadMemoryStats>         mMemory;
    // NOLINTEND
};

} // namespace Bedrock::Resources
