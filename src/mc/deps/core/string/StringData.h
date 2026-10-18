#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StaticOptimizedStringDetail {

union StringData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>      mField_83207334;
    ::ll::TypedStorage<1, 1, uchar> mData;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnka1f72a;
    ::ll::UntypedStorage<1, 1> mUnk1a1baf;
    ::ll::UntypedStorage<1, 1> mUnkc4d5dd;
#endif // @header-generator platform
    // NOLINTEND
};
} // namespace Bedrock::StaticOptimizedStringDetail
