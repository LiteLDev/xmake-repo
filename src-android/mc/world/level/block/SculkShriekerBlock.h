#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class EntityContext;
class Material;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SculkShriekerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkShriekerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SculkShriekerBlock();

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual int getVariant(::Block const&) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;

    virtual ::Block const& getInitialDefaultState();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SculkShriekerBlock(std::string const&, int, ::Material const&);

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
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
    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getInitialDefaultState();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
