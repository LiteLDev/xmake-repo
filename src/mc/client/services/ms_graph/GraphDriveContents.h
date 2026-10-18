#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace MSGraph::Requests {

#if defined(LL_PLAT_A) // @header-generator platform
class GraphDriveContents : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mAbsoluteUrl;
    ::ll::UntypedStorage<8, 48>            mGetAuthToken;
    ::ll::UntypedStorage<8, 48>            mCallback;
    ::ll::UntypedStorage<8, 160>           mDriveItemCollection;
    // NOLINTEND
};
#else // @header-generator platform
class GraphDriveContents {};
#endif // @header-generator platform

} // namespace MSGraph::Requests
