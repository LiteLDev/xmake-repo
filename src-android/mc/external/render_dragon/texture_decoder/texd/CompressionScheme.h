#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

enum CompressionScheme : uint {
    None            = 0,
    DXT1_RGB        = 33776,
    DXT1_RGBA       = 33777,
    DXT3_RGBA       = 33778,
    DXT5_RGBA       = 33779,
    ASTC_4x4        = 37808,
    ASTC_5x4        = 37809,
    ASTC_5x5        = 37810,
    ASTC_6x5        = 37811,
    ASTC_6x6        = 37812,
    ASTC_8x5        = 37813,
    ASTC_8x6        = 37814,
    ASTC_8x8        = 37815,
    ASTC_10x5       = 37816,
    ASTC_10x6       = 37817,
    ASTC_10x8       = 37818,
    ASTC_10x10      = 37819,
    ASTC_12x10      = 37820,
    ASTC_12x12      = 37821,
    ASTC_4x4_SRGB   = 37840,
    ASTC_5x4_SRGB   = 37841,
    ASTC_5x5_SRGB   = 37842,
    ASTC_6x5_SRGB   = 37843,
    ASTC_6x6_SRGB   = 37844,
    ASTC_8x5_SRGB   = 37845,
    ASTC_8x6_SRGB   = 37846,
    ASTC_8x8_SRGB   = 37847,
    ASTC_10x5_SRGB  = 37848,
    ASTC_10x6_SRGB  = 37849,
    ASTC_10x8_SRGB  = 37850,
    ASTC_10x10_SRGB = 37851,
    ASTC_12x10_SRGB = 37852,
    ASTC_12x12_SRGB = 37853,
};

}
