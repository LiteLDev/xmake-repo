#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"
#include "mc/world/level/block/states/BlockStateVariant.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class HashedString;
class ILevel;
class SaveContext;
// clang-format on

class ItemFrameBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>                          mClockSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<1, 1, bool>                       mInstantClockCalculatorUpdate;
    ::ll::TypedStorage<8, 128, ::ItemInstance>           mItem;
    ::ll::TypedStorage<4, 4, float>                      mDropChance;
    ::ll::TypedStorage<4, 4, float>                      mRotation;
    ::ll::TypedStorage<1, 1, bool>                       mUpgradeMapBit;
    ::ll::TypedStorage<1, 1, bool>                       mUpgradePhotoBit;
    ::ll::UntypedStorage<1, 6>                           mRefreshMap;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>           mDisplayEntity;
    ::ll::TypedStorage<1, 1, bool>                       mIgnoreLighting;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemFrameBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemFrameBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onRemoved(::BlockSource&);

    virtual bool isTypeOrDerived(::BlockActorType) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual float getShadowRadius(::BlockSource&) const;

    virtual void tick(::BlockSource&);

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemFrameBlockActor(::BlockPos const&);

    MCNAPI ItemFrameBlockActor(::BlockPos const&, ::BlockActorType);

    MCNAPI void _updateBit(::BlockSource&, ::BlockStateVariant<bool> const&, ::HashedString const&);

    MCNAPI void actuallyDropItem(::BlockSource&, bool, ::Actor*);

    MCNAPI void dropFramedItem(::BlockSource&, bool, ::Actor*);

    MCNAPI ::ClockSpriteCalculator& getClockCalculator();

    MCNAPI ::CompassSpriteCalculator& getCompassCalculator();

    MCNAPI ::ItemInstance const& getFramedItem() const;

    MCNAPI ::CompassSpriteCalculator& getRecoveryCompassCalculator();

    MCNAPI float getRotation();

    MCNAPI bool const ignoreLighting() const;

    MCNAPI void rotateFramedItem(::BlockSource&, ::Actor&);

    MCNAPI void setIgnoreLighting(bool);

    MCNAPI void setItem(::BlockSource&, ::ItemInstance const&, ::Actor*);

    MCNAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource&);

    MCNAPI void updateNameTag();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& ROTATION_DEGREES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);

    MCNAPI void* $ctor(::BlockPos const&, ::BlockActorType);
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

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;

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
