#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DensitySplineEvaluation {

struct EvaluationControlPoint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                       mInput;
    ::ll::TypedStorage<4, 8, std::variant<float, ushort>> mValue;
    ::ll::TypedStorage<4, 4, float>                       mDerivative;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                         mInput;
    ::ll::TypedStorage<4, 8, ::std::variant<float, ushort>> mValue;
    ::ll::TypedStorage<4, 4, float>                         mDerivative;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace DensitySplineEvaluation
