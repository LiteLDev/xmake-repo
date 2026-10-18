#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/profile/ProfilerControlRequest.h"
#include "mc/profile/ProfilerControlResult.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling::Control { struct ProfilerControlRequest; }
namespace Bedrock::Profiling::Control { struct ProfilerControlResult; }
// clang-format on
#endif // @header-generator platform

class LocalProfilerControlBroker {
public:
    // LocalProfilerControlBroker inner types define
    enum class ResultResponse : int {
        SkipResult   = 0,
        RemoveResult = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ProfilerControlRequest = ::Bedrock::Profiling::Control::ProfilerControlRequest;

    using ProfilerControlResult = ::Bedrock::Profiling::Control::ProfilerControlResult;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                                                       mRequestMutex;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profiling::Control::ProfilerControlRequest>> mPendingRequests;
    ::ll::TypedStorage<4, 40, std::mutex>                                                       mResultMutex;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profiling::Control::ProfilerControlResult>>  mPendingResults;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnkc64841;
    ::ll::UntypedStorage<8, 24> mUnk26bc3f;
    ::ll::UntypedStorage<8, 80> mUnkd1b2ba;
    ::ll::UntypedStorage<8, 24> mUnk954e2a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LocalProfilerControlBroker& operator=(LocalProfilerControlBroker const&);
    LocalProfilerControlBroker(LocalProfilerControlBroker const&);
    LocalProfilerControlBroker();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enqueueRequest(::Bedrock::Profiling::Control::ProfilerControlRequest);
#else // @header-generator platform
    MCNAPI void enqueueRequest(::Bedrock::Profiling::Control::ProfilerControlRequest request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enqueueResult(::Bedrock::Profiling::Control::ProfilerControlResult);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void enqueueResult(::Bedrock::Profiling::Control::ProfilerControlResult result);
#endif
#endif // @header-generator platform

    MCNAPI void forEachPendingResult(
#if defined(LL_PLAT_A) // @header-generator platform
        std::function<
            const LocalProfilerControlBroker::ResultResponse(const Bedrock::Profiling::Control::ProfilerControlResult&)>
#else // @header-generator platform
        ::std::function<::LocalProfilerControlBroker::ResultResponse const(
            ::Bedrock::Profiling::Control::ProfilerControlResult const&
        )> callback
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI std::vector<Bedrock::Profiling::Control::ProfilerControlRequest> takePendingRequests();

    MCNAPI ~LocalProfilerControlBroker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
