#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/ContainerContentChangeListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

class LegacyActorArmorChangedListener : public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mActorEntity;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerContentChanged(int);

    virtual ~LegacyActorArmorChangedListener();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void containerContentChanged(::Actor&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initializeEntity(::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
