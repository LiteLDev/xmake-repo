#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace MSGraph::Requests {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class DeleteDriveItem {};
#endif // @header-generator platform

} // namespace MSGraph::Requests
