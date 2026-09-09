#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/Direction.h"
#include "mc/external/gameface/cohtml/Range.h"

namespace cohtml::TextInput {

struct Selection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::cohtml::TextInput::Range>     SelectionRange;
    ::ll::TypedStorage<4, 4, ::cohtml::TextInput::Direction> SelectionDirection;
    // NOLINTEND
};

} // namespace cohtml::TextInput
