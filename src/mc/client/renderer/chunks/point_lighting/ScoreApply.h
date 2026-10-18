#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PointLighting::UpdatePhases {

#if defined(LL_PLAT_A) // @header-generator platform
class ScoreApply {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, float>> mCurrentScores;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreApply& operator=(ScoreApply const&);
    ScoreApply(ScoreApply const&);
    ScoreApply();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ScoreApply {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, float>> mCurrentScores;
    // NOLINTEND
};
#else // @header-generator platform
class ScoreApply {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PointLighting::UpdatePhases
