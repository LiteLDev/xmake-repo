#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ClientBrush {

class BrushShapeWeightedSphere {
public:
    // BrushShapeWeightedSphere inner types declare
    // clang-format off
    struct Calculator;
    struct ConstantCalculator;
    // clang-format on

    // BrushShapeWeightedSphere inner types define
    enum class WeightingType : int {};

    struct Calculator {};

    struct ConstantCalculator {};
};

} // namespace Editor::ClientBrush
#endif // @header-generator platform
