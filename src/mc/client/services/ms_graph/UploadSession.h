#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

#if defined(LL_PLAT_A) // @header-generator platform
struct UploadSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              uploadUrl;
    ::ll::TypedStorage<8, 24, std::string>              expirationDateTime;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> nextExpectedRanges;
    // NOLINTEND
};
#else // @header-generator platform
struct UploadSession {};
#endif // @header-generator platform

} // namespace MSGraph::Models
