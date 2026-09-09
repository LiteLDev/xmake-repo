#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateRangeData.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/ScatterChanceData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct ScatterParamsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>                   mIterations;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_21_10::ScatterChanceData>> mScatterChance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder>       mCoordinateEvalOrder;
    ::ll::TypedStorage<8, 152, ::SharedTypes::v1_21_10::CoordinateRangeData>           mX;
    ::ll::TypedStorage<8, 152, ::SharedTypes::v1_21_10::CoordinateRangeData>           mY;
    ::ll::TypedStorage<8, 152, ::SharedTypes::v1_21_10::CoordinateRangeData>           mZ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCNAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCNAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCNAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
