#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/PistonState.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
class IRandom;
class SaveContext;
class Vec3;
struct ResourceDropsContext;
// clang-format on

class PistonBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mSticky;
    ::ll::TypedStorage<4, 4, float>                                 mProgress;
    ::ll::TypedStorage<4, 4, float>                                 mLastProgress;
    ::ll::TypedStorage<1, 1, bool>                                  mWasPushedBackwardByANonStickyPiston;
    ::ll::TypedStorage<1, 1, bool>                                  mWasPulledForwardByAStickyPiston;
    ::ll::TypedStorage<1, 1, ::PistonState>                         mOldState;
    ::ll::TypedStorage<1, 1, ::PistonState>                         mState;
    ::ll::TypedStorage<1, 1, ::PistonState>                         mNewState;
    ::ll::TypedStorage<1, 1, bool>                                  mVerifyArm;
    ::ll::TypedStorage<1, 1, bool>                                  mShouldVerifyArmType;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                mAttachedBlocks;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<BlockPos>>> mFutureClientAttachedBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                mBreakBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    PistonBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PistonBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual bool saveItemInstanceData(::CompoundTag&) const;

    virtual void onRemoved(::BlockSource&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PistonBlockActor(::BlockPos const&, bool);

    MCNAPI bool _attachedBlockWalker(::BlockSource&, ::BlockPos const&, uchar, uchar);

    MCNAPI bool _checkAttachedBlocks(::BlockSource&);

    MCNAPI void _moveCollidedEntities(::BlockSource&);

    MCNAPI void _moveCollidedEntitiesHelper(::BlockSource&, ::AABB const&, ::BlockPos const&, ::Actor*, uint);

    MCNAPI void _sortAttachedBlocks(::BlockSource&);

    MCNAPI void _spawnBlocks(::BlockSource&);

    MCNAPI void _spawnMovingBlock(::BlockSource&, ::BlockPos const&);

    MCNAPI void _spawnMovingBlocks(::BlockSource&);

    MCNAPI std::vector<BlockPos> const& getAttachedBlocks() const;

    MCNAPI ::Block const* getCorrectArmBlock() const;

    MCNAPI ::BlockPos const& getFacingDir(::IConstBlockSource const&) const;

    MCNAPI float getProgress(float) const;

    MCNAPI bool isExpanded() const;

    MCNAPI bool isExpanding() const;

    MCNAPI bool isMoving() const;

    MCNAPI bool isRetracted() const;

    MCNAPI bool isRetracting() const;

    MCNAPI bool isSticky() const;

    MCNAPI void moveEntityLastProgress(::Actor&, ::Vec3);

    MCNAPI void setShouldVerifyArmType(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PistonBlockActor const* getOwningPiston(::BlockActor const&, ::BlockSource&);

    MCNAPI static ::PistonBlockActor* getOwningPiston(::BlockActor&, ::BlockSource&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& ARM_ANIMATION_SPEED();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, bool);
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

    MCNAPI bool $saveItemInstanceData(::CompoundTag&) const;

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
