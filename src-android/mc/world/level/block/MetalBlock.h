#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

class MetalBlock : public ::BlockType {
public:
    // prevent constructor by default
    MetalBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MetalBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MetalBlock(std::string const&, int);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
