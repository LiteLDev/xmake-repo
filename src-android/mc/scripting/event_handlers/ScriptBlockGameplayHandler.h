#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/gameplayhandlers/BlockGameplayHandler.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"

// auto generated forward declare list
// clang-format off
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ExplosionStartedEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptBlockGameplayHandler : public ::EventHandlerDispatcher<BlockGameplayHandler>,
                                   public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockGameplayHandler();

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::BlockTryPlaceByPlayerEvent const&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ExplosionStartedEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::BlockTryDestroyByPlayerEvent&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleBlockTryDestroyByPlayerEvent(
        ::BlockTryDestroyByPlayerEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;

    MCNAPI bool _handleBlockTryPlaceByPlayerEvent(
        ::BlockTryPlaceByPlayerEvent const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;

    MCNAPI bool _handleExplosionStartedEvent(
        ::ExplosionStartedEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BlockTryPlaceByPlayerEvent const&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ExplosionStartedEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BlockTryDestroyByPlayerEvent&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
