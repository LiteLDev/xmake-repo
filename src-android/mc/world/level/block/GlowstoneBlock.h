#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class Material;
class Vec3;
// clang-format on

class GlowstoneBlock : public ::BlockType {
public:
    // prevent constructor by default
    GlowstoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GlowstoneBlock();

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GlowstoneBlock(std::string const&, int, ::Material const&);
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
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
