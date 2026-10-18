#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/CopperBehavior.h"
#endif // @header-generator platform

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class CopperBlock {};
#else // @header-generator platform
class CopperBlock : public T0 {
public:
    CopperBehavior mCopperBehavior;
};
#endif // @header-generator platform
