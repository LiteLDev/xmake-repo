#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorTerrainInterlockData;
class BlockActor;
class BlockPos;
class BlockSource;
class Vec3;
// clang-format on

class IVanillaRenderBlockActorComponent {
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

    virtual ::BlockActorRendererId getRendererId() const = 0;

    virtual bool isPermanentlyRendered() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWithinRenderDistance(::Vec3 const&) const = 0;
#else // @header-generator platform
    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const = 0;
#endif // @header-generator platform

    virtual bool hasAlphaLayer() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius(::BlockSource&) const = 0;
#else // @header-generator platform
    virtual float getShadowRadius(::BlockSource& region) const = 0;
#endif // @header-generator platform

    virtual bool isInWorld() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent* getCrackEntity(::BlockSource&, ::BlockPos const&) = 0;
#else // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent* getCrackEntity(::BlockSource& region, ::BlockPos const& pos) = 0;
#endif // @header-generator platform

    virtual ::AABB const& getAABB() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setAABB(::AABB const&) = 0;
#else // @header-generator platform
    virtual void setAABB(::AABB const& value) = 0;
#endif // @header-generator platform

    virtual ::ActorTerrainInterlockData& getEntityTerrainInterlockData() = 0;

    virtual ::ActorTerrainInterlockData const& getEntityTerrainInterlockDataConst() const = 0;

    virtual void _resetAABB() = 0;
    // NOLINTEND
};
