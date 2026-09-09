#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Container;
class ItemStack;
class Level;
class Player;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class RespawnAnchorBlock : public ::BlockType {
public:
    // prevent constructor by default
    RespawnAnchorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RespawnAnchorBlock();

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual bool canSpawnAt(::BlockSource const&, ::BlockPos const&) const;

    virtual void notifySpawnedAt(::BlockSource&, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual bool isInteractiveBlock() const;

    virtual ::Brightness getLightEmission(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RespawnAnchorBlock(std::string const&, int);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _bumpCharge(::BlockSource&, ::BlockPos const&, ::Player*, short const);

    MCNAPI static bool addItem(::ItemStack const&, ::BlockSource&, ::Block const&, ::BlockPos const&);

    MCNAPI static bool
    addItem(::Container&, int, ::ItemStack const&, ::BlockSource&, ::Block const&, ::BlockPos const&);
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
    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI bool $canSpawnAt(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI void $notifySpawnedAt(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
