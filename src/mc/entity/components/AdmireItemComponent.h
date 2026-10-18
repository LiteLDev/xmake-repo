#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct AdmireItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>             mIsAdmiring;
    ::ll::TypedStorage<8, 152, ::ItemStack>    mAdmireItem;
    ::ll::TypedStorage<8, 8, ::Tick>           mAdmireUntil;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mItemOwnerRef;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mItemOwnerRef;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AdmireItemComponent& operator=(AdmireItemComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onAdmireItemPickedUp(::Actor const&, ::ItemStack const&, ::Actor*);
#else // @header-generator platform
    MCAPI void onAdmireItemPickedUp(::Actor const& owner, ::ItemStack const& item, ::Actor* itemOwner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void stopAdmiring();

    MCNAPI ~AdmireItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void stopAdmiring();
#endif // @header-generator platform
    // NOLINTEND
};
