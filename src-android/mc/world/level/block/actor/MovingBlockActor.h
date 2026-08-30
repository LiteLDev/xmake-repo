#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
class PistonBlockActor;
class SaveContext;
class Vec3;
// clang-format on

class MovingBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>               mWrappedBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>               mWrappedExtraBlock;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockActor>> mWrappedBlockActor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                  mPistonBlockPos;
    ::ll::TypedStorage<1, 1, bool>                         mPistonBlockExpanding;
    ::ll::TypedStorage<4, 24, ::AABB>                      mCollisionShape;
    ::ll::TypedStorage<1, 1, bool>                         mPreserved;
    ::ll::TypedStorage<4, 4, int>                          mPreservedLifespan;
    // NOLINTEND

public:
    // prevent constructor by default
    MovingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MovingBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MovingBlockActor(::BlockPos const&);

    MCNAPI ::PistonBlockActor const* _getPistonBlock(::IConstBlockSource const&) const;

    MCNAPI std::pair<AABB, AABB> _getWrappedBlockCollisionShapes(::IConstBlockSource const&) const;

    MCNAPI bool _shouldPreserve(::BlockSource&);

    MCNAPI ::Vec3 getDrawPos(::IConstBlockSource const&, float) const;

    MCNAPI ::Block const& getWrappedBlock() const;

    MCNAPI ::BlockActor* getWrappedBlockActor();

    MCNAPI ::Block const& getWrappedExtraBlock();

    MCNAPI void moveCollidedEntities(::PistonBlockActor&, ::BlockSource&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPreserved(::BlockActor const&, ::BlockSource&);

    MCNAPI static bool shouldPreserve(::BlockActor&, ::BlockSource&);
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

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
