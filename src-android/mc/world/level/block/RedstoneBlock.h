#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RedstoneBlock : public ::BlockType {
public:
    // prevent constructor by default
    RedstoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RedstoneBlock();

    virtual bool canSpawnOn(::Actor*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RedstoneBlock(std::string const&, int);
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
    MCNAPI bool $canSpawnOn(::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
