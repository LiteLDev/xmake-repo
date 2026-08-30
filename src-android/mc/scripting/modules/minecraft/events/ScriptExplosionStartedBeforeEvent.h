#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptExplosionStartedAfterEvent.h"

// auto generated forward declare list
// clang-format off
struct ExplosionStartedEvent;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedBeforeEvent : public ::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExplosionStartedBeforeEvent& operator=(ScriptExplosionStartedBeforeEvent const&);
    ScriptExplosionStartedBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptExplosionStartedBeforeEvent(::ExplosionStartedEvent const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI void copyTo(::ExplosionStartedEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExplosionStartedEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
