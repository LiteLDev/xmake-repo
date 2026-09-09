#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorExpr.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorGradient.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct TintingComponentColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_80::ColorGradient>> mInterpolatedColor;
    ::ll::TypedStorage<8, 48, std::optional<SharedTypes::Legacy::ExpressionNode>>  mInterpolantExpr;
    ::ll::TypedStorage<8, 168, std::optional<SharedTypes::v1_20_80::ColorExpr>>    mColor;
    // NOLINTEND

public:
    // prevent constructor by default
    TintingComponentColor(TintingComponentColor const&);
    TintingComponentColor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TintingComponentColor(::SharedTypes::v1_20_80::TintingComponentColor&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::TintingComponentColor&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
