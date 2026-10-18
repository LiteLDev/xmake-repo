#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/world/level/IPlayerDimensionTransferProxy.h"

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

class PlayerDimensionTransferProxy : public ::IPlayerDimensionTransferProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PlayerDimensionTransferProxy();
#else // @header-generator platform
    virtual ~PlayerDimensionTransferProxy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerDimensionChangedEvent(::Player&, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    virtual void playerDimensionChangedEvent(
        ::Player&       player,
        ::DimensionType fromDimensionId,
        ::DimensionType toDimensionId
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getAgent(::Player&);
#else // @header-generator platform
    virtual ::Actor* getAgent(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetAgent(::Player&);
#else // @header-generator platform
    virtual void resetAgent(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopUsingItem(::Player&);
#else // @header-generator platform
    virtual void stopUsingItem(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasRespawnPosition(::Player const&) const;
#else // @header-generator platform
    virtual bool hasRespawnPosition(::Player const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos const& getSpawnPosition(::Player const&) const;
#else // @header-generator platform
    virtual ::BlockPos const& getSpawnPosition(::Player const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isRespawningFromTheEnd(::Player const&) const;
#else // @header-generator platform
    virtual bool isRespawningFromTheEnd(::Player const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWillChangeDimension(::Player&);
#else // @header-generator platform
    virtual void fireWillChangeDimension(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveTo(::Player&, ::Vec3 const&);
#else // @header-generator platform
    virtual void moveTo(::Player& player, ::Vec3 const& position) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPreviousPosition(::Player&);
#else // @header-generator platform
    virtual void setPreviousPosition(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetInterpolation(::Player&);
#else // @header-generator platform
    virtual void resetInterpolation(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void prepareRegion(::Player&, ::Dimension const&);
#else // @header-generator platform
    virtual void prepareRegion(::Player& player, ::Dimension const& dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MovePlayerPacket createMovePlayerPacket(::Player const&, ::PlayerPositionModeComponent::PositionMode) const;
#else // @header-generator platform
    virtual ::MovePlayerPacket
    createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setAgent(::Player&, ::Actor&);
#else // @header-generator platform
    virtual void setAgent(::Player& player, ::Actor& agent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 calculateAgentSpawnPosition(::Player const&) const;
#else // @header-generator platform
    virtual ::Vec3 calculateAgentSpawnPosition(::Player const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isRespawnReady(::Player const&) const;
#else // @header-generator platform
    virtual bool isRespawnReady(::Player const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::pair<bool, std::optional<SubChunkPos>> hasSubChunksAt(::Player const&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transferTickingArea(::Actor&, ::Dimension&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerDimensionChangedEvent(::Player&, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    MCAPI void
    $playerDimensionChangedEvent(::Player& player, ::DimensionType fromDimensionId, ::DimensionType toDimensionId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $getAgent(::Player&);
#else // @header-generator platform
    MCAPI ::Actor* $getAgent(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetAgent(::Player&);
#else // @header-generator platform
    MCAPI void $resetAgent(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopUsingItem(::Player&);
#else // @header-generator platform
    MCAPI void $stopUsingItem(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasRespawnPosition(::Player const&) const;
#else // @header-generator platform
    MCAPI bool $hasRespawnPosition(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& $getSpawnPosition(::Player const&) const;
#else // @header-generator platform
    MCAPI ::BlockPos const& $getSpawnPosition(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isRespawningFromTheEnd(::Player const&) const;
#else // @header-generator platform
    MCAPI bool $isRespawningFromTheEnd(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireWillChangeDimension(::Player&);
#else // @header-generator platform
    MCAPI void $fireWillChangeDimension(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $moveTo(::Player&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void $moveTo(::Player& player, ::Vec3 const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPreviousPosition(::Player&);
#else // @header-generator platform
    MCAPI void $setPreviousPosition(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetInterpolation(::Player&);
#else // @header-generator platform
    MCAPI void $resetInterpolation(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $prepareRegion(::Player&, ::Dimension const&);
#else // @header-generator platform
    MCAPI void $prepareRegion(::Player& player, ::Dimension const& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MovePlayerPacket
    $createMovePlayerPacket(::Player const&, ::PlayerPositionModeComponent::PositionMode) const;
#else // @header-generator platform
    MCAPI ::MovePlayerPacket
    $createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setAgent(::Player&, ::Actor&);
#else // @header-generator platform
    MCAPI void $setAgent(::Player& player, ::Actor& agent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $calculateAgentSpawnPosition(::Player const&) const;
#else // @header-generator platform
    MCAPI ::Vec3 $calculateAgentSpawnPosition(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isRespawnReady(::Player const&) const;
#else // @header-generator platform
    MCAPI bool $isRespawnReady(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<bool, std::optional<SubChunkPos>>
           $hasSubChunksAt(::Player const&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::std::pair<bool, ::std::optional<::SubChunkPos>>
    $hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $transferTickingArea(::Actor&, ::Dimension&);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $transferTickingArea(::Actor& actor, ::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
