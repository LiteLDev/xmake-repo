#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDataComponentBase {};
#else // @header-generator platform
class ActorDataComponentBase {
public:
    T0 mValue;
};
#endif // @header-generator platform
