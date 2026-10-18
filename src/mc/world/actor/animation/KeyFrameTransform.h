#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/KeyFrameLerpMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/KeyFrameTransformData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BoneOrientation;
#if defined(LL_PLAT_A) // @header-generator platform
class ExpressionNode;
#else // @header-generator platform
class KeyFrameTransformData;
#endif // @header-generator platform
class RenderParams;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class KeyFrameTransform {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<KeyFrameTransformData>> mPrePost;
    ::ll::TypedStorage<8, 16, ::KeyFrameLerpMode>                 mLerpMode;
    ::ll::TypedStorage<4, 4, float>                               mKeyFrameTimeStamp;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::KeyFrameTransformData>> mPrePost;
    ::ll::TypedStorage<8, 16, ::KeyFrameLerpMode>                     mLerpMode;
    ::ll::TypedStorage<4, 4, float>                                   mKeyFrameTimeStamp;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    KeyFrameTransform& operator=(KeyFrameTransform const&);
    KeyFrameTransform();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneTransformType) const;

    MCNAPI ~KeyFrameTransform();
#else // @header-generator platform
    MCAPI void animate(
        ::RenderParams&     renderParams,
        ::BoneOrientation&  destBoneOrientation,
        float               scale,
        ::BoneTransformType boneTransformType
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    computeCubicPolynomial(::KeyFrameTransform*, ::KeyFrameTransform&, ::KeyFrameTransform&, ::KeyFrameTransform*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void computeCubicPolynomial(
        ::KeyFrameTransform* p0,
        ::KeyFrameTransform& p1,
        ::KeyFrameTransform& p2,
        ::KeyFrameTransform* p3
    );
#endif // @header-generator platform
    // NOLINTEND
};
