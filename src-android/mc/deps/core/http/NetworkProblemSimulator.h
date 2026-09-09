#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/HttpProblemSimulatorSettings.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"

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
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                   mTaskGroup;
    ::ll::UntypedStorage<8, 8>                                                mServiceRegistrationToken;
    ::ll::TypedStorage<8, 200, ::Bedrock::Http::HttpProblemSimulatorSettings> mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkProblemSimulator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkProblemSimulator() = default;

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&);

    virtual void initialize();

    virtual void shutdown();
    // NOLINTEND
};

} // namespace Bedrock::Http
