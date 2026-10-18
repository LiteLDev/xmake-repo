#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace MSGraph::Models { struct GraphError; }
namespace MSGraph::Models { struct UploadSession; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace MSGraph::Requests {

#if defined(LL_PLAT_A) // @header-generator platform
class CreateUploadSession : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                  mGetAuthToken;
    ::ll::TypedStorage<8, 24, std::string const> mDriveItemId;
    ::ll::UntypedStorage<8, 168>                 mUploadSession;
    ::ll::UntypedStorage<8, 48>                  mCallback;
    ::ll::UntypedStorage<4, 16>                  mStatus;
    // NOLINTEND
};
#else // @header-generator platform
class CreateUploadSession {};
#endif // @header-generator platform

} // namespace MSGraph::Requests
