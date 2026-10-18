#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/profiler/Color.h"
#include "mc/deps/profiler/CounterDisplayFormat.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Profiler::details {

#if defined(LL_PLAT_A) // @header-generator platform
struct CounterConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiler::details::Color>   color;
    ::ll::TypedStorage<1, 1, bool>                                  stepwise;
    ::ll::TypedStorage<1, 1, bool>                                  fill;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterDisplayFormat> format;
    // NOLINTEND
};
#else // @header-generator platform
struct CounterConfig {};
#endif // @header-generator platform

} // namespace Bedrock::Profiler::details
