#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gameplayhandlers/BlockGameplayHandler.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ExplosionStartedEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptBlockGameplayHandler : public ::EventHandlerDispatcher<BlockGameplayHandler>,
                                   public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#else // @header-generator platform
class ScriptBlockGameplayHandler : public ::EventHandlerDispatcher<::BlockGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptBlockGameplayHandler();
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ExplosionStartedEvent& explosionStartedEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::BlockTryPlaceByPlayerEvent const&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BlockTryDestroyByPlayerEvent& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BlockTryPlaceByPlayerEvent const& eventData) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BlockTryPlaceByPlayerEvent const&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ExplosionStartedEvent& explosionStartedEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ExplosionStartedEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BlockTryDestroyByPlayerEvent& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BlockTryDestroyByPlayerEvent&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BlockTryPlaceByPlayerEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
