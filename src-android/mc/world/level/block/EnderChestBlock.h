#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ChestBlock.h"

// auto generated forward declare list
// clang-format off
struct BlockAnimateTickData;
// clang-format on

class EnderChestBlock : public ::ChestBlock {
public:
    // prevent constructor by default
    EnderChestBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnderChestBlock();

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnderChestBlock(std::string const&, int);
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
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
