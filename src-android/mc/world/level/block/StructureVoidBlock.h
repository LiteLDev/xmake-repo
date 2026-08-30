#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
// clang-format on

class StructureVoidBlock : public ::BlockType {
public:
    // prevent constructor by default
    StructureVoidBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StructureVoidBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureVoidBlock(std::string const&, int);
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

    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool $isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $canRenderSelectionOverlay(::BlockRenderLayer) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
