#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinAdjustments {
public:
    // SkinAdjustments inner types define
    enum class AnimBits : int {
        Anim_ArmsDown         = 0,
        Anim_ArmsOutFront     = 1,
        Anim_NoLegAnim        = 2,
        Anim_SingleLegs       = 3,
        Anim_SingleArms       = 4,
        Anim_StatueOfLiberty  = 5,
        Anim_DontRenderArmour = 6,
        Anim_NoBobbing        = 7,
        Anim_UpsideDown       = 8,
        Anim_InvertedCrouch   = 9,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mAnimOverrideBitmask;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinAdjustments();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
