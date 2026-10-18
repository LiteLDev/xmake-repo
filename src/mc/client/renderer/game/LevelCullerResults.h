#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SubChunkPos;
struct OccluderFace;
// clang-format on

struct LevelCullerResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<const SubChunkPos>>  mVisibleSubchunks;
    ::ll::TypedStorage<8, 16, ::gsl::span<const OccluderFace>> mOccluderFaces;
    // NOLINTEND
};
#else // @header-generator platform
struct LevelCullerResults {};
#endif // @header-generator platform
