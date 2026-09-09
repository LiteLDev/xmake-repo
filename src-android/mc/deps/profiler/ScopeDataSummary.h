#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profile::Whisker::Diagnostics {

struct ScopeDataSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLabel;
    ::ll::TypedStorage<8, 24, std::string> mIndentation;
    ::ll::TypedStorage<8, 8, ulong>        mTotalHighCostNS;
    ::ll::TypedStorage<8, 8, ulong>        mTotalMidCostNS;
    ::ll::TypedStorage<8, 8, ulong>        mTotalLowCostNS;
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker::Diagnostics
