#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"

namespace MSGraph::Requests {

class DeleteUploadSession : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>            mGetAuthToken;
    ::ll::UntypedStorage<8, 48>            mCallback;
    ::ll::TypedStorage<8, 24, std::string> mUrl;
    ::ll::TypedStorage<4, 4, uint>         mStatus;
    // NOLINTEND
};

} // namespace MSGraph::Requests
