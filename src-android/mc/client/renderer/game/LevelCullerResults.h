#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
