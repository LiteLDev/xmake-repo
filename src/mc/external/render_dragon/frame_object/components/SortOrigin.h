#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct SortOrigin {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
