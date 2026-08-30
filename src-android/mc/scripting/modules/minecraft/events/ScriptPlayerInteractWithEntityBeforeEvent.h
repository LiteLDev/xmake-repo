#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithEntityEvent.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct PlayerInteractWithEntityBeforeEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>    mItemStack;
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerInteractWithEntityBeforeEvent(
        ::Player&,
        ::Actor&,
        ::PlayerInteractWithEntityBeforeEvent const&,
        ::Scripting::WeakLifetimeScope&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&, ::Scripting::WeakLifetimeScope&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
