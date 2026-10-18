#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct ViewSetId {
public:
    // ViewSetId inner types define
    using Id = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mValue;
    // NOLINTEND
};
#else // @header-generator platform
struct ViewSetId {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
