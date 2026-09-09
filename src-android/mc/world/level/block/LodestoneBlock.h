#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LodestoneBlockActor;
class Material;
// clang-format on

class LodestoneBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    LodestoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LodestoneBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LodestoneBlock(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LodestoneBlockActor* getBlockActor(::BlockSource&, ::BlockPos const&);
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
