#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventCoordinator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingEventListener.h"
#include "mc/world/events/ScriptingGameplayEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ScriptingEventHandler;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ScriptingEventListener;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptingEventCoordinator : public ::EventCoordinator<ScriptingEventListener> {
#else // @header-generator platform
class ScriptingEventCoordinator : public ::EventCoordinator<::ScriptingEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptingEventHandler>> mScriptingEventHandler;
#endif // @header-generator platform
    // NOLINTEND
};
