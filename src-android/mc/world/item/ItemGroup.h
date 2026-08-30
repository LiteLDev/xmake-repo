#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"

class ItemGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance>   mItemTemplate;
    ::ll::TypedStorage<4, 8, std::optional<int>> mStackSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemGroup(ItemGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemGroup(::ItemInstance const&);

    MCNAPI ItemGroup(::ItemInstance const&, int);

    MCNAPI int getCount() const;

    MCNAPI ::ItemInstance const& getItemInstance() const;

    MCNAPI ::ItemInstance getItemInstanceCopy() const;

    MCNAPI bool isEmpty() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemInstance const&);

    MCNAPI void* $ctor(::ItemInstance const&, int);
    // NOLINTEND
};
