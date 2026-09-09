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
    // clang-format off
    virtual ~PlayerDimensionTransferProxy();

    virtual void playerDimensionChangedEvent(::Player&, ::DimensionType, ::DimensionType);

    virtual ::Actor* getAgent(::Player&);

    virtual void resetAgent(::Player&);

    virtual void stopUsingItem(::Player&);

    virtual bool hasRespawnPosition(::Player const&) const;

    virtual ::BlockPos const& getSpawnPosition(::Player const&) const;

    virtual bool isRespawningFromTheEnd(::Player const&) const;

    virtual void fireWillChangeDimension(::Player&);

    virtual void moveTo(::Player&, ::Vec3 const&);

    virtual void setPreviousPosition(::Player&);

    virtual void resetInterpolation(::Player&);

    virtual void prepareRegion(::Player&, ::Dimension const&);

    virtual ::MovePlayerPacket createMovePlayerPacket(::Player const&, ::PlayerPositionModeComponent::PositionMode) const;

    virtual void setAgent(::Player&, ::Actor&);

    virtual ::Vec3 calculateAgentSpawnPosition(::Player const&) const;

    virtual bool isRespawnReady(::Player const&) const;

    virtual std::pair<bool, std::optional<SubChunkPos>> hasSubChunksAt(::Player const&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void transferTickingArea(::Actor&, ::Dimension&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $playerDimensionChangedEvent(::Player&, ::DimensionType, ::DimensionType);

    MCNAPI ::Actor* $getAgent(::Player&);

    MCNAPI void $resetAgent(::Player&);

    MCNAPI void $stopUsingItem(::Player&);

    MCNAPI bool $hasRespawnPosition(::Player const&) const;

    MCNAPI ::BlockPos const& $getSpawnPosition(::Player const&) const;

    MCNAPI bool $isRespawningFromTheEnd(::Player const&) const;

    MCNAPI void $fireWillChangeDimension(::Player&);

    MCNAPI void $moveTo(::Player&, ::Vec3 const&);

    MCNAPI void $setPreviousPosition(::Player&);

    MCNAPI void $resetInterpolation(::Player&);

    MCNAPI void $prepareRegion(::Player&, ::Dimension const&);

    MCNAPI ::MovePlayerPacket
    $createMovePlayerPacket(::Player const&, ::PlayerPositionModeComponent::PositionMode) const;

    MCNAPI void $setAgent(::Player&, ::Actor&);

    MCNAPI ::Vec3 $calculateAgentSpawnPosition(::Player const&) const;

    MCNAPI bool $isRespawnReady(::Player const&) const;

    MCNAPI std::pair<bool, std::optional<SubChunkPos>>
           $hasSubChunksAt(::Player const&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $transferTickingArea(::Actor&, ::Dimension&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
