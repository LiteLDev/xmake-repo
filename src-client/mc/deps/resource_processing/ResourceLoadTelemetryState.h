#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/ResourceIoCacheState.h"
#include "mc/deps/resource_processing/ResourceLoadSession.h"

// auto generated forward declare list
// clang-format off
class IResourceLoadEventing;
class ResourcePackStack;
namespace Bedrock::Resources { struct ResourceLoadCacheState; }
// clang-format on

namespace Bedrock::Resources {

class ResourceLoadTelemetryState {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 704, ::Bedrock::Resources::ResourceLoadSession> mSession;
    ::ll::TypedStorage<1, 1, bool> mHasLoadedWorldThisSession;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastWorldLoadTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mWorldLoadStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLevelGeneratedTime;
    ::ll::TypedStorage<1, 1, bool> mEventFiredForLevel;
    ::ll::TypedStorage<1, 1, bool> mReloadStartedForLevel;
    ::ll::TypedStorage<1, 1, bool> mResourcesReadyForLevel;
    ::ll::TypedStorage<1, 1, bool> mLevelGeneratedForLevel;
    ::ll::TypedStorage<4, 4, uint> mIoSampleFrameCounter;
    ::ll::TypedStorage<4, 4, uint> mMemorySampleFrameCounter;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void beginContentLoadPhase();

    MCNAPI void beginReloadSession();

    MCNAPI void beginWorldLoad(::IResourceLoadEventing&);

    MCNAPI void endContentLoadBeginResourceProcessingPhase();

    MCNAPI void fireFailed(::IResourceLoadEventing&, ::ResourcePackStack const&, ulong, ulong);

    MCNAPI void onLevelGenerated();

    MCNAPI void onResourcesReady(::ResourcePackStack const&);

    MCNAPI void sample();

    MCNAPI void sampleMemory();

    MCNAPI void tryFireSuccess(::IResourceLoadEventing&, ::ResourcePackStack const&, ulong, ulong, bool);

    MCNAPI ~ResourceLoadTelemetryState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void resetPackAssetCounters(::ResourcePackStack const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Resources
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
