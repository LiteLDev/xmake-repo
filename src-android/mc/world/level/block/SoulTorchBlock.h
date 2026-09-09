#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TorchBlock.h"

// auto generated forward declare list
// clang-format off
class Experiments;
// clang-format on

class SoulTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    SoulTorchBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoulTorchBlock();

    virtual void _addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SoulTorchBlock(std::string const&, int);
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
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
