#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/item/ItemDescriptor.h"

struct SlotDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                          mSlot;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mAcceptedItems;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>            mItemDescriptor;
    ::ll::TypedStorage<8, 24, std::string>                 mInteractText;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnEquip;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnUnequip;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                              mSlot;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mAcceptedItems;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                mItemDescriptor;
    ::ll::TypedStorage<8, 32, ::std::string>                   mInteractText;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnEquip;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnUnequip;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SlotDescriptor(::SlotDescriptor const&);
#else // @header-generator platform
    MCFOLD void addAcceptedItem(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAcceptedItem(::ItemDescriptor const&);

    MCNAPI ::SlotDescriptor& operator=(::SlotDescriptor const&);

    MCNAPI ~SlotDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SlotDescriptor const&);
#else // @header-generator platform
    MCAPI ~SlotDescriptor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
