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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimatedImageData(::AnimatedImageData const&);

    MCNAPI
    AnimatedImageData(::persona::AnimatedTextureType, ::persona::AnimationExpression, ::mce::Image const&, float);

    MCNAPI ::SkinImage const& getSkinImage() const;

    MCNAPI ::AnimatedImageData& operator=(::AnimatedImageData const&);

    MCNAPI void setSkinImage(::SkinImage const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AnimatedImageData const&);

    MCNAPI void* $ctor(::persona::AnimatedTextureType, ::persona::AnimationExpression, ::mce::Image const&, float);
    // NOLINTEND
};
