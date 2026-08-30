#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/NpcEventListener.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct INpcDialogueData;
// clang-format on

class NpcEventCoordinator : public ::EventCoordinator<NpcEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NpcEventCoordinator();

    MCNAPI void sendNpcDialogueDataChange(std::shared_ptr<INpcDialogueData>);

    MCNAPI void sendNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
