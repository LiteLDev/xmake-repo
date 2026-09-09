#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/item/ItemDescriptor.h"

struct SlotDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mSlot;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mAcceptedItems;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>            mItemDescriptor;
    ::ll::TypedStorage<8, 24, std::string>                 mInteractText;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnEquip;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnUnequip;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SlotDescriptor(::SlotDescriptor const&);

    MCNAPI void addAcceptedItem(::ItemDescriptor const&);

    MCNAPI ::SlotDescriptor& operator=(::SlotDescriptor const&);

    MCNAPI ~SlotDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SlotDescriptor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
