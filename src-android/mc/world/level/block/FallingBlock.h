#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Material;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class FallingBlock : public ::BlockType {
public:
    // prevent constructor by default
    FallingBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FallingBlock();

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual ::mce::Color getDustColor(::Block const&) const = 0;

    virtual std::string getDustParticleName(::Block const&) const = 0;

    virtual bool falling() const;

    virtual void onLand(::BlockSource&, ::BlockPos const&) const;

    virtual bool isFreeToFall(::BlockSource&, ::BlockPos const&) const;

    virtual void startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FallingBlock(std::string const&, int, ::Material const&);

    MCNAPI void _tickBlocksAround2D(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI void checkSlide(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void triggerFallCheck(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI bool $falling() const;

    MCNAPI void $onLand(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isFreeToFall(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
