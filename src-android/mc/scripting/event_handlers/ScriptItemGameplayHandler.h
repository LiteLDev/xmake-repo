#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/ItemGameplayHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"

// auto generated forward declare list
// clang-format off
struct ItemUseEvent;
struct ItemUseOnEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptItemGameplayHandler : public ::EventHandlerDispatcher<ItemGameplayHandler>,
                                  public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemGameplayHandler();

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ItemUseOnEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ItemUseEvent&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleItemUseEvent(
        ::ItemUseEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    );

    MCNAPI bool _handleItemUseOnEvent(
        ::ItemUseOnEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ItemUseOnEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ItemUseEvent&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
