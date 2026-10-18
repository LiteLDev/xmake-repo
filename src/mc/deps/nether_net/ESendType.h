#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum ESendType : uint {
    eSendTypeUnreliable = 0,
    eSendTypeReliable   = 1,
#else // @header-generator platform
enum class ESendType : int {
    ESendTypeUnreliable = 0,
    ESendTypeReliable   = 1,
#endif // @header-generator platform
};

}
