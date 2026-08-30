#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityId;
class EntityRegistry;
// clang-format on

class ItemStackNetManagerScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 32> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackNetManagerScreen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStackNetManagerScreen(::EntityRegistry&);

    MCNAPI ::EntityContext const& getEntity() const;

    MCNAPI ::EntityContext& getEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
