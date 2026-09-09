#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UIMaterialType : int {
    None                                 = 0,
    textured_and_glcolor_sprite          = 1,
    textured_and_glcolor_bilinear_sprite = 2,
    grayscale                            = 3,
    grayscale_bilinear                   = 4,
    inventory_item_glint                 = 5,
    item_glint_stencil                   = 6,
    item_unglint_stencil                 = 7,
    banner                               = 8,
    shield                               = 9,
    dragon_head                          = 10,
    mob_head                             = 11,
    conduit                              = 12,
    item                                 = 13,
    item_multicolor_tint                 = 14,
    COUNT                                = 15,
};
