#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CartographyTableBlock : public ::BlockType {
public:
    // prevent constructor by default
    CartographyTableBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CartographyTableBlock();

    virtual bool isCraftingBlock() const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CartographyTableBlock(std::string const&, int);

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
