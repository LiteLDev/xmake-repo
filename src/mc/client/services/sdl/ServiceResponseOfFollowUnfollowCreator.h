#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfFollowUnfollowCreator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mCreatorListVersion;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfFollowUnfollowCreator {};
#endif // @header-generator platform

} // namespace SDL
