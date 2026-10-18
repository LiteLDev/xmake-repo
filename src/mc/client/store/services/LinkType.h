#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::layout::model {

#if defined(LL_PLAT_A) // @header-generator platform
enum class LinkType : int {
    Layout      = 0,
    LegacyStore = 1,
    Internal    = 2,
};
#else // @header-generator platform
enum class LinkType : int {};
#endif // @header-generator platform

}
