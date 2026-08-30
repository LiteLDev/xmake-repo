#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ReplacementError.h"

namespace Util {

struct ReplacementResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Util::ReplacementError> error;
    ::ll::TypedStorage<4, 4, int>                      containerBounds;
    ::ll::TypedStorage<4, 4, int>                      numSlotsReplaced;
    ::ll::TypedStorage<4, 4, int>                      numItemsDropped;
    // NOLINTEND
};

} // namespace Util
