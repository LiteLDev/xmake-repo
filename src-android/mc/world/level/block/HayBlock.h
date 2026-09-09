#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class ItemInstance;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class HayBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    HayBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HayBlock();

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual int getVariant(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HayBlock(std::string const&, int);

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
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
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI int $getVariant(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
