#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace MSGraph::Requests {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class DeleteUploadSession {};
#endif // @header-generator platform

} // namespace MSGraph::Requests
