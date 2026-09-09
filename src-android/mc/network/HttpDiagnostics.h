#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class HttpDiagnostics : public ::Bedrock::Http::DispatcherProcess {
public:
    // prevent constructor by default
    HttpDiagnostics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpDiagnostics();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HttpDiagnostics(std::shared_ptr<Bedrock::Http::DispatcherProcess>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Bedrock::Http::DispatcherProcess>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(::Bedrock::Http::Request&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
