#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Material;
// clang-format on

class NetherReactorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    NetherReactorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherReactorBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherReactorBlock(std::string const&, int, ::Material const&);
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
