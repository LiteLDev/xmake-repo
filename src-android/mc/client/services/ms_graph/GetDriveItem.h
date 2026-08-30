#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

namespace MSGraph::Requests {

class GetDriveItem : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>    mGetAuthToken;
    ::ll::UntypedStorage<8, 32>    mDriveItemDestination;
    ::ll::UntypedStorage<8, 48>    mCallback;
    ::ll::UntypedStorage<8, 208>   mDriveItem;
    ::ll::TypedStorage<1, 1, bool> mUsePathOverId;
    ::ll::UntypedStorage<4, 12>    mStatus;
    // NOLINTEND
};

} // namespace MSGraph::Requests
