#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/SkinImage.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/AnimationExpression.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

class AnimatedImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::persona::AnimatedTextureType> mType;
    ::ll::TypedStorage<4, 4, ::persona::AnimationExpression> mAnimationExpression;
    ::ll::TypedStorage<8, 48, ::SkinImage>                   mImage;
    ::ll::TypedStorage<4, 4, float>                          mFrames;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AnimatedImageData(AnimatedImageData const&);
    AnimatedImageData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AnimatedImageData();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AnimatedImageData(::AnimatedImageData const&);
#else // @header-generator platform
    MCAPI AnimatedImageData(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        ::mce::Image const&            animatedImage,
        float                          frames
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    AnimatedImageData(::persona::AnimatedTextureType, ::persona::AnimationExpression, ::mce::Image const&, float);

    MCNAPI ::SkinImage const& getSkinImage() const;

    MCNAPI ::AnimatedImageData& operator=(::AnimatedImageData const&);

    MCNAPI void setSkinImage(::SkinImage const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::AnimatedImageData& operator=(::AnimatedImageData const& rhs);

    MCAPI void setSkinImage(::SkinImage const& image);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AnimatedImageData const&);

    MCNAPI void* $ctor(::persona::AnimatedTextureType, ::persona::AnimationExpression, ::mce::Image const&, float);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        ::mce::Image const&            animatedImage,
        float                          frames
    );
#endif // @header-generator platform
    // NOLINTEND
};
