#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class UIMaterialType : int {
    None                             = 0,
    TexturedAndGlcolorSprite         = 1,
    TexturedAndGlcolorBilinearSprite = 2,
    Grayscale                        = 3,
    GrayscaleBilinear                = 4,
    InventoryItemGlint               = 5,
    ItemGlintStencil                 = 6,
    ItemUnglintStencil               = 7,
    Banner                           = 8,
    Shield                           = 9,
    DragonHead                       = 10,
    MobHead                          = 11,
    Conduit                          = 12,
    Item                             = 13,
    ItemMulticolorTint               = 14,
    Count                            = 15,
};
#else // @header-generator platform
enum class UIMaterialType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
