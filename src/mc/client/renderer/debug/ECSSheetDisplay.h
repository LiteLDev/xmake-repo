#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
// clang-format on

class ECSSheetDisplay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mBitmap;
    // NOLINTEND
};
#else // @header-generator platform
class ECSSheetDisplay {};
#endif // @header-generator platform
