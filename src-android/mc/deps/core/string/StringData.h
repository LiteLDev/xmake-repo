#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StaticOptimizedStringDetail {

union StringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>      mField_83207334;
    ::ll::TypedStorage<1, 1, uchar> mData;
    // NOLINTEND
};
} // namespace Bedrock::StaticOptimizedStringDetail
