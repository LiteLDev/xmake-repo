#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
                                ScriptModuleMinecraft::ScriptActorIterator,
                                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>> {
public:
    // prevent constructor by default
    ScriptActorIterator();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
