#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/AnimationComponentGroupType.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class AnimationComponentID;
struct AnimationComponentArguments;
// clang-format on

class AnimationComponentGroup {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<AnimationComponentID, std::weak_ptr<AnimationComponent>>&
        _getAllAnimationComponents(::AnimationComponentGroupType);
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::AnimationComponentID, ::std::weak_ptr<::AnimationComponent>>&
    _getAllAnimationComponents(::AnimationComponentGroupType groupType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<AnimationComponent>
        getAnimationComponent(::AnimationComponentGroupType, ::AnimationComponentID);
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::AnimationComponent>
    getAnimationComponent(::AnimationComponentGroupType groupType, ::AnimationComponentID ownerUUID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void onFrameRendered();

    MCNAPI static void
        setFactory(::gsl::not_null<std::unique_ptr<AnimationComponent> (*)(AnimationComponentArguments&&)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void onFrameRendered();

    MCAPI static void
    setFactory(::gsl::not_null<::std::unique_ptr<::AnimationComponent> (*)(::AnimationComponentArguments&&)> factory);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
