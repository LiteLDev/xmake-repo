#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

class MelonBlock : public ::BlockType {
public:
    // prevent constructor by default
    MelonBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MelonBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MelonBlock(std::string const&, int);
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
