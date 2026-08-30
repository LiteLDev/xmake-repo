#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoreCatalogCategory : int {
    SkinPack         = 0,
    ResourcePack     = 1,
    MashUp           = 2,
    Realms           = 3,
    WorldTemplate    = 4,
    ServerConsumable = 5,
    ServerDurable    = 6,
    OfferCollection  = 7,
    Bundle           = 8,
    Persona          = 9,
    CoinOffer        = 10,
    CoinBundle       = 11,
    Addon            = 12,
    _Count           = 13,
    _Unknown         = 14,
};
