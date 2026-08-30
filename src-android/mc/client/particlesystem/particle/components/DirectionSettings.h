#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct DirectionSettings; }
// clang-format on

namespace ParticleSystem {

struct DirectionSettings {
public:
    // DirectionSettings inner types define
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
};

} // namespace ParticleSystem
