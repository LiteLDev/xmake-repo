#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Dimension;
class MovePlayerPacket;
class Player;
class SubChunkPos;
class Vec3;
struct DimensionType;
// clang-format on

class IPlayerDimensionTransferProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IPlayerDimensionTransferProxy() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerDimensionChangedEvent(::Player&, ::DimensionType, ::DimensionType) = 0;
#else // @header-generator platform
    virtual void
    playerDimensionChangedEvent(::Player& player, ::DimensionType fromDimensionId, ::DimensionType toDimensionId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getAgent(::Player&) = 0;
#else // @header-generator platform
    virtual ::Actor* getAgent(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetAgent(::Player&) = 0;
#else // @header-generator platform
    virtual void resetAgent(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopUsingItem(::Player&) = 0;
#else // @header-generator platform
    virtual void stopUsingItem(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasRespawnPosition(::Player const&) const = 0;
#else // @header-generator platform
    virtual bool hasRespawnPosition(::Player const& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos const& getSpawnPosition(::Player const&) const = 0;
#else // @header-generator platform
    virtual ::BlockPos const& getSpawnPosition(::Player const& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isRespawningFromTheEnd(::Player const&) const = 0;
#else // @header-generator platform
    virtual bool isRespawningFromTheEnd(::Player const& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWillChangeDimension(::Player&) = 0;
#else // @header-generator platform
    virtual void fireWillChangeDimension(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveTo(::Player&, ::Vec3 const&) = 0;
#else // @header-generator platform
    virtual void moveTo(::Player& player, ::Vec3 const& position) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPreviousPosition(::Player&) = 0;
#else // @header-generator platform
    virtual void setPreviousPosition(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetInterpolation(::Player&) = 0;
#else // @header-generator platform
    virtual void resetInterpolation(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void prepareRegion(::Player&, ::Dimension const&) = 0;
#else // @header-generator platform
    virtual void prepareRegion(::Player& player, ::Dimension const& dimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MovePlayerPacket createMovePlayerPacket(::Player const&, ::PlayerPositionModeComponent::PositionMode) const = 0;
#else // @header-generator platform
    virtual ::MovePlayerPacket
    createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setAgent(::Player&, ::Actor&) = 0;
#else // @header-generator platform
    virtual void setAgent(::Player& player, ::Actor& agent) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 calculateAgentSpawnPosition(::Player const&) const = 0;
#else // @header-generator platform
    virtual ::Vec3 calculateAgentSpawnPosition(::Player const& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isRespawnReady(::Player const&) const = 0;
#else // @header-generator platform
    virtual bool isRespawnReady(::Player const& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::pair<bool, std::optional<SubChunkPos>> hasSubChunksAt(::Player const&, ::BlockPos const&, ::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transferTickingArea(::Actor&, ::Dimension&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
