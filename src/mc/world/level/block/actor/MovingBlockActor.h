#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/actor/BlockActor.h"
#endif // @header-generator platform
#include "mc/world/level/block/actor/VanillaBlockActor.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockActor;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const*>               mWrappedBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>               mWrappedExtraBlock;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockActor>> mWrappedBlockActor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                  mPistonBlockPos;
    ::ll::TypedStorage<1, 1, bool>                         mPistonBlockExpanding;
    ::ll::TypedStorage<4, 24, ::AABB>                      mCollisionShape;
    ::ll::TypedStorage<1, 1, bool>                         mPreserved;
    ::ll::TypedStorage<4, 4, int>                          mPreservedLifespan;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const*>                   mWrappedBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                   mWrappedExtraBlock;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockActor>> mWrappedBlockActor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mPistonBlockPos;
    ::ll::TypedStorage<1, 1, bool>                             mPistonBlockExpanding;
    ::ll::TypedStorage<4, 24, ::AABB>                          mCollisionShape;
    ::ll::TypedStorage<1, 1, bool>                             mPreserved;
    ::ll::TypedStorage<4, 4, int>                              mPreservedLifespan;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MovingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MovingBlockActor();
#else // @header-generator platform
    virtual ~MovingBlockActor() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MovingBlockActor(::BlockPos const&);
#else // @header-generator platform
    MCAPI explicit MovingBlockActor(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PistonBlockActor const* _getPistonBlock(::IConstBlockSource const&) const;
#else // @header-generator platform
    MCAPI ::std::pair<::AABB, ::AABB> _getWrappedBlockCollisionShapes(::IConstBlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<AABB, AABB> _getWrappedBlockCollisionShapes(::IConstBlockSource const&) const;
#else // @header-generator platform
    MCAPI bool _shouldPreserve(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _shouldPreserve(::BlockSource&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Vec3 getDrawPos(::IConstBlockSource const& region, float a) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 getDrawPos(::IConstBlockSource const&, float) const;

    MCNAPI ::Block const& getWrappedBlock() const;

    MCNAPI ::BlockActor* getWrappedBlockActor();

    MCNAPI ::Block const& getWrappedExtraBlock();

    MCNAPI void moveCollidedEntities(::PistonBlockActor&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void moveCollidedEntities(::PistonBlockActor& pistonBlock, ::BlockSource& region);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isPreserved(::BlockActor const&, ::BlockSource&);

    MCNAPI static bool shouldPreserve(::BlockActor&, ::BlockSource&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool isPreserved(::BlockActor const& blockActor, ::BlockSource& region);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& pos);
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
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


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

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
