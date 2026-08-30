#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class IConstBlockSource;
// clang-format on

class StainedGlassBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDoesDrops;
    ::ll::TypedStorage<1, 1, bool> mDoesNotCollideWithCamera;
    // NOLINTEND

public:
    // prevent constructor by default
    StainedGlassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StainedGlassBlock();

    virtual bool getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StainedGlassBlock(std::string const&, int, bool, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool, bool);
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

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
