#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class Material;
// clang-format on

class ChainBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    ChainBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChainBlock();

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChainBlock(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
