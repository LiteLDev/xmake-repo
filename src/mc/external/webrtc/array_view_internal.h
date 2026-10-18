#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::array_view_internal {
// inner types
enum : int64 {
    KArrayViewVarSize = -4711,
};

} // namespace webrtc::array_view_internal
#endif // @header-generator platform
