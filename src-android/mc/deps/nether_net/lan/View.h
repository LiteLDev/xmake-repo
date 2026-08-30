#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct View {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void const* const> mData;
    ::ll::TypedStorage<8, 8, ulong const>       mSize;
    // NOLINTEND
};

} // namespace NetherNet
