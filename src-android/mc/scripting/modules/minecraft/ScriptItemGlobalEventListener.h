#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ItemEventListener.h"

// auto generated forward declare list
// clang-format off
struct ItemCompleteUseEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUsedOnEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemGlobalEventListener : public ::EventListenerDispatcher<ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemGlobalEventListener();

    virtual ::EventResult onEvent(::ItemUseEvent const&);

    virtual ::EventResult onEvent(::ItemUsedOnEvent const&);

    virtual ::EventResult onEvent(::ItemStartUseOnEvent const&);

    virtual ::EventResult onEvent(::ItemStopUseOnEvent const&);

    virtual ::EventResult onEvent(::ItemStartUseEvent const&);

    virtual ::EventResult onEvent(::ItemCompleteUseEvent const&);

    virtual ::EventResult onEvent(::ItemReleaseUseEvent const&);

    virtual ::EventResult onEvent(::ItemStopUseEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerListener(
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptWorldAfterEvents>
    );

    MCNAPI void registerListener(
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptV010Events>
    );

    MCNAPI void unregisterListener(::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldAfterEvents>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ItemUseEvent const&);

    MCNAPI ::EventResult $onEvent(::ItemUsedOnEvent const&);

    MCNAPI ::EventResult $onEvent(::ItemStartUseOnEvent const&);

    MCNAPI ::EventResult $onEvent(::ItemStopUseOnEvent const&);

    MCNAPI ::EventResult $onEvent(::ItemStartUseEvent const&);

    MCNAPI ::EventResult $onEvent(::ItemCompleteUseEvent const&);

    MCNAPI ::EventResult $onEvent(::ItemReleaseUseEvent const&);

    MCNAPI ::EventResult $onEvent(::ItemStopUseEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
