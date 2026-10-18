#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct VertexBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Id;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct VertexBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2a4f49;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexBufferObject& operator=(VertexBufferObject const&);
    VertexBufferObject(VertexBufferObject const&);
    VertexBufferObject();
};
#else // @header-generator platform
struct VertexBufferObject {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
