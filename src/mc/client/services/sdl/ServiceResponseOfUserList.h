#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfUserList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mETag;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfUserList {};
#endif // @header-generator platform

} // namespace SDL
