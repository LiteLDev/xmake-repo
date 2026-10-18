#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

#if defined(LL_PLAT_A) // @header-generator platform
enum EnchantSlot : uint {
#else // @header-generator platform
enum class EnchantSlot : uint {
#endif // @header-generator platform
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    NONE           = 0,
    ARMOR_HEAD     = 1u << 0,
    ARMOR_TORSO    = 1u << 1,
    ARMOR_FEET     = 1u << 2,
    ARMOR_LEGS     = 1u << 3,
    SWORD          = 1u << 4,
    BOW            = 1u << 5,
    HOE            = 1u << 6,
    SHEARS         = 1u << 7,
    FLINTSTEEL     = 1u << 8,
    AXE            = 1u << 9,
    PICKAXE        = 1u << 10,
    SHOVEL         = 1u << 11,
    FISHING_ROD    = 1u << 12,
    CARROT_STICK   = 1u << 13,
    ELYTRA         = 1u << 14,
    SPEAR          = 1u << 15,
    CROSSBOW       = 1u << 16,
    SHIELD         = 1u << 17,
    COSMETIC_HEAD  = 1u << 18,
    COMPASS        = 1u << 19,
    MUSHROOM_STICK = 1u << 20,
    BRUSH          = 1u << 21,
    HEAVY_WEAPON   = 1u << 22,
    MELEE_SPEAR    = 1u << 23,
    G_ARMOR        = ARMOR_HEAD | ARMOR_TORSO | ARMOR_FEET | ARMOR_LEGS,
    G_DIGGING      = HOE | AXE | PICKAXE | SHOVEL,
    G_TOOL         = HOE | SHEARS | FLINTSTEEL | SHIELD,
    All            = 4294967295,
#else // @header-generator platform
    None          = 0,
    ArmorHead     = 1u << 0,
    ArmorTorso    = 1u << 1,
    ArmorFeet     = 1u << 2,
    ArmorLegs     = 1u << 3,
    Sword         = 1u << 4,
    Bow           = 1u << 5,
    Hoe           = 1u << 6,
    Shears        = 1u << 7,
    Flintsteel    = 1u << 8,
    Axe           = 1u << 9,
    Pickaxe       = 1u << 10,
    Shovel        = 1u << 11,
    FishingRod    = 1u << 12,
    CarrotStick   = 1u << 13,
    Elytra        = 1u << 14,
    Spear         = 1u << 15,
    Crossbow      = 1u << 16,
    Shield        = 1u << 17,
    CosmeticHead  = 1u << 18,
    Compass       = 1u << 19,
    MushroomStick = 1u << 20,
    Brush         = 1u << 21,
    HeavyWeapon   = 1u << 22,
    MeleeSpear    = 1u << 23,
    GArmor        = ArmorHead | ArmorTorso | ArmorFeet | ArmorLegs,
    GDigging      = Hoe | Axe | Pickaxe | Shovel,
    GTool         = Hoe | Shears | Flintsteel | Shield,
    All           = 4294967295,
#endif // @header-generator platform
};

}
