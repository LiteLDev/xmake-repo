#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Material;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SculkCatalystBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkCatalystBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SculkCatalystBlock();

    virtual int getVariant(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SculkCatalystBlock(std::string const&, int, ::Material const&);

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bloom(::BlockSource&, ::BlockPos const&, ::Block const&, ::Random&);
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
    MCNAPI int $getVariant(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
