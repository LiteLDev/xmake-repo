#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
namespace ScriptModuleMinecraft { class ScriptTextPrimitive; }
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapeError; }
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapesDataComponent; }
namespace ScriptModuleMinecraft { struct ScriptShapeQueryOptions; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPrimitiveManager : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptPrimitiveManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                              mScope;
    ::ll::TypedStorage<8, 8, ::ServerLevel&>                                               mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptPrimitiveShapesDataComponent*> mDataComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrimitiveManager& operator=(ScriptPrimitiveManager const&);
    ScriptPrimitiveManager(ScriptPrimitiveManager const&);
    ScriptPrimitiveManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrimitiveManager(::Scripting::WeakLifetimeScope, ::gsl::not_null<ServerLevel*>);

    MCNAPI ~ScriptPrimitiveManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::gsl::not_null<ServerLevel*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
