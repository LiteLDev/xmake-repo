#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct ObjectID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValid;
    ::ll::TypedStorage<4, 4, int>  mID;
    // NOLINTEND
};

} // namespace glTF
