#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {

class ComposedAssertMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsComposed;
    ::ll::TypedStorage<8, 24, std::string> mBuffer;
    // NOLINTEND
};

} // namespace DebugUtils
