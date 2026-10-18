#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/HttpProblemSimulatorSettings.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class NetworkProblemSimulator : public ::Bedrock::Http::DispatcherProcess {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                   mTaskGroup;
    ::ll::UntypedStorage<8, 8>                                                mServiceRegistrationToken;
    ::ll::TypedStorage<8, 200, ::Bedrock::Http::HttpProblemSimulatorSettings> mSettings;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 336> mUnk939894;
    ::ll::UntypedStorage<8, 8>   mUnk67c27a;
    ::ll::UntypedStorage<8, 64>  mUnkfb80a5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetworkProblemSimulator& operator=(NetworkProblemSimulator const&);
    NetworkProblemSimulator(NetworkProblemSimulator const&);
#endif // @header-generator platform
    NetworkProblemSimulator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkProblemSimulator() = default;
#else // @header-generator platform
    virtual ~NetworkProblemSimulator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> send(::Bedrock::Http::Request&&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize();
#else // @header-generator platform
    virtual void initialize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void shutdown();
#else // @header-generator platform
    virtual void shutdown() /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
