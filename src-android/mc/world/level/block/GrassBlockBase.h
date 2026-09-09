#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class IRandom;
class ItemStack;
struct Brightness;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class GrassBlockBase : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::BlockDescriptor const> mTillsIntoBlock;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor const> mGrowsOnBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    GrassBlockBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GrassBlockBase();

    virtual bool canBeOriginalSurface(bool) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool tryToTill(::BlockSource&, ::BlockPos const&, ::Actor&, ::ItemStack&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual bool _plantGrass(::BlockSource&, ::BlockPos const&, ::IRandom&) const = 0;

    virtual bool _shouldStopRandomWalk(::BlockSource&, ::BlockPos&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canBeGrass(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Brightness const& MIN_BRIGHTNESS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canBeOriginalSurface(bool) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $tryToTill(::BlockSource&, ::BlockPos const&, ::Actor&, ::ItemStack&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
