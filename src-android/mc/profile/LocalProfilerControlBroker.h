#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/profile/ProfilerControlRequest.h"
#include "mc/profile/ProfilerControlResult.h"

class LocalProfilerControlBroker {
public:
    // LocalProfilerControlBroker inner types define
    enum class ResultResponse : int {
        SkipResult   = 0,
        RemoveResult = 1,
    };

    using ProfilerControlRequest = ::Bedrock::Profiling::Control::ProfilerControlRequest;

    using ProfilerControlResult = ::Bedrock::Profiling::Control::ProfilerControlResult;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                                       mRequestMutex;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profiling::Control::ProfilerControlRequest>> mPendingRequests;
    ::ll::TypedStorage<4, 40, std::mutex>                                                       mResultMutex;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profiling::Control::ProfilerControlResult>>  mPendingResults;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void enqueueRequest(::Bedrock::Profiling::Control::ProfilerControlRequest);

    MCNAPI void enqueueResult(::Bedrock::Profiling::Control::ProfilerControlResult);

    MCNAPI void forEachPendingResult(
        std::function<
            const LocalProfilerControlBroker::ResultResponse(const Bedrock::Profiling::Control::ProfilerControlResult&)>
    );

    MCNAPI std::vector<Bedrock::Profiling::Control::ProfilerControlRequest> takePendingRequests();

    MCNAPI ~LocalProfilerControlBroker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
