#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class MudBlock : public ::BlockType {
public:
    // prevent constructor by default
    MudBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MudBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    virtual bool canBeOriginalSurface(bool) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MudBlock(std::string const&, int);

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::AABB& BLOCK_AABB();
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
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool
    $getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI bool $canBeOriginalSurface(bool) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
