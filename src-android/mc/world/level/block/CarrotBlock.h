#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CropBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class CarrotBlock : public ::CropBlock {
public:
    // prevent constructor by default
    CarrotBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CarrotBlock();

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual int getVariant(::Block const&) const;

    virtual ::ItemInstance const getBaseSeed() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CarrotBlock(std::string const&, int);
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

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI ::ItemInstance const $getBaseSeed() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
