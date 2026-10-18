#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/NpcEventListener.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
struct INpcDialogueData;
#else // @header-generator platform
class NpcEventListener;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class NpcEventCoordinator : public ::EventCoordinator<::NpcEventListener> {};
#endif // @header-generator platform
