#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace splitscreen {

struct User {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mType;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::TypedStorage<4, 4, int>          mSplitscreenID;
    ::ll::UntypedStorage<8, 16>            mAppearanceData;
    // NOLINTEND
};

} // namespace splitscreen
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
