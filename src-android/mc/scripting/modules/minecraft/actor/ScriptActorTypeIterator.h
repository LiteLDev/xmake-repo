#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptMapValueIterator.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypeIterator
: public ::ScriptModuleMinecraft::ScriptMapValueIterator<
      ScriptModuleMinecraft::ScriptActorTypeIterator,
      std::unordered_map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorType>>> {
public:
    // prevent constructor by default
    ScriptActorTypeIterator();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
