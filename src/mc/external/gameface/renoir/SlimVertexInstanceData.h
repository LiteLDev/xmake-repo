#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SlimVertexInstanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> CBData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SlimVertexInstanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd931ce;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimVertexInstanceData& operator=(SlimVertexInstanceData const&);
    SlimVertexInstanceData(SlimVertexInstanceData const&);
    SlimVertexInstanceData();
};
#else // @header-generator platform
struct SlimVertexInstanceData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
