#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
struct ColorFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                          mValue;
    ::ll::TypedStorage<8, 64, std::array<ExpressionNode, 4>> mColorExpr;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorFrame& operator=(ColorFrame const&);
    ColorFrame(ColorFrame const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ColorFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                              mValue;
    ::ll::TypedStorage<8, 64, ::std::array<::ExpressionNode, 4>> mColorExpr;
    // NOLINTEND
};
#else // @header-generator platform
struct ColorFrame {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem
