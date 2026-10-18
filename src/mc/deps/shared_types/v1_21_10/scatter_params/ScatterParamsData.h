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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>                   mIterations;
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_21_10::ScatterChanceData>> mScatterChance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder>       mCoordinateEvalOrder;
    ::ll::TypedStorage<8, 152, ::SharedTypes::v1_21_10::CoordinateRangeData>           mX;
    ::ll::TypedStorage<8, 152, ::SharedTypes::v1_21_10::CoordinateRangeData>           mY;
    ::ll::TypedStorage<8, 152, ::SharedTypes::v1_21_10::CoordinateRangeData>           mZ;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                       mIterations;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_21_10::ScatterChanceData>> mScatterChance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder>           mCoordinateEvalOrder;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_10::CoordinateRangeData>               mX;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_10::CoordinateRangeData>               mY;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_10::CoordinateRangeData>               mZ;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScatterParamsData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData const&);
#else // @header-generator platform
    MCAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData&&);
#else // @header-generator platform
    MCAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData const&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCAPI ~ScatterParamsData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
