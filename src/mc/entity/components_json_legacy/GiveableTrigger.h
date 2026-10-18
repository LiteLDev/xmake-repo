#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on
#endif // @header-generator platform

struct GiveableTrigger {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mGiveableItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnGive;
    ::ll::TypedStorage<4, 4, float>                        mCooldown;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mGiveableItems;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnGive;
    ::ll::TypedStorage<4, 4, float>                            mCooldown;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GiveableTrigger& operator=(GiveableTrigger const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addItem(::ItemDescriptor const&);
#else // @header-generator platform
    MCFOLD void addItem(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~GiveableTrigger();
#else // @header-generator platform
    MCAPI ~GiveableTrigger();
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
