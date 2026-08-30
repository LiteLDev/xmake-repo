#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/item/ItemDescriptor.h"

struct GiveableTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mGiveableItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnGive;
    ::ll::TypedStorage<4, 4, float>                        mCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveableTrigger& operator=(GiveableTrigger const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addItem(::ItemDescriptor const&);

    MCNAPI ~GiveableTrigger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
