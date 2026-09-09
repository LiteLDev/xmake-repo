#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityRaycastHit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>     mActor;
    ::ll::TypedStorage<4, 4, float> mDistance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptEntityRaycastHit(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor> const&, float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor> const&, float);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
