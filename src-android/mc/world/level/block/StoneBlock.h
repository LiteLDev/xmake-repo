#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
namespace mce { class Color; }
// clang-format on

class StoneBlock : public ::BlockType {
public:
    // prevent constructor by default
    StoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StoneBlock();

    virtual bool canBeOriginalSurface(bool) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual ::Block const* tryGetInfested(::Block const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StoneBlock(std::string const&, int);
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
    MCNAPI bool $canBeOriginalSurface(bool) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI ::Block const* $tryGetInfested(::Block const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
