#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct CraftUpdateResultItemClientEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                      mActor;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftUpdateResultItemClientEvent& operator=(CraftUpdateResultItemClientEvent const&);
    CraftUpdateResultItemClientEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CraftUpdateResultItemClientEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mActor;
    ::ll::TypedStorage<8, 128, ::ItemInstance const>      mItem;
#endif // @header-generator platform
    // NOLINTEND
};
