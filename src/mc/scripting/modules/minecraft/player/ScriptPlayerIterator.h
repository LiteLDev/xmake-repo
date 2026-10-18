#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
                                 ::ScriptModuleMinecraft::ScriptPlayerIterator,
                                 ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> {
#endif // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>&&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
