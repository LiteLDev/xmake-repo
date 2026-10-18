#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

struct LevelChunkPhase1Deleter {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::LevelChunk*);
    // NOLINTEND
};
#else // @header-generator platform
struct LevelChunkPhase1Deleter {};
#endif // @header-generator platform
