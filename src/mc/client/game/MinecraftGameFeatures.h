#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MinecraftGameFeatures : int {
    MULTIPLAYER_FEATURE                     = 0,
    CREATIVE_MODE_FEATURE                   = 1,
    RESOURCE_PACKS_FEATURE                  = 2,
    SEEDS_FEATURE                           = 3,
    SERVER_FEATURE                          = 4,
    MARKETPLACE_FEATURE                     = 5,
    XBOXLIVE_FEATURE                        = 6,
    TRIALWORLDS_TRANSFER_TOFULLGAME_FEATURE = 7,
    LEGACY_WORLDS_FEATURE                   = 8,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class MinecraftGameFeatures : int {
    MultiplayerFeature                   = 0,
    CreativeModeFeature                  = 1,
    ResourcePacksFeature                 = 2,
    SeedsFeature                         = 3,
    ServerFeature                        = 4,
    MarketplaceFeature                   = 5,
    XboxliveFeature                      = 6,
    TrialworldsTransferTofullgameFeature = 7,
    LegacyWorldsFeature                  = 8,
};
#else // @header-generator platform
enum class MinecraftGameFeatures : int {};
#endif // @header-generator platform
#endif // @header-generator platform
