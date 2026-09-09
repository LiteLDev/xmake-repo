#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
                                 ScriptModuleMinecraft::ScriptPlayerIterator,
                                 Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>> {
public:
    // prevent constructor by default
    ScriptPlayerIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPlayerIterator(
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>&&
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
    MCNAPI void* $ctor(std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>&&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
