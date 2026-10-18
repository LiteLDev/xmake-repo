#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/animation/BoneAnimationChannel.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/BoneTransformType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BoneOrientation;
class RenderParams;
struct BoneAnimationPlayer;
namespace Json { class Value; }
#else // @header-generator platform
class BoneAnimationChannel;
#endif // @header-generator platform
// clang-format on

class BoneAnimation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                    mBoneName;
    ::ll::TypedStorage<8, 24, std::vector<BoneAnimationChannel>> mAnimationChannels;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>        mRotationRelativeMode;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                        mBoneName;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoneAnimationChannel>> mAnimationChannels;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>            mRotationRelativeMode;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    BoneAnimation& operator=(BoneAnimation const&);
    BoneAnimation(BoneAnimation const&);
#else // @header-generator platform
#endif // @header-generator platform
    BoneAnimation();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void animate(::RenderParams&, ::BoneOrientation&, float, ::BoneAnimationPlayer*) const;
#else // @header-generator platform
    MCAPI explicit BoneAnimation(::std::string const& name);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<BoneAnimationChannel> const& getAnimationChannels() const;
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};
