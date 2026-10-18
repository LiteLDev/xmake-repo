#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#endif // @header-generator platform

namespace Bedrock {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class Owner {};
#else // @header-generator platform
class Owner : public Bedrock::EnableNonOwnerReferences {
public:
    T0 mValue;
};
#endif // @header-generator platform

} // namespace Bedrock
