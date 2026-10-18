#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct IndexBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Id;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct IndexBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkca5503;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferObject& operator=(IndexBufferObject const&);
    IndexBufferObject(IndexBufferObject const&);
    IndexBufferObject();
};
#else // @header-generator platform
struct IndexBufferObject {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
