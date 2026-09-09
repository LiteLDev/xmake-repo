#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum BlockRenderLayer : uchar {
    RENDERLAYER_DOUBLE_SIDED                                        = 0,
    RENDERLAYER_RAY_TRACED_WATER                                    = 1,
    RENDERLAYER_DEFERRED_WATER                                      = 2,
    RENDERLAYER_BLEND                                               = 3,
    RENDERLAYER_BLEND_TO_OPAQUE                                     = 4,
    RENDERLAYER_OPAQUE                                              = 5,
    RENDERLAYER_LIGHT_SOURCE                                        = 6,
    RENDERLAYER_ALPHATEST_TO_OPAQUE                                 = 7,
    RENDERLAYER_ALPHATEST                                           = 8,
    RENDERLAYER_SEASONS_OPAQUE                                      = 9,
    RENDERLAYER_SEASONS_ALPHATEST_TO_OPAQUE                         = 10,
    RENDERLAYER_ALPHATEST_SINGLE_SIDE                               = 11,
    RENDERLAYER_ALPHATEST_SINGLE_SIDE_TO_OPAQUE                     = 12,
    RENDERLAYER_ENDPORTAL                                           = 13,
    RENDERLAYER_BARRIER                                             = 14,
    RENDERLAYER_LIGHT                                               = 15,
    RENDERLAYER_STRUCTURE_VOID                                      = 16,
    RENDERLAYER_SHIFT_OPAQUE_INTERNAL_ONLY                          = 17,
    RENDERLAYER_SHIFT_ALPHATEST_TO_OPAQUE_INTERNAL_ONLY             = 18,
    RENDERLAYER_SHIFT_ALPHATEST_INTERNAL_ONLY                       = 19,
    RENDERLAYER_SHIFT_ALPHATEST_SINGLE_SIDE_INTERNAL_ONLY           = 20,
    RENDERLAYER_SHIFT_ALPHATEST_SINGLE_SIDE_TO_OPAQUE_INTERNAL_ONLY = 21,
    _RENDERLAYER_COUNT                                              = 22,
};
