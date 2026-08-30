#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingEventListener.h"
#include "mc/world/events/ScriptingGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class ScriptingEventHandler;
// clang-format on

class ScriptingEventCoordinator : public ::EventCoordinator<ScriptingEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptingEventHandler>> mScriptingEventHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptingEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptingEventHandler& getScriptingEventHandler();

    MCNAPI void registerScriptingEventHandler(std::unique_ptr<ScriptingEventHandler>&&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<ScriptingGameplayEvent<CoordinatorResult>> const);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<MutableScriptingGameplayEvent<CoordinatorResult>>);
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
