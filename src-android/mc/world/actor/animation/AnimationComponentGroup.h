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
    MCNAPI static std::unordered_map<AnimationComponentID, std::weak_ptr<AnimationComponent>>&
        _getAllAnimationComponents(::AnimationComponentGroupType);

    MCNAPI static std::shared_ptr<AnimationComponent>
        getAnimationComponent(::AnimationComponentGroupType, ::AnimationComponentID);

    MCNAPI static void onFrameRendered();

    MCNAPI static void
        setFactory(::gsl::not_null<std::unique_ptr<AnimationComponent> (*)(AnimationComponentArguments&&)>);
    // NOLINTEND
};
