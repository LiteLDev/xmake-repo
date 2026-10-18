#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PackedPointer {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, bool T1, int T2>
#else // @header-generator platform
template <typename T0, int T1, int T2>
#endif // @header-generator platform
class Packed {};

} // namespace Bedrock::PackedPointer
