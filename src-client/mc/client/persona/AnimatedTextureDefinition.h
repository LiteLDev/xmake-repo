#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/AnimationExpression.h"

struct AnimatedTextureDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::persona::AnimatedTextureType> mType;
    ::ll::TypedStorage<4, 4, ::persona::AnimationExpression> mAnimationExpression;
    ::ll::TypedStorage<8, 24, std::string>                   mGeoID;
    ::ll::TypedStorage<8, 24, std::string>                   mTextureID;
    ::ll::TypedStorage<4, 4, uint>                           mTextureWidth;
    ::ll::TypedStorage<4, 4, uint>                           mTextureHeight;
    ::ll::TypedStorage<4, 4, float>                          mFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedTextureDefinition& operator=(AnimatedTextureDefinition const&);
    AnimatedTextureDefinition(AnimatedTextureDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimatedTextureDefinition(::persona::AnimatedTextureType, std::string const&, std::string const&);

    MCNAPI float getFrames() const;

    MCNAPI void setFrames(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::AnimatedTextureType, std::string const&, std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
