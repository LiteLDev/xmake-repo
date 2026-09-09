#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct Color {
public:
    // Color inner types declare
    // clang-format off
    struct Predefined;
    // clang-format on

    // Color inner types define
    struct Predefined {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mValue;
        // NOLINTEND
    };

    using Value = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mValue;
    // NOLINTEND
};

} // namespace Bedrock::Profiler::details
