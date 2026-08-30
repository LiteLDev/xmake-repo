#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct ResourceLoadIoPhaseStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>  dataReadInB;
    ::ll::TypedStorage<8, 8, double> throughputInMBPerS;
    // NOLINTEND
};

} // namespace Bedrock::Resources
