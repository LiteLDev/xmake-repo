#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class ChorusFlowerBlock : public ::BlockType {
public:
    // prevent constructor by default
    ChorusFlowerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChorusFlowerBlock();

    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isLavaBlocking() const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChorusFlowerBlock(std::string const&, int);

    MCNAPI void _placeGrownFlower(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _allNeighborsEmpty(::BlockSource&, ::BlockPos const&, uchar);

    MCNAPI static void _growTreeRecursive(::BlockSource&, ::BlockPos const&, ::BlockPos const&, ::Random&, int, int);

    MCNAPI static void generatePlant(::BlockSource&, ::BlockPos const&, ::Random&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& BRANCH_DIRECTIONS();

    MCNAPI static ushort const& DEAD_AGE();

    MCNAPI static int const& GROW_RATE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
