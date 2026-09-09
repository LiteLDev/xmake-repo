#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockSource;
class BlockVolume;
class CompoundTag;
class DataLoadHelper;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ILevel;
class SaveContext;
class WorldGenerator;
// clang-format on

class EndGatewayBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>         mAge;
    ::ll::TypedStorage<4, 4, int>         mTeleportCooldown;
    ::ll::TypedStorage<4, 12, ::BlockPos> mExitPortal;
    ::ll::TypedStorage<1, 1, bool>        mNeedsExitGeneration;
    ::ll::TypedStorage<1, 1, bool>        mTeleportTriggered;
    ::ll::TypedStorage<1, 1, bool>        mNeedsExitPositionVerification;
    ::ll::TypedStorage<1, 1, bool>        mExitPositionVerified;
    ::ll::TypedStorage<1, 1, bool>        mEndGatewayBadPosResetRequired;
    // NOLINTEND

public:
    // prevent constructor by default
    EndGatewayBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EndGatewayBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void triggerEvent(int, int);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual bool hasAlphaLayer() const;

    virtual void tick(::BlockSource&);

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getCooldownPercentage() const;

    MCNAPI float getSpawnPercentage() const;

    MCNAPI bool isCoolingDown() const;

    MCNAPI bool isSpawning() const;

    MCNAPI void setExitPosition(::BlockPos const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _getHighestSection(::WorldGenerator&, ::BlockVolume&, ::BlockPos const&);

    MCNAPI static ::BlockPos findExitPortal(::WorldGenerator&, ::BlockPos const&);

    MCNAPI static ::BlockPos findValidSpawnAround(::BlockSource&, ::BlockPos const&, bool, int, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& COOLDOWN_TIME();

    MCNAPI static int const& EVENT_COOLDOWN();

    MCNAPI static int const& SPAWN_TIME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $triggerEvent(int, int);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI void $tick(::BlockSource&);

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
