#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlock.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandSource.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptCustomCommandSource> mSourceType;
    ::ll::UntypedStorage<8, 40>                                                  mSourceEntity;
    ::ll::UntypedStorage<8, 40>                                                  mInitiatorEntity;
    ::ll::UntypedStorage<8, 40>                                                  mSourceBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomCommandOrigin(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptCustomCommandOrigin&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandOrigin&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptCustomCommandOrigin&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
