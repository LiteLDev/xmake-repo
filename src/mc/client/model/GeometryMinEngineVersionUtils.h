#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MinEngineVersion;
// clang-format on

class GeometryMinEngineVersionUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isMinEngineVersionGreater(::MinEngineVersion const&, ::MinEngineVersion const&);
    // NOLINTEND
};
#else // @header-generator platform
class GeometryMinEngineVersionUtils {};
#endif // @header-generator platform
