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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_80::ColorGradient>> mInterpolatedColor;
    ::ll::TypedStorage<8, 48, std::optional<SharedTypes::Legacy::ExpressionNode>>  mInterpolantExpr;
    ::ll::TypedStorage<8, 168, std::optional<SharedTypes::v1_20_80::ColorExpr>>    mColor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_20_80::ColorGradient>> mInterpolatedColor;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>>  mInterpolantExpr;
    ::ll::TypedStorage<8, 200, ::std::optional<::SharedTypes::v1_20_80::ColorExpr>>    mColor;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    TintingComponentColor(TintingComponentColor const&);
    TintingComponentColor();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TintingComponentColor& operator=(TintingComponentColor const&);
    TintingComponentColor();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TintingComponentColor(::SharedTypes::v1_20_80::TintingComponentColor&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI TintingComponentColor(::SharedTypes::v1_20_80::TintingComponentColor const&);
#endif
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
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::TintingComponentColor&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::TintingComponentColor const&);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
