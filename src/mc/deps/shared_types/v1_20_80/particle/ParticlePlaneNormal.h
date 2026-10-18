#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/PlaneNormalType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_20_80 {

struct ParticlePlaneNormal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::v1_20_80::PlaneNormalType>> mNormalString;
    ::ll::TypedStorage<8, 120, std::array<SharedTypes::Legacy::ExpressionNode, 3>>  mNormalExpr;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_20_80::PlaneNormalType>> mNormalString;
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>  mNormalExpr;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
