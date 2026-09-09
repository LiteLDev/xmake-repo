#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting { class PointLightShadowProbe; }
namespace PointLighting { struct ProbeBatchEntry; }
// clang-format on

namespace PointLighting {

class PointLightShadowBatchProcessor {
public:
    // PointLightShadowBatchProcessor inner types define
    using ProbeMap = std::unordered_map<BlockPos, PointLighting::PointLightShadowProbe>;

    using IsRenderedPredicate = std::function<bool(const PointLighting::PointLightShadowProbe&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>        mPendingProbes;
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>> mPendingSet;
    // NOLINTEND
};

} // namespace PointLighting
