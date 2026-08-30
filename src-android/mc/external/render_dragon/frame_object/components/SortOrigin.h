#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

struct SortOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    SortOrigin& operator=(SortOrigin const&);
    SortOrigin();
};

} // namespace dragon::frameobject::components
