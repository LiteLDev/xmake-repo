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
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
class SaveContext;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ResourceDropsContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PistonBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                        mSticky;
    ::ll::TypedStorage<4, 4, float>                                       mProgress;
    ::ll::TypedStorage<4, 4, float>                                       mLastProgress;
    ::ll::TypedStorage<1, 1, bool>                                        mWasPushedBackwardByANonStickyPiston;
    ::ll::TypedStorage<1, 1, bool>                                        mWasPulledForwardByAStickyPiston;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mOldState;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mState;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mNewState;
    ::ll::TypedStorage<1, 1, bool>                                        mVerifyArm;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldVerifyArmType;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mAttachedBlocks;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::BlockPos>>> mFutureClientAttachedBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mBreakBlocks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PistonBlockActor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PistonBlockActor();
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
    virtual bool saveItemInstanceData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool saveItemInstanceData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual void onRemoved(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PistonBlockActor(::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI bool _attachedBlockWalker(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _attachedBlockWalker(::BlockSource&, ::BlockPos const&, uchar, uchar);
#else // @header-generator platform
    MCAPI bool _checkAttachedBlocks(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _checkAttachedBlocks(::BlockSource&);
#else // @header-generator platform
    MCAPI void _moveCollidedEntities(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _moveCollidedEntities(::BlockSource&);
#else // @header-generator platform
    MCAPI void _moveCollidedEntitiesHelper(
        ::BlockSource&    region,
        ::AABB const&     insideBlockAABB,
        ::BlockPos const& facingDir,
        ::Actor*          ignore,
        uint              searchHeight
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _moveCollidedEntitiesHelper(::BlockSource&, ::AABB const&, ::BlockPos const&, ::Actor*, uint);
#else // @header-generator platform
    MCAPI void _spawnBlocks(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sortAttachedBlocks(::BlockSource&);
#else // @header-generator platform
    MCAPI void _spawnMovingBlock(::BlockSource& region, ::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _spawnBlocks(::BlockSource&);
#else // @header-generator platform
    MCAPI void _spawnMovingBlocks(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _spawnMovingBlock(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI ::BlockPos const& getFacingDir(::IConstBlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void moveEntityLastProgress(::Actor& entity, ::Vec3 delta);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PistonBlockActor const* getOwningPiston(::BlockActor const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD static ::PistonBlockActor const* getOwningPiston(::BlockActor const& blockActor, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCFOLD static ::PistonBlockActor* getOwningPiston(::BlockActor& blockActor, ::BlockSource& region);
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
    MCNAPI bool $saveItemInstanceData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI bool $saveItemInstanceData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();
#endif // @header-generator platform
    // NOLINTEND
};
