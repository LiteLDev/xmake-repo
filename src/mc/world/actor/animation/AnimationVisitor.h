#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerStatePlayer;
class ActorAnimationPlayer;
class ActorSkeletalAnimationPlayer;
// clang-format on

struct AnimationVisitor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mBase;
    ::ll::UntypedStorage<8, 16> mSkeletal;
    ::ll::UntypedStorage<8, 16> mController;
    ::ll::UntypedStorage<8, 16> mControllerState;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorAnimationPlayer&)>>                mBase;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorSkeletalAnimationPlayer&)>>        mSkeletal;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorAnimationControllerPlayer&)>>      mController;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorAnimationControllerStatePlayer&)>> mControllerState;
#endif // @header-generator platform
    // NOLINTEND
};
