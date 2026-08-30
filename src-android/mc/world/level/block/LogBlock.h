#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/LogBlockMapColors.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockType;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class LogBlock : public ::RotatedPillarBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                  mStrippedBlockType;
    ::ll::TypedStorage<4, 36, std::optional<LogBlockMapColors>> mMapColors;
    // NOLINTEND

public:
    // prevent constructor by default
    LogBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LogBlock();

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LogBlock(std::string const&, int, ::WeakPtr<const BlockType>, std::optional<LogBlockMapColors>);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::WeakPtr<const BlockType>, std::optional<LogBlockMapColors>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
