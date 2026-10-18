#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/KeyFrameTransform.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BoneOrientation;
#if defined(LL_PLAT_A) // @header-generator platform
class ExpressionNode;
#else // @header-generator platform
class KeyFrameTransform;
#endif // @header-generator platform
class RenderParams;
struct BoneAnimationChannelPlayer;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BoneAnimationChannel {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::BoneTransformType>             mBoneTransformType;
    ::ll::TypedStorage<8, 24, std::vector<KeyFrameTransform>> mKeyFrames;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::BoneTransformType>                 mBoneTransformType;
    ::ll::TypedStorage<8, 24, ::std::vector<::KeyFrameTransform>> mKeyFrames;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BoneAnimationChannel& operator=(BoneAnimationChannel const&);
    BoneAnimationChannel(BoneAnimationChannel const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneAnimationChannelPlayer*) const;
#else // @header-generator platform
    MCAPI void animate(
        ::RenderParams&               renderParams,
        ::BoneOrientation&            destBoneOrientation,
        float                         scale,
        ::BoneAnimationChannelPlayer* boneAnimationChannelPlayer
    ) const;
#endif // @header-generator platform
    // NOLINTEND
};
