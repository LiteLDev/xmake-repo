#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/ThreadConfiguration.h"
#include "mc/deps/nether_net/LogSeverity.h"

namespace NetherNet {

struct GlobalConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, unsigned long long>       mApplicationUniqueID;
    ::ll::TypedStorage<2, 2, ushort>                   mBroadcastLANPort;
    ::ll::TypedStorage<4, 4, uint>                     mBroadcastPollIntervalMS;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitSignaling;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitNetwork;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitWorker;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitLAN;
    ::ll::TypedStorage<4, 4, ::NetherNet::LogSeverity> mDefaultLogSeverity;
    // NOLINTEND
};

} // namespace NetherNet
