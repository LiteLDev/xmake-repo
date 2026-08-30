#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/LeavesBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
struct BlockGraphicsModeChangeContext;
// clang-format on

class SeasonsAgnosticLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    SeasonsAgnosticLeavesBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SeasonsAgnosticLeavesBlock();

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SeasonsAgnosticLeavesBlock(
        std::string const&,
        int,
        ::HashedString const&,
        std::optional<LeavesBlock::ParticleParams>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::HashedString const&, std::optional<LeavesBlock::ParticleParams>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);

    MCNAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
