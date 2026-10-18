#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

struct LevelChunkFinalDeleter {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::LevelChunk*);
    // NOLINTEND
};
#else // @header-generator platform
struct LevelChunkFinalDeleter {};
#endif // @header-generator platform
