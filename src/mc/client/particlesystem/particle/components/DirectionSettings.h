#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct DirectionSettings; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace ParticleSystem {

struct DirectionSettings {
public:
    // DirectionSettings inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Mode : int {
        UseVelocity = 0,
        Custom      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 56>     mMode;
    ::ll::UntypedStorage<8, 0>      mCustomDirectionExpr;
    ::ll::TypedStorage<4, 4, float> mMinSpeedThresholdSqr;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Mode : int {
        UseVelocity = 0,
        Custom      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleSystem::DirectionSettings::Mode> mMode;
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]>                      mCustomDirectionExpr;
    ::ll::TypedStorage<4, 4, float>                                     mMinSpeedThresholdSqr;
    // NOLINTEND
#else // @header-generator platform
    enum class Mode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ParticleSystem
