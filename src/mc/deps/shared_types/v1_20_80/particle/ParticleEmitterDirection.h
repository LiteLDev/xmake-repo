#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/DirectionType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_20_80 {

struct ParticleEmitterDirection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::v1_20_80::DirectionType>>                 mDirectionString;
    ::ll::TypedStorage<8, 128, std::optional<std::array<SharedTypes::Legacy::ExpressionNode, 3>>> mDirectionExpr;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_20_80::DirectionType>> mDirectionString;
    ::ll::TypedStorage<8, 152, ::std::optional<::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>> mDirectionExpr;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ParticleEmitterDirection();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ParticleEmitterDirection();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ParticleEmitterDirection(::std::array<::SharedTypes::Legacy::ExpressionNode, 3> exprArray);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::array<::SharedTypes::Legacy::ExpressionNode, 3> exprArray);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
