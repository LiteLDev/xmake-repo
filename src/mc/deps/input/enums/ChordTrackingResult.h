#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ChordTrackingResult : uint {
    NotRelevant     = 0,
    IncompleteChord = 1,
    CompleteChord   = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ChordTrackingResult : uint {
    NotRelevant     = 0,
    IncompleteChord = 1,
    CompleteChord   = 2,
};
#else // @header-generator platform
enum class ChordTrackingResult : uint {};
#endif // @header-generator platform
#endif // @header-generator platform
