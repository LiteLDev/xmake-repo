#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct StaticProfLabel {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> mName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka09dc8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StaticProfLabel& operator=(StaticProfLabel const&);
    StaticProfLabel(StaticProfLabel const&);
    StaticProfLabel();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiler::details
