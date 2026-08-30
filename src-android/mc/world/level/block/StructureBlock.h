#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class StructureBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    StructureBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureBlock();

    virtual bool isConsumerComponent() const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureBlock(std::string const&, int);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _onSetupRedstoneComponent(::BlockSource&, ::BlockPos const&);
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
    MCNAPI bool $isConsumerComponent() const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
