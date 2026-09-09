#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

class SnowBlock : public ::BlockType {
public:
    // prevent constructor by default
    SnowBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SnowBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SnowBlock(std::string const&, int);
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
