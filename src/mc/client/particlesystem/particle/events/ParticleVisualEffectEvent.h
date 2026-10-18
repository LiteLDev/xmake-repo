#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleVisualEffectEvent; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace ParticleSystem {

class ParticleVisualEffectEvent {
public:
    // ParticleVisualEffectEvent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
    ::ll::TypedStorage<4, 4, ::ParticleSystem::ParticleVisualEffectEvent::ParticleEffectType> mParticleEffectType;
    ::ll::TypedStorage<8, 40, ::HashedString>                                                 mEffect;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                               mEffectExpression;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleVisualEffectEvent& operator=(ParticleVisualEffectEvent const&);
    ParticleVisualEffectEvent(ParticleVisualEffectEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleVisualEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<4, 4, ::ParticleSystem::ParticleVisualEffectEvent::ParticleEffectType> mParticleEffectType;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                 mEffect;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                               mEffectExpression;
    // NOLINTEND
#else // @header-generator platform
    enum class ParticleEffectType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ParticleSystem
