#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

class BedrockBlock : public ::BlockType {
public:
    // prevent constructor by default
    BedrockBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BedrockBlock();

    virtual bool canBeOriginalSurface(bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BedrockBlock(std::string const&, int);
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
    MCNAPI bool $canBeOriginalSurface(bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
