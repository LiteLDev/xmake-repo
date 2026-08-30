#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/CopperBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class IConstBlockSource;
struct CopperBlockSet;
// clang-format on

class CopperGrateBlock : public ::CopperBlock<BlockType> {
public:
    // prevent constructor by default
    CopperGrateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CopperGrateBlock();

    virtual bool getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CopperGrateBlock(std::string const&, int, ::CopperBlockSet const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CopperBlockSet const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
