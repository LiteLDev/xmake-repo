#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::vector<uint>>> mIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlArgs& operator=(ProfilerControlArgs const&);
    ProfilerControlArgs();
};

} // namespace Bedrock::Profiling::Control
