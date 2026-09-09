#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

namespace PointLighting::UpdatePhases {

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

} // namespace PointLighting::UpdatePhases
