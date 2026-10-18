#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

struct ParticleInitializationData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>   mAnimationControllerName;
    ::ll::TypedStorage<8, 40, ::HashedString>   mEffectName;
    ::ll::TypedStorage<8, 40, ::HashedString>   mLocator;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>   mAnimationControllerName;
    ::ll::TypedStorage<8, 48, ::HashedString>   mEffectName;
    ::ll::TypedStorage<8, 48, ::HashedString>   mLocator;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mInitializationScript;
    ::ll::TypedStorage<1, 1, bool>              mBind;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ParticleInitializationData& operator=(ParticleInitializationData const&);
    ParticleInitializationData();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ParticleInitializationData(::ParticleInitializationData const&);

    MCNAPI ~ParticleInitializationData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ParticleInitializationData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~ParticleInitializationData();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
