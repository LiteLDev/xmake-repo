#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/Method.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/http/StatusCode.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

namespace persona {

struct RequestConstructionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     mURI;
    ::ll::TypedStorage<8, 24, std::string>                     mURIParams;
    ::ll::UntypedStorage<1, 12>                                mWebMethod;
    ::ll::TypedStorage<8, 24, std::string>                     mPostBody;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::RequestPriority> mPriority;
    ::ll::UntypedStorage<8, 48>                                mFailedCallback;
    ::ll::UntypedStorage<8, 48>                                mCompleteCallback;
    ::ll::UntypedStorage<8, 48>                                mUpdateConstructionDataCallback;
    // NOLINTEND
};

} // namespace persona
