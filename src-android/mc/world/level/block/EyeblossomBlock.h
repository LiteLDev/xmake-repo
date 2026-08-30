#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FlowerBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Experiments;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class EyeblossomBlock : public ::FlowerBlock {
public:
    // prevent constructor by default
    EyeblossomBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EyeblossomBlock();

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    virtual void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EyeblossomBlock(std::string const&, int);

    MCNAPI void _updateEyeblossomState(::BlockSource&, ::BlockPos const&, ::Random&, bool) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
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
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
