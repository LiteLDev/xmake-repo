#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/InsideBubbleColumnBlockComponent.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct InsideBubbleColumnSystem {
public:
    // InsideBubbleColumnSystem inner types declare
    // clang-format off
    struct SpawnBubblesVisitor;
    // clang-format on

    // InsideBubbleColumnSystem inner types define
    struct SpawnBubblesVisitor {};

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSpawnBubbleColumnParticlesSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSpawnBubbleColumnParticlesSystem();
#endif // @header-generator platform
    // NOLINTEND
};
