#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/AsyncStatus.h"
#include "mc/network/AsyncJoinAllow.h"
#include "mc/network/AsyncJoinDeny.h"

class AsyncVerdictPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mPromise;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::AsyncStatus getStatus();

    MCNAPI void setPromise(std::variant<std::monostate, AsyncJoinAllow, AsyncJoinDeny>);
    // NOLINTEND
};
