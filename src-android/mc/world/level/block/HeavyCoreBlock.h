#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
// clang-format on

class HeavyCoreBlock : public ::BlockType {
public:
    // prevent constructor by default
    HeavyCoreBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HeavyCoreBlock();

    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HeavyCoreBlock(std::string const&, int);
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
    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
    ) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
