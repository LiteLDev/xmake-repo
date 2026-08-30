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
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mItemOwnerRef;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemComponent& operator=(AdmireItemComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onAdmireItemPickedUp(::Actor const&, ::ItemStack const&, ::Actor*);

    MCNAPI void stopAdmiring();

    MCNAPI ~AdmireItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
