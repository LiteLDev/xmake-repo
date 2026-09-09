#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"

namespace MSGraph::Requests {

class DeleteDriveItem : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetAuthToken;
    ::ll::UntypedStorage<8, 32> mDriveItemId;
    ::ll::UntypedStorage<8, 48> mCallback;
    ::ll::UntypedStorage<4, 16> mStatus;
    // NOLINTEND
};

} // namespace MSGraph::Requests
