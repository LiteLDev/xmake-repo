#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/brstd/future.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class TaskResult;
namespace DedicatedServerInitialization { struct ClassroomModeListenerDep; }
namespace DedicatedServerInitialization { struct NetworkSystemDep; }
namespace DedicatedServerInitialization { struct ServerInstanceDep; }
// clang-format on
#endif // @header-generator platform

namespace DedicatedServerInitialization {

class IDedicatedServerInitializer {
public:
    // IDedicatedServerInitializer inner types declare
    // clang-format off
    struct ServerInitTuple;
    // clang-format on

    // IDedicatedServerInitializer inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    struct ServerInitTuple {};
#else // @header-generator platform
    struct ServerInitTuple {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk8d397d;
        ::ll::UntypedStorage<8, 16> mUnkf63253;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerInitTuple& operator=(ServerInitTuple const&);
        ServerInitTuple(ServerInitTuple const&);
        ServerInitTuple();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDedicatedServerInitializer() = default;

    virtual ::DedicatedServerInitialization::IDedicatedServerInitializer::ServerInitTuple
    initializeServer(::TaskGroup& taskGroup) = 0;

    virtual ::Bedrock::Threading::Async<::std::error_code>
    signalingServiceSignIn(::DedicatedServerInitialization::NetworkSystemDep& system) = 0;

    virtual ::brstd::future<bool> initializeMultiplayerKeys() = 0;

    virtual ::std::unique_ptr<::DedicatedServerInitialization::ClassroomModeListenerDep>
    setupPostInitLevel(::DedicatedServerInitialization::ServerInstanceDep& server) = 0;

    virtual ::TaskResult requeueAfter(::std::chrono::milliseconds time) = 0;
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace DedicatedServerInitialization
#endif // @header-generator platform
