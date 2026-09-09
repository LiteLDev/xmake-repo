#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/ScriptBlockType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mBlocks;
    ::ll::UntypedStorage<8, 40> mBlockAliases;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockTypes& operator=(ScriptBlockTypes const&);
    ScriptBlockTypes(ScriptBlockTypes const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _generateAllBlockHandles(::Scripting::WeakLifetimeScope&);

    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>>
           getAllBlockTypes(::Scripting::WeakLifetimeScope&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>>
           get_V010(::Scripting::WeakLifetimeScope&, std::string const&);

    MCNAPI ~ScriptBlockTypes();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bind_V010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
