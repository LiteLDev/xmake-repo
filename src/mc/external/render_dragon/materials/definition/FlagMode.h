#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

#if defined(LL_PLAT_A) // @header-generator platform
struct FlagMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mValue;
    // NOLINTEND
};
#else // @header-generator platform
struct FlagMode {};
#endif // @header-generator platform

} // namespace dragon::materials::definition
