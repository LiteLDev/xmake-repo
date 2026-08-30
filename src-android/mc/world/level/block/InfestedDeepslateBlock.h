#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarInfestedBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class Material;
// clang-format on

class InfestedDeepslateBlock : public ::RotatedPillarInfestedBlock {
public:
    // prevent constructor by default
    InfestedDeepslateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InfestedDeepslateBlock();

    virtual ::Block const* tryGetUninfested(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InfestedDeepslateBlock(std::string const&, int, ::Material const&);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const* $tryGetUninfested(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
