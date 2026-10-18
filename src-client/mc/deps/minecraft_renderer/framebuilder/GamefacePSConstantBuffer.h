#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct GamefacePSConstantBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::glm::vec<4, float, (glm::qualifier)0>*> data;
    ::ll::TypedStorage<8, 8, ulong>                                    size;
    // NOLINTEND
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
