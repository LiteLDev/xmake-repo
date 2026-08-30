#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct StaticProfLabel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mName;
    // NOLINTEND
};

} // namespace Bedrock::Profiler::details
