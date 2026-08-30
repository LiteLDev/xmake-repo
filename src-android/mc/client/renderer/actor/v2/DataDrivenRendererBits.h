#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum DataDrivenRendererBits : uint {
    HasInitializationScript             = 0,
    HasPreAnimationScript               = 1,
    HasHeldItemScaleExpression          = 2,
    HasScaleScript                      = 3,
    HasUniformScale                     = 4,
    HasScale_X                          = 5,
    HasScale_Y                          = 6,
    HasScale_Z                          = 7,
    RenderControllers_Always_Enabled    = 8,
    RenderControllers_Override_Uniforms = 9,
    RenderControllers_Ignore_Lighting   = 10,
    RenderControllers_Filter_Lighting   = 11,
    WillRunAnyMolangExpressions         = 12,
    AttachablesSupported                = 13,
    HideArmor                           = 14,
    Count                               = 15,
};
