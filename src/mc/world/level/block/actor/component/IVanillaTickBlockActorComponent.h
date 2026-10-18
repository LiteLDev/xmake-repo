#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
// clang-format on

class IVanillaTickBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockActor const& getBlockActor() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::BlockActor& getBlockActor() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::BlockActor const& getBlockActor() const = 0;
#endif // @header-generator platform

    virtual ::BlockPos const& getBlockActorPosition() const = 0;

    virtual ::BlockActorType getBlockActorType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&) = 0;
#else // @header-generator platform
    virtual void tick(::BlockSource& region) = 0;
#endif // @header-generator platform

    virtual int getTickCount() const = 0;
    // NOLINTEND
};
