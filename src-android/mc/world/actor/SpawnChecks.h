#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ILevel;
class IRandom;
class ServerLevel;
// clang-format on

class SpawnChecks {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canHatchEgg(::ILevel const&);

    MCNAPI static bool canRespawnEnderDragon(::ILevel const&);

    MCNAPI static bool canReviveBees(::ILevel const&);

    MCNAPI static bool canSpawnBees(::ILevel const&);

    MCNAPI static bool canSpawnEnderDragon(::ServerLevel const&);

    MCNAPI static bool canSpawnFromMobSpawnerBlock(::ILevel const&);

    MCNAPI static bool canSpawnNaturally(::ILevel const&);

    MCNAPI static bool canSpawnPigZombieFromPortal(::Dimension const&, ::IRandom&);

    MCNAPI static bool canSpawnSkeletonTrap(::ILevel const&, ::IRandom&);

    MCNAPI static bool canSpawnTadpoles(::ILevel const&);

    MCNAPI static bool canSpawnVillageDwellers(::ILevel const&);

    MCNAPI static bool canSpawnWanderingTrader(::ServerLevel const&);

    MCNAPI static bool canSpawnWarden(::ILevel const&);

    MCNAPI static bool canSpawnWithWorldGeneration(::ILevel const&);

    MCNAPI static bool canTriggerRaid(::ILevel const&);

    MCNAPI static bool shouldAbortRaid(::ILevel const&);

    MCNAPI static bool shouldPauseRaid(::ILevel const&);
    // NOLINTEND
};
