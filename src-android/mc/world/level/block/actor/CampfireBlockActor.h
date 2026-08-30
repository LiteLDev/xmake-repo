#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class HashedString;
class ILevel;
class SaveContext;
// clang-format on

class CampfireBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 0>        mCookingItem;
    ::ll::TypedStorage<4, 16, int[4]> mCookingTime;
    ::ll::TypedStorage<1, 1, bool>    mWasLit;
    ::ll::TypedStorage<4, 4, int>     mNextSmokeParticleTick;
    // NOLINTEND

public:
    // prevent constructor by default
    CampfireBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CampfireBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual float getShadowRadius(::BlockSource&) const;

    virtual void tick(::BlockSource&);

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CampfireBlockActor(::BlockPos const&);

    MCNAPI void _finishCooking(::BlockSource&, int);

    MCNAPI void dropAllItems(::BlockSource&);

    MCNAPI ::HashedString const& getCampfireTag(::BlockSource const&) const;

    MCNAPI ::ItemInstance const& getCookingItem(int);

    MCNAPI bool setItem(::BlockSource&, ::ItemInstance const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_SMOKE_THRESHOLD_COUNTER();

    MCNAPI static int const& MIN_SMOKE_THRESHOLD_COUNTER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
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

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI float $getShadowRadius(::BlockSource&) const;

    MCNAPI void $tick(::BlockSource&);

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
