#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Material;
// clang-format on

class MangroveRootsBlock : public ::BlockType {
public:
    // prevent constructor by default
    MangroveRootsBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MangroveRootsBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MangroveRootsBlock(std::string const&, int, ::Material const&);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
