#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct DynamicProfLabel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      mXValueCache;
    ::ll::TypedStorage<8, 16, std::string_view> mName;
    ::ll::TypedStorage<1, 1, bool>              mNullTerminated;
    // NOLINTEND
};

} // namespace Bedrock::Profiler::details
