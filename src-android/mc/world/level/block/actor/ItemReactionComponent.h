#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ItemStack;
class LabTableReaction;
// clang-format on

class ItemReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStack>> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemReactionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemReactionComponent();

    virtual void _onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
