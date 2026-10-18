#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Intrusive {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class list_base_hook {};
#else // @header-generator platform
class list_base_hook {
public:
    ::Bedrock::Intrusive::list_base_hook<T0>* mNext;
    ::Bedrock::Intrusive::list_base_hook<T0>* mPrev;
};
#endif // @header-generator platform

} // namespace Bedrock::Intrusive
