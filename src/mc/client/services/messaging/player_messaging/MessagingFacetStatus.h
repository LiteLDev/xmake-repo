#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MessagingFacetStatus : uchar {
    Loading        = 0,
    ImageRetrieval = 1,
    Loaded         = 2,
};
#else // @header-generator platform
enum class MessagingFacetStatus : uchar {};
#endif // @header-generator platform

}
