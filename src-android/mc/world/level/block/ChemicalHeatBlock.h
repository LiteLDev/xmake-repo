#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockPos;
class BlockSource;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class ChemicalHeatBlock : public ::BlockType {
public:
    // prevent constructor by default
    ChemicalHeatBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChemicalHeatBlock();

    virtual bool canBeUsedInCommands(::BaseGameVersion const&) const;

    virtual int getExtraRenderLayers() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChemicalHeatBlock(std::string const&, int);

    MCNAPI void _tick(::BlockSource&, ::BlockPos const&, ::Random&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
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
    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const&) const;

    MCNAPI int $getExtraRenderLayers() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
