#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfInventoryVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mVersion;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfInventoryVersion {};
#endif // @header-generator platform

} // namespace SDL
