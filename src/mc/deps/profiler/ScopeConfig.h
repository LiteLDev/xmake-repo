#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/Color.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profiler::details {

struct ScopeConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiler::details::Color> color;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk3ab78a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScopeConfig& operator=(ScopeConfig const&);
    ScopeConfig(ScopeConfig const&);
    ScopeConfig();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiler::details
