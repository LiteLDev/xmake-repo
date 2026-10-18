#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

class ActorParticleEffect {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>   mParticleEffectName;
    ::ll::TypedStorage<8, 40, ::HashedString>   mLocatorName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>   mParticleEffectName;
    ::ll::TypedStorage<8, 48, ::HashedString>   mLocatorName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mInitializationScripts;
    ::ll::TypedStorage<1, 1, bool>              mBindToActor;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorParticleEffect& operator=(ActorParticleEffect const&);
    ActorParticleEffect(ActorParticleEffect const&);
#else // @header-generator platform
#endif // @header-generator platform
};
