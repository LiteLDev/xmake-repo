#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class Material;
// clang-format on

class HugeMushroomBlock : public ::BlockType {
public:
    // prevent constructor by default
    HugeMushroomBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HugeMushroomBlock();

    virtual ::Block const& getInitialDefaultState();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HugeMushroomBlock(std::string const&, int, ::Material const&);
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
    MCNAPI ::Block const& $getInitialDefaultState();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
