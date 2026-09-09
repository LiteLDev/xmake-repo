#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/CropBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class TorchflowerCropBlock : public ::CropBlock {
public:
    // prevent constructor by default
    TorchflowerCropBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TorchflowerCropBlock();

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual int getVariant(::Block const&) const;

    virtual ::Block const& setGrowth(::BlockSource&, ::BlockPos const&, ::Block const&, ushort, int) const;

    virtual ::ItemInstance const getBaseSeed() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TorchflowerCropBlock(std::string const&, int);
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
    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI ::Block const& $setGrowth(::BlockSource&, ::BlockPos const&, ::Block const&, ushort, int) const;

    MCNAPI ::ItemInstance const $getBaseSeed() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
