#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalBlock.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class LoomBlock : public ::FaceDirectionalBlock {
public:
    // prevent constructor by default
    LoomBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoomBlock();

    virtual bool isCraftingBlock() const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoomBlock(std::string const&, int);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
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
    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
