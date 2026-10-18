#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class Material;
class MobSpawnerData;
class SpawnConditions;
// clang-format on

class SlabBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            mIsDouble;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mOtherSlab;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mOtherSlab;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SlabBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SlabBlock();
#else // @header-generator platform
    virtual bool isSlabBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
#else // @header-generator platform
    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSlabBlock() const;
#else // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
#else // @header-generator platform
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);
    // clang-format on
#else // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SlabBlock(std::string const&, int, bool, ::Material const&, ::HashedString const&);

    MCNAPI ::Block const& getDoubleSlab() const;

    MCNAPI ::HashedString const& getOtherSlabId() const;

    MCNAPI ::Block const& getSingleSlab() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isDoubleSlab(::Block const&);
#else // @header-generator platform
    MCAPI SlabBlock(
        ::std::string const&  nameId,
        int                   id,
        bool                  isDouble,
        ::Material const&     mat,
        ::HashedString const& otherSlab
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, bool, ::Material const&, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void*
    $ctor(::std::string const& nameId, int id, bool isDouble, ::Material const& mat, ::HashedString const& otherSlab);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    MCFOLD bool $isSlabBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI bool $isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

    MCAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
#else // @header-generator platform
    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSlabBlock() const;
#else // @header-generator platform
    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
#else // @header-generator platform
    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
