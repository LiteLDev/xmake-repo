#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockActorDataPacket;
class BlockSource;
class BlockVolume;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
class GetCollisionShapeInterface;
class IConstBlockSource;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    EndGatewayBlockActor();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EndGatewayBlockActor();
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void triggerEvent(int, int);
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual bool hasAlphaLayer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAlphaLayer() const;
#else // @header-generator platform
    virtual void triggerEvent(int b0, int b1) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _getHighestSection(::WorldGenerator&, ::BlockVolume&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static int _getHighestSection(::WorldGenerator& endGenerator, ::BlockVolume& box, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos findExitPortal(::WorldGenerator&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static ::BlockPos findExitPortal(::WorldGenerator& endGenerator, ::BlockPos const& origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::BlockPos findValidSpawnAround(
        ::BlockSource&    region,
        ::BlockPos const& around,
        bool              searchForEndStoneOnly,
        int               searchRadius,
        bool              searchAboveBlock
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $triggerEvent(int, int);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasAlphaLayer() const;
#else // @header-generator platform
    MCFOLD bool $hasAlphaLayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void $triggerEvent(int b0, int b1);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
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
