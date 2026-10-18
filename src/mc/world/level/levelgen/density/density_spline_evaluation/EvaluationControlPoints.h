#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace DensitySplineEvaluation { struct EvaluationControlPoint; }
// clang-format on

namespace DensitySplineEvaluation {

class EvaluationControlPoints {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // EvaluationControlPoints inner types define
    using OptionalBoundingIndex = ::std::optional<ushort>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 128> mControlPoints;
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::Bedrock::small_vector<::DensitySplineEvaluation::EvaluationControlPoint, 7>>
        mControlPoints;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace DensitySplineEvaluation
