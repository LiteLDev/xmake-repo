#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlock.h"
#include "mc/scripting/modules/minecraft/events/ScriptEventSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEventCommandMessageAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                               mId;
    ::ll::TypedStorage<8, 24, std::string>                               mMessage;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptEventSource> mSourceType;
    ::ll::UntypedStorage<8, 40>                                          mSourceEntity;
    ::ll::UntypedStorage<8, 40>                                          mInitiatorEntity;
    ::ll::UntypedStorage<8, 40>                                          mSourceBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEventCommandMessageAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptEventCommandMessageAfterEvent(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
