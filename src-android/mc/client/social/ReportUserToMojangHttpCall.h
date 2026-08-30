#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Http { struct Url; }
namespace Json { class Value; }
namespace Social { struct AuthToken; }
namespace Social { struct ReportUserToMojangHttpResponse; }
// clang-format on

namespace Social {

class ReportUserToMojangHttpCall {
public:
    // ReportUserToMojangHttpCall inner types define
    using AuthUrlTupleResult = ::Bedrock::Threading::Async<std::tuple<Social::AuthToken, Bedrock::Http::Url>>;

    using AuthUrlTuple = std::tuple<Social::AuthToken, Bedrock::Http::Url>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mReportData;
    // NOLINTEND

public:
    // prevent constructor by default
    ReportUserToMojangHttpCall();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReportUserToMojangHttpCall();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ReportUserToMojangHttpCall(::Json::Value const&);

    MCNAPI ::Bedrock::Threading::Async<Social::ReportUserToMojangHttpResponse> send(::TaskGroup&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
