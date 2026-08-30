#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Container;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class TntBlock : public ::BlockType {
public:
    // prevent constructor by default
    TntBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TntBlock();

    virtual bool shouldDispense(::BlockSource&, ::Container&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual void destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;

    virtual void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TntBlock(std::string const&, int);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void _setAllowUnderwater(::Actor*) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool tryLightTnt(::Player&, ::BlockPos const&);
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
    MCNAPI bool $shouldDispense(::BlockSource&, ::Container&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI void $destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;

    MCNAPI void $onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
