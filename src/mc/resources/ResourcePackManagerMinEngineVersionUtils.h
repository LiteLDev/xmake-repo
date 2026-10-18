#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
// clang-format on

class ResourcePackManagerMinEngineVersionUtils {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersion getSemVersion(::MinEngineVersion const&);
#else // @header-generator platform
    MCNAPI static ::SemVersion getSemVersion(::MinEngineVersion const& minEngineVersion);
#endif // @header-generator platform
    // NOLINTEND
};
