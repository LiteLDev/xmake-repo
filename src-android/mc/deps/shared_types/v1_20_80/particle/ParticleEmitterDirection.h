#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/DirectionType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEmitterDirection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::v1_20_80::DirectionType>>                 mDirectionString;
    ::ll::TypedStorage<8, 128, std::optional<std::array<SharedTypes::Legacy::ExpressionNode, 3>>> mDirectionExpr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleEmitterDirection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
