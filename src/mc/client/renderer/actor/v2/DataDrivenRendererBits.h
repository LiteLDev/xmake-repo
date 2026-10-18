#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DataDrivenRendererBits : int {
    HasInitializationScript           = 0,
    HasPreAnimationScript             = 1,
    HasHeldItemScaleExpression        = 2,
    HasScaleScript                    = 3,
    HasUniformScale                   = 4,
    HasScaleX                         = 5,
    HasScaleY                         = 6,
    HasScaleZ                         = 7,
    RenderControllersAlwaysEnabled    = 8,
    RenderControllersOverrideUniforms = 9,
    RenderControllersIgnoreLighting   = 10,
    RenderControllersFilterLighting   = 11,
    WillRunAnyMolangExpressions       = 12,
    AttachablesSupported              = 13,
    HideArmor                         = 14,
    Count                             = 15,
};
#else // @header-generator platform
enum class DataDrivenRendererBits : int {};
#endif // @header-generator platform
#endif // @header-generator platform
