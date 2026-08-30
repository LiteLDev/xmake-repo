#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

class PanicAndUnwind {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    PanicAndUnwind();
};

} // namespace dragon
