#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

struct Range {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Start;
    ::ll::TypedStorage<4, 4, uint> End;
    // NOLINTEND
};

} // namespace cohtml::TextInput
