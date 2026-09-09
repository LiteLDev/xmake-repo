#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class DeepslateBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    DeepslateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeepslateBlock();

    virtual bool canBeOriginalSurface(bool) const;

    virtual ::Block const* tryGetInfested(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeepslateBlock(std::string const&, int);
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

    MCNAPI ::Block const* $tryGetInfested(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
