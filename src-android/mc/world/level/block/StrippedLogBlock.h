#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LogBlockMapColors.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

class StrippedLogBlock : public ::RotatedPillarBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, std::optional<LogBlockMapColors>> mMapColors;
    // NOLINTEND

public:
    // prevent constructor by default
    StrippedLogBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StrippedLogBlock();

    virtual int getVariant(::Block const&) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StrippedLogBlock(std::string const&, int, std::optional<LogBlockMapColors>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, std::optional<LogBlockMapColors>);
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

    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
