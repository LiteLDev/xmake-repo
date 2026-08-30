#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/Color.h"
#include "mc/deps/profiler/CounterDisplayFormat.h"

namespace Bedrock::Profiler::details {

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

} // namespace Bedrock::Profiler::details
