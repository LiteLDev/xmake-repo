#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlArgs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::vector<uint>>> mIds;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk2da4fe;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlArgs& operator=(ProfilerControlArgs const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ProfilerControlArgs(ProfilerControlArgs const&);
#endif // @header-generator platform
    ProfilerControlArgs();
};

} // namespace Bedrock::Profiling::Control
