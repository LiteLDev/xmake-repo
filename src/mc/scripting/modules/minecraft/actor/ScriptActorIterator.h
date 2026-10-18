#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
#if defined(LL_PLAT_A) // @header-generator platform
                                ScriptModuleMinecraft::ScriptActorIterator,
                                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>> {
public:
    // prevent constructor by default
    ScriptActorIterator();

#else // @header-generator platform
                                ::ScriptModuleMinecraft::ScriptActorIterator,
                                ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> {
#endif // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
