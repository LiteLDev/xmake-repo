#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinAdjustments {
public:
    // SkinAdjustments inner types define
    enum class AnimBits : int {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ArmsDown         = 0,
        ArmsOutFront     = 1,
        NoLegAnim        = 2,
        SingleLegs       = 3,
        SingleArms       = 4,
        StatueOfLiberty  = 5,
        DontRenderArmour = 6,
        NoBobbing        = 7,
        UpsideDown       = 8,
        InvertedCrouch   = 9,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mAnimOverrideBitmask;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
