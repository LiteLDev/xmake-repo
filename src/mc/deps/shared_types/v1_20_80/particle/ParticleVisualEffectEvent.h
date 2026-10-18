#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_20_80 {

struct ParticleVisualEffectEvent {
public:
    // ParticleVisualEffectEvent inner types define
    enum class ParticleEffectType : int {
        None                 = 0,
        Particle             = 1,
        ParticleWithVelocity = 2,
        Emitter              = 3,
        EmitterBound         = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                                                        mEffectName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                                                        mEffectName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_20_80::ParticleVisualEffectEvent::ParticleEffectType> mEffectType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>                                 mEffectExpression;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                                 mEffectExpression;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ParticleVisualEffectEvent();
#else // @header-generator platform
    MCAPI ~ParticleVisualEffectEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
